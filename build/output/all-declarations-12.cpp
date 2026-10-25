#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'actualBuildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_actualBuildConfig_3F__3F__26__21_ (const GGS_configRegisterMap constinArgument_inConfigRegisterMap,
                                                const GGS_configDefinitionList constinArgument_inConfigDefinitionList,
                                                GGS_string & ioArgument_ioListFileContents,
                                                GGS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  outArgument_outActualConfigurationMap = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
  GGS_configFieldMap var_configFieldMap_960 = GGS_configFieldMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_configRegisterMap enumerator_1062 (constinArgument_inConfigRegisterMap) ;
  while (enumerator_1062.hasCurrentObject ()) {
    GGS_uint var_defaultValue_1106 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)).left_shift_operation (enumerator_1062.current_mRegisterWidth (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)) ;
    {
    outArgument_outActualConfigurationMap.setter_insertKey (enumerator_1062.current_lkey (HERE), enumerator_1062.current_mRegisterAddress (HERE).readProperty_uint (), var_defaultValue_1106, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 26)) ;
    }
    GGS_lstring var_registerName_1259 = enumerator_1062.current_lkey (HERE) ;
    UpEnumerator_configRegisterMaskMap enumerator_1335 (enumerator_1062.current_mConfigRegisterMaskMap (HERE)) ;
    while (enumerator_1335.hasCurrentObject ()) {
      {
      var_configFieldMap_960.setter_insertKey (enumerator_1335.current_lkey (HERE), var_registerName_1259, enumerator_1335.current_mMaskValue (HERE), enumerator_1335.current_mDescription (HERE), enumerator_1335.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 29)) ;
      }
      enumerator_1335.gotoNextObject () ;
    }
    enumerator_1062.gotoNextObject () ;
  }
  GGS_stringset var_actualSettingNameSet_1563 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_configDefinitionList enumerator_1608 (constinArgument_inConfigDefinitionList) ;
  while (enumerator_1608.hasCurrentObject ()) {
    UpEnumerator_configSettingList enumerator_1674 (enumerator_1608.current_mSettingList (HERE)) ;
    while (enumerator_1674.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_actualSettingNameSet_1563.getter_hasKey (enumerator_1674.current_mSettingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 36)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_1674.current_mSettingName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_1674.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 37)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 37)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 37)) ;
        }
      }
      var_actualSettingNameSet_1563.plusPlusAssignOperation (enumerator_1674.current_mSettingName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 39)) ;
      GGS_lstring var_registerName_1973 ;
      GGS_fieldSettingMap var_fieldSettingMap_1997 ;
      GGS_luint joker_1987_2 ; // Joker input parameter
      GGS_lstring joker_1987_1 ; // Joker input parameter
      var_configFieldMap_960.method_searchKey (enumerator_1674.current_mSettingName (HERE), var_registerName_1973, joker_1987_2, joker_1987_1, var_fieldSettingMap_1997, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 40)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_fieldSettingMap_1997.getter_hasKey (enumerator_1674.current_mSettingValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 41)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_uint var_settingValue_2131 ;
          GGS_uint var_settingMask_2150 ;
          var_fieldSettingMap_1997.method_searchKey (enumerator_1674.current_mSettingValue (HERE), var_settingValue_2131, var_settingMask_2150, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 42)) ;
          GGS_uint var_registerValue_2181 ;
          GGS_uint joker_2255 ; // Joker input parameter
          outArgument_outActualConfigurationMap.method_searchKey (var_registerName_1973, joker_2255, var_registerValue_2181, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 44)) ;
          var_registerValue_2181 = var_registerValue_2181.operator_and (var_settingMask_2150.operator_tilde (SOURCE_FILE ("piccolo_config.galgas3", 45)) COMMA_SOURCE_FILE ("piccolo_config.galgas3", 45)).operator_or (var_settingValue_2131 COMMA_SOURCE_FILE ("piccolo_config.galgas3", 45)) ;
          {
          outArgument_outActualConfigurationMap.setter_setMRegisterValueForKey (var_registerValue_2181, var_registerName_1973.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 46)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::greaterThan, var_fieldSettingMap_1997.getter_count (SOURCE_FILE ("piccolo_config.galgas3", 47)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GGS_string var_errorMessage_2500 = GGS_string ("the '").add_operation (enumerator_1674.current_mSettingValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 48)).add_operation (GGS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 48)).add_operation (enumerator_1674.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 48)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 49)) ;
            GGS_stringlist var_replacementSuggestions_2647 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
            UpEnumerator_fieldSettingMap enumerator_2696 (var_fieldSettingMap_1997) ;
            while (enumerator_2696.hasCurrentObject ()) {
              var_replacementSuggestions_2647.addAssignOperation (GGS_string ("\"").add_operation (enumerator_2696.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 52)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 52))  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 52)) ;
              enumerator_2696.gotoNextObject () ;
            }
            GenericArray <FixItDescription> fixItArray4 ;
            appendFixItActions (fixItArray4, EnumFixItKind::fixItReplace, var_replacementSuggestions_2647) ;
            inCompiler->emitSemanticError (enumerator_1674.current_mSettingValue (HERE).readProperty_location (), var_errorMessage_2500, fixItArray4  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 54)) ;
          }
        }
      }
      enumerator_1674.gotoNextObject () ;
    }
    enumerator_1608.gotoNextObject () ;
  }
  GGS_stringset var_notDefinedSetting_2961 = var_configFieldMap_960.getter_keySet (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 59)).substract_operation (var_actualSettingNameSet_1563, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 59)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_notDefinedSetting_2961.getter_count (SOURCE_FILE ("piccolo_config.galgas3", 60)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_errorMessage_3080 = GGS_string ("the following configuration settings are not defined:") ;
      UpEnumerator_stringset enumerator_3160 (var_notDefinedSetting_2961) ;
      while (enumerator_3160.hasCurrentObject ()) {
        var_errorMessage_3080.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_3160.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 63)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 63)) ;
        enumerator_3160.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 65)), var_errorMessage_3080, fixItArray6  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 65)) ;
    }
  }
  UpEnumerator_actualConfigurationMap enumerator_3361 (outArgument_outActualConfigurationMap) ;
  while (enumerator_3361.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Register '").add_operation (enumerator_3361.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (enumerator_3361.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (GGS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (enumerator_3361.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)) ;
    GGS_configRegisterMaskMap var_configRegisterMaskMap_3597 ;
    GGS_luint joker_3584 ; // Joker input parameter
    GGS_luint joker_3588 ; // Joker input parameter
    GGS_illegalMaskList joker_3620 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3361.current_lkey (HERE), joker_3584, joker_3588, var_configRegisterMaskMap_3597, joker_3620, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 70)) ;
    UpEnumerator_configRegisterMaskMap enumerator_3665 (var_configRegisterMaskMap_3597) ;
    while (enumerator_3665.hasCurrentObject ()) {
      GGS_lstring var_settingName_3738 = enumerator_3665.current_lkey (HERE) ;
      UpEnumerator_fieldSettingMap enumerator_3801 (enumerator_3665.current_mFieldSettingMap (HERE)) ;
      while (enumerator_3801.hasCurrentObject ()) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_3361.current_mRegisterValue (HERE).operator_and (enumerator_3665.current_mMaskValue (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 74)).objectCompare (enumerator_3801.current_mValue (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  setting '").add_operation (var_settingName_3738.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (GGS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (enumerator_3801.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas3", 75)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (GGS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (enumerator_3801.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)) ;
          }
        }
        enumerator_3801.gotoNextObject () ;
      }
      enumerator_3665.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 79)) ;
    enumerator_3361.gotoNextObject () ;
  }
  UpEnumerator_actualConfigurationMap enumerator_4160 (outArgument_outActualConfigurationMap) ;
  while (enumerator_4160.hasCurrentObject ()) {
    GGS_illegalMaskList var_illegalMaskList_4268 ;
    GGS_luint joker_4251 ; // Joker input parameter
    GGS_luint joker_4255 ; // Joker input parameter
    GGS_configRegisterMaskMap joker_4259 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4160.current_lkey (HERE), joker_4251, joker_4255, joker_4259, var_illegalMaskList_4268, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 83)) ;
    UpEnumerator_illegalMaskList enumerator_4322 (var_illegalMaskList_4268) ;
    while (enumerator_4322.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, enumerator_4160.current_mRegisterValue (HERE).operator_and (enumerator_4322.current_mIllegalMask (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 85)).objectCompare (enumerator_4322.current_mIllegalValue (HERE).readProperty_uint ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)), GGS_string ("illegal setting for '").add_operation (enumerator_4160.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)).add_operation (GGS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)).add_operation (enumerator_4322.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4160.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 87)).add_operation (GGS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 87)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 87)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  message: ").add_operation (enumerator_4322.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 88)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 88)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 88)) ;
        }
      }
      enumerator_4322.gotoNextObject () ;
    }
    enumerator_4160.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildConfig_3F__3F__26__21_ (const GGS_configRegisterMap constinArgument_inConfigRegisterMap,
                                          const GGS_configDefinitionList constinArgument_inConfigDefinitionList,
                                          GGS_string & ioArgument_ioListFileContents,
                                          GGS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas3", 102)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 102)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 102)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("MICROCONTROLLER CONFIGURATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas3", 103)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 103)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 103)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 103)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas3", 104)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 104)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 104)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inConfigDefinitionList.getter_count (SOURCE_FILE ("piccolo_config.galgas3", 106)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_actualBuildConfig_3F__3F__26__21_ (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 107)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outActualConfigurationMap = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("No configuration.\n\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 115)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_structured_if instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_CALL instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_JSR instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_GOTO instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_JUMP instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleMidrangeInstructionList????&&&?&?!?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (const GGS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                                                                const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                                                GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                const GGS_uint constinArgument_inTotalBankCount,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                GGS_bool & outArgument_outContinuesInSequence,
                                                                                                const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GGS_bool (true) ;
  UpEnumerator_midrange_5F_instructionList enumerator_2970 (constinArgument_inInstructionList) ;
  while (enumerator_2970.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 87)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2970.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 88)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) enumerator_2970.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 91)) ;
    enumerator_2970.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                     const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                     GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                     GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                     const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     GGS_uint & ioArgument_ioCurrentBank,
                                                                                                     const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                     GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                     const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                     GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_nobanksel temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 124)) ;
    }
  }
  ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 126)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_savebank build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                                                    GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                    GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                    GGS_string & ioArgument_ioListFileContents,
                                                                                                    const GGS_uint constinArgument_inTotalBankCount,
                                                                                                    GGS_uint & ioArgument_ioCurrentBank,
                                                                                                    const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                    GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                    const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerExpression var_STATUS_5F_register_5091 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 147)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 148)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 149)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5259 ;
  GGS_bitSliceTable joker_5473 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_5091.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 154)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5259, joker_5473, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 152)) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5597 ;
  const GGS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  GGS_bitSliceTable joker_5806 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 165)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5597, joker_5806, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 163)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 175)), var_STATUS_5F_IPICregisterDescription_5259, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 173)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 181)), var_save_5F_IPICregisterDescription_5597, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 179)) ;
  GGS_uint var_finalBank_6351 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_savebank temp_3 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_3.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6351, GGS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 185)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_savebank temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mEndOfSaveBankInstruction (), GGS_string ("useless saving: execution does reach the end of \"savebank\" instruction list"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 201)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_savebank temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 206)), var_save_5F_IPICregisterDescription_5597, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 204)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 212)), var_STATUS_5F_IPICregisterDescription_5259, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 210)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_banksel build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                   const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                   GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   const GGS_uint constinArgument_inTotalBankCount,
                                                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                   GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                   const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_banksel temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 232)) ;
    }
  }
  GGS_registerExpression var_STATUS_5F_register_8186 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 236)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 237)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 238)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8355 ;
  GGS_bitSliceTable var_bitSliceTable_8407 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_8186.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8355, var_bitSliceTable_8407, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 242)) ;
  const GGS_midrange_5F_instruction_5F_banksel temp_3 = this ;
  GGS_lstring var_RP_8636 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_8729 ;
  GGS_uint var_sliceSize_8749 ;
  var_bitSliceTable_8407.method_searchKey (var_RP_8636, var_rpIndex_8729, var_sliceSize_8749, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 252)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_8749.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 253)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 253)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8749.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_midrange_5F_instruction_5F_banksel temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_midrange_5F_instruction_5F_banksel temp_10 = this ;
        test_9 = temp_10.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_midrange_5F_instruction_5F_banksel temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticWarning (temp_11.readProperty_mBankIndex ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 259)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 259)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 259)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_midrange_5F_instruction_5F_banksel temp_14 = this ;
      test_13 = GGS_bool (ComparisonKind::greaterOrEqual, temp_14.readProperty_mBankIndex ().readProperty_uint ().objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_banksel temp_15 = this ;
        const GGS_midrange_5F_instruction_5F_banksel temp_16 = this ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mBankIndex ().readProperty_location (), GGS_string ("the bank ").add_operation (temp_16.readProperty_mBankIndex ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 262)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 262)).add_operation (GGS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 262)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 262)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 262)).add_operation (GGS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 262)), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 262)) ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 263)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_midrange_5F_instruction_5F_banksel temp_19 = this ;
          GGS_uint var_shiftedBank_9489 = temp_19.readProperty_mBankIndex ().readProperty_uint () ;
          GGS_uint var_idx_9538 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_8749.isValid ()) {
            uint32_t variant_9550 = var_sliceSize_8749.uintValue () ;
            bool loop_9550 = true ;
            while (loop_9550) {
              loop_9550 = GGS_bool (ComparisonKind::lowerThan, var_idx_9538.objectCompare (var_sliceSize_8749)).isValid () ;
              if (loop_9550) {
                loop_9550 = GGS_bool (ComparisonKind::lowerThan, var_idx_9538.objectCompare (var_sliceSize_8749)).boolValue () ;
              }
              if (loop_9550 && (0 == variant_9550)) {
                loop_9550 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 266)) ;
              }
              if (loop_9550) {
                variant_9550 -= 1 ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_9628 ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::equal, var_shiftedBank_9489.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 268)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    var_op_9628 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 269)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_20) {
                  var_op_9628 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 271)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel temp_21 = this ;
                ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_21.readProperty_mInstructionLocation (), var_op_9628, var_STATUS_5F_IPICregisterDescription_8355, var_rpIndex_8729.add_operation (var_idx_9538, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 277)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 273)) ;
                var_idx_9538.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 278)) ;
                var_shiftedBank_9489 = var_shiftedBank_9489.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 279)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 279)) ;
              }
            }
          }
          const GGS_midrange_5F_instruction_5F_banksel temp_22 = this ;
          ioArgument_ioCurrentBank = temp_22.readProperty_mBankIndex ().readProperty_uint () ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_bool var_optimize_10089 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) ;
        const GGS_midrange_5F_instruction_5F_banksel temp_23 = this ;
        GGS_uint var_shiftedBank_10165 = temp_23.readProperty_mBankIndex ().readProperty_uint () ;
        const GGS_midrange_5F_instruction_5F_banksel temp_24 = this ;
        GGS_uint var_shiftedXorBank_10214 = temp_24.readProperty_mBankIndex ().readProperty_uint ().operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 285)) ;
        GGS_uint var_idx_10282 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_8749.isValid ()) {
          uint32_t variant_10294 = var_sliceSize_8749.uintValue () ;
          bool loop_10294 = true ;
          while (loop_10294) {
            loop_10294 = GGS_bool (ComparisonKind::lowerThan, var_idx_10282.objectCompare (var_sliceSize_8749)).isValid () ;
            if (loop_10294) {
              loop_10294 = GGS_bool (ComparisonKind::lowerThan, var_idx_10282.objectCompare (var_sliceSize_8749)).boolValue () ;
            }
            if (loop_10294 && (0 == variant_10294)) {
              loop_10294 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 287)) ;
            }
            if (loop_10294) {
              variant_10294 -= 1 ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_10372 ;
              GalgasBool test_25 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_25) {
                test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_10165.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 289)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_25) {
                  var_op_10372 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 290)) ;
                }
              }
              if (GalgasBool::boolFalse == test_25) {
                var_op_10372 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 292)) ;
              }
              GalgasBool test_26 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_26) {
                test_26 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_10214.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 294)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_10089.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 294)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 294)).boolEnum () ;
                if (GalgasBool::boolTrue == test_26) {
                  const GGS_midrange_5F_instruction_5F_banksel temp_27 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_27.readProperty_mInstructionLocation (), var_op_10372, var_STATUS_5F_IPICregisterDescription_8355, var_rpIndex_8729.add_operation (var_idx_10282, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 299)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 295)) ;
                }
              }
              if (GalgasBool::boolFalse == test_26) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10372, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)) ;
                ioArgument_ioListFileContents.plusAssignOperation(var_rpIndex_8729.add_operation (var_idx_10282, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)) ;
              }
              var_idx_10282.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 305)) ;
              var_shiftedBank_10165 = var_shiftedBank_10165.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 306)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 306)) ;
              var_shiftedXorBank_10214 = var_shiftedXorBank_10214.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 307)) ;
            }
          }
        }
        const GGS_midrange_5F_instruction_5F_banksel temp_28 = this ;
        ioArgument_ioCurrentBank = temp_28.readProperty_mBankIndex ().readProperty_uint () ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                                               const GGS_uint constinArgument_inTotalBankCount,
                                                                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                                                                               const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                               GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 329)) ;
    }
  }
  GGS_registerExpression var_STATUS_5F_register_11998 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 333)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 334)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 335)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12296 ;
  GGS_bitSliceTable var_bitSliceTable_12352 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_11998.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12296, var_bitSliceTable_12352, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 337)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_3 = this ;
  GGS_lstring var_RP_12399 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_12492 ;
  GGS_uint var_sliceSize_12512 ;
  var_bitSliceTable_12352.method_searchKey (var_RP_12399, var_rpIndex_12492, var_sliceSize_12512, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 347)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_12512.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 348)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 348)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12512.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)) ;
    }
  }
  GGS_uintlist var_registerAddressList_12826 ;
  GGS_uint var_size_12862 ;
  GGS_registerProtection var_protection_12886 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_7 = this ;
  GGS_bitSliceTable joker_12872_2 ; // Joker input parameter
  GGS_string joker_12872_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_12826, var_size_12862, joker_12872_2, joker_12872_1, var_protection_12886, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 352)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mRegister ().readProperty_mRegisterName (), GGS_bool (false), var_protection_12886, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 359)) ;
  GGS_uint var_address_13037 ;
  var_registerAddressList_12826.method_first (var_address_13037, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 360)) ;
  GGS_uint var_newBank_13058 = var_address_13037.right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 361)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 361)) ;
  GGS_sint_36__34_ var_offset_13165 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_9 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_9.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_13165, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 363)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::lowerThan, var_offset_13165.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index value (").add_operation (var_offset_13165.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)).add_operation (GGS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_13165.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 366)).objectCompare (var_size_12862)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("maximum index value is ").add_operation (var_size_12862.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)) ;
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, var_newBank_13058.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_18 = this ;
        test_17 = temp_18.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticWarning (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 372)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 372)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 372)), fixItArray20  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 372)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_16) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_newBank_13058.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("the bank ").add_operation (var_newBank_13058.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)).add_operation (GGS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)).add_operation (GGS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)), fixItArray23  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 376)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GGS_uint var_shiftedBank_13944 = var_newBank_13058 ;
          GGS_uint var_idx_13980 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_12512.isValid ()) {
            uint32_t variant_13992 = var_sliceSize_12512.uintValue () ;
            bool loop_13992 = true ;
            while (loop_13992) {
              loop_13992 = GGS_bool (ComparisonKind::lowerThan, var_idx_13980.objectCompare (var_sliceSize_12512)).isValid () ;
              if (loop_13992) {
                loop_13992 = GGS_bool (ComparisonKind::lowerThan, var_idx_13980.objectCompare (var_sliceSize_12512)).boolValue () ;
              }
              if (loop_13992 && (0 == variant_13992)) {
                loop_13992 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 379)) ;
              }
              if (loop_13992) {
                variant_13992 -= 1 ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_14070 ;
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_13944.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 381)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    var_op_14070 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 382)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_25) {
                  var_op_14070 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 384)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_26 = this ;
                ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_26.readProperty_mInstructionLocation (), var_op_14070, var_STATUS_5F_IPICregisterDescription_12296, var_rpIndex_12492.add_operation (var_idx_13980, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 390)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 386)) ;
                var_idx_13980.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 391)) ;
                var_shiftedBank_13944 = var_shiftedBank_13944.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 392)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 392)) ;
              }
            }
          }
          ioArgument_ioCurrentBank = var_newBank_13058 ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GGS_bool var_optimize_14518 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) ;
        GGS_uint var_shiftedBank_14594 = var_newBank_13058 ;
        GGS_uint var_shiftedXorBank_14630 = var_newBank_13058.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 398)) ;
        GGS_uint var_idx_14685 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_12512.isValid ()) {
          uint32_t variant_14697 = var_sliceSize_12512.uintValue () ;
          bool loop_14697 = true ;
          while (loop_14697) {
            loop_14697 = GGS_bool (ComparisonKind::lowerThan, var_idx_14685.objectCompare (var_sliceSize_12512)).isValid () ;
            if (loop_14697) {
              loop_14697 = GGS_bool (ComparisonKind::lowerThan, var_idx_14685.objectCompare (var_sliceSize_12512)).boolValue () ;
            }
            if (loop_14697 && (0 == variant_14697)) {
              loop_14697 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 400)) ;
            }
            if (loop_14697) {
              variant_14697 -= 1 ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_14775 ;
              GalgasBool test_27 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_27) {
                test_27 = GGS_bool (ComparisonKind::equal, var_shiftedBank_14594.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 402)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_27) {
                  var_op_14775 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 403)) ;
                }
              }
              if (GalgasBool::boolFalse == test_27) {
                var_op_14775 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 405)) ;
              }
              GalgasBool test_28 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_28) {
                test_28 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_14630.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 407)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_14518.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 407)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 407)).boolEnum () ;
                if (GalgasBool::boolTrue == test_28) {
                  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_29 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_29.readProperty_mInstructionLocation (), var_op_14775, var_STATUS_5F_IPICregisterDescription_12296, var_rpIndex_12492.add_operation (var_idx_14685, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 412)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 408)) ;
                }
              }
              if (GalgasBool::boolFalse == test_28) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14775, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)) ;
                ioArgument_ioListFileContents.plusAssignOperation(var_rpIndex_12492.add_operation (var_idx_14685, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)) ;
              }
              var_idx_14685.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 418)) ;
              var_shiftedBank_14594 = var_shiftedBank_14594.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 419)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 419)) ;
              var_shiftedXorBank_14630 = var_shiftedXorBank_14630.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 420)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 420)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_13058 ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_FD build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GGS_registerTable constinArgument_inRegisterTable,
                                                                                              const GGS_constantMap constinArgument_inConstantMap,
                                                                                              GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GGS_string & /* ioArgument_ioListFileContents */,
                                                                                              const GGS_uint constinArgument_inTotalBankCount,
                                                                                              GGS_uint & ioArgument_ioCurrentBank,
                                                                                              const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                              GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                              const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                              GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16389 ;
  const GGS_midrange_5F_instruction_5F_FD temp_0 = this ;
  GGS_bitSliceTable joker_16418 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16389, joker_16418, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 441)) ;
  const GGS_midrange_5F_instruction_5F_FD temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_IPICregisterDescription_16389, temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 450)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_F build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                                                             GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                             GGS_string & /* ioArgument_ioListFileContents */,
                                                                                             const GGS_uint constinArgument_inTotalBankCount,
                                                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                                                             const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                             GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                             const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17331 ;
  const GGS_midrange_5F_instruction_5F_F temp_0 = this ;
  GGS_bitSliceTable joker_17524 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17331, joker_17524, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 474)) ;
  const GGS_midrange_5F_instruction_5F_F temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mFAinstruction (), var_IPICregisterDescription_17331, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 483)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_FB build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GGS_registerTable constinArgument_inRegisterTable,
                                                                                              const GGS_constantMap constinArgument_inConstantMap,
                                                                                              GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GGS_string & /* ioArgument_ioListFileContents */,
                                                                                              const GGS_uint constinArgument_inTotalBankCount,
                                                                                              GGS_uint & ioArgument_ioCurrentBank,
                                                                                              const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                              GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                              const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                              GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18494 ;
  GGS_bitSliceTable var_bitSliceTable_18528 ;
  const GGS_midrange_5F_instruction_5F_FB temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18494, var_bitSliceTable_18528, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 506)) ;
  GGS_uint var_bitNumber_18695 ;
  const GGS_midrange_5F_instruction_5F_FB temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18528, var_bitNumber_18695, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 515)) ;
  const GGS_midrange_5F_instruction_5F_FB temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_18494, var_bitNumber_18695, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 522)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_JSR build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                                                               const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                               GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_19618 ;
  GGS_uint var_requiredBank_19635 ;
  GGS_uint var_returnedBank_19654 ;
  GGS_bool var_preservesBank_19673 ;
  const GGS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_19618, var_requiredBank_19635, var_returnedBank_19654, var_preservesBank_19673, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 546)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_19635.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 547)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_19635.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 547)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JSR temp_2 = this ;
      GGS_string var_errorMessage_19777 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)).add_operation (var_requiredBank_19635.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)) ;
      var_errorMessage_19777.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 549)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 550)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_19777.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 551)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_19777.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 553)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 553)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 553)) ;
      }
      const GGS_midrange_5F_instruction_5F_JSR temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_19777, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 555)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_19618.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_JSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 558)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_19673.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 560)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_19654 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_JSR temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_JSR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 567)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 568)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 564)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 GGS_uint & ioArgument_ioCurrentBank,
                                                                                                 const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                 GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrangeInstruction_5F_checkbank temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBankIndex ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrangeInstruction_5F_checkbank temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 588)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 589)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_midrangeInstruction_5F_checkbank temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 590)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_midrangeInstruction_5F_checkbank temp_8 = this ;
        test_7 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_midrangeInstruction_5F_checkbank temp_9 = this ;
          const GGS_midrangeInstruction_5F_checkbank temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 592)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 592)).add_operation (GGS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 592)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 592)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 592)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 592)) ;
        }
      }
    }
  }
  const GGS_midrangeInstruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                   const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                   const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                   GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                   const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                   GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                   const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                   GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 613)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrangeInstruction_5F_checknobank temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 614)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 614)).add_operation (GGS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 614)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 614)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 615)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_CALL build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_23264 ;
  GGS_uint var_requiredBank_23281 ;
  GGS_uint var_returnedBank_23300 ;
  GGS_bool var_preservesBank_23319 ;
  const GGS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_23264, var_requiredBank_23281, var_returnedBank_23300, var_preservesBank_23319, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 635)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_23281.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 636)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_23281.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 636)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_CALL temp_2 = this ;
      GGS_string var_errorMessage_23423 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)).add_operation (var_requiredBank_23281.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)) ;
      var_errorMessage_23423.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 638)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 639)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_23423.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 640)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_23423.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 642)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 642)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 642)) ;
      }
      const GGS_midrange_5F_instruction_5F_CALL temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23423, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 644)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_23264.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_CALL temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 647)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_23319.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 649)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23300 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_CALL temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_CALL temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_CALL::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 653)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_JUMP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_24852 ;
  GGS_uint var_requiredBank_24869 ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  GGS_uint joker_24883 ; // Joker input parameter
  GGS_bool joker_24887 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_24852, var_requiredBank_24869, joker_24883, joker_24887, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 674)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_24869.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 675)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_24869.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 675)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JUMP temp_2 = this ;
      GGS_string var_errorMessage_24980 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)).add_operation (var_requiredBank_24869.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)) ;
      var_errorMessage_24980.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 677)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 678)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_24980.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 679)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_24980.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 681)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 681)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 681)) ;
      }
      const GGS_midrange_5F_instruction_5F_JUMP temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_24980, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 683)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_24852.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 685)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_JUMP temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 686)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 693)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 694)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 690)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_GOTO build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_26450 ;
  GGS_uint var_requiredBank_26467 ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  GGS_uint joker_26481 ; // Joker input parameter
  GGS_bool joker_26485 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26450, var_requiredBank_26467, joker_26481, joker_26485, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 713)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_26467.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 714)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_26467.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 714)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_GOTO temp_2 = this ;
      GGS_string var_errorMessage_26578 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)).add_operation (var_requiredBank_26467.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)) ;
      var_errorMessage_26578.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 716)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 717)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_26578.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 718)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_26578.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 720)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 720)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 720)) ;
      }
      const GGS_midrange_5F_instruction_5F_GOTO temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26578, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 722)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_26450.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 724)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_GOTO temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 725)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 729)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                  const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                  const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                  GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                  const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                  GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                  const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                  GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                  const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                  GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_CLRWDT temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 749)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_CLRW build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_CLRW temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 768)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_NOP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                               const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                               GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_NOP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 787)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                 const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                 GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_SLEEP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 806)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                            const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                            const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                            GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                            const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_31107 ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_31107, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 825)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_31107.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_31107.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 827)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_31107.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_literalOperation temp_4 = this ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_31107.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 834)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 834)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 831)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_MNOP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_MNOP temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 854)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_MNOP temp_4 = this ;
  const GGS_midrange_5F_instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 857)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                   const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                                                   GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                   GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   const GGS_uint constinArgument_inTotalBankCount,
                                                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                   GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                   const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 879)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 882)) ;
    }
    break ;
  }
  GGS_uint var_finalBank_33436 = ioArgument_ioCurrentBank ;
  GGS_string var_label_30__33476 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 886)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 886)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 887)) ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__33476, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 888)) ;
  {
  const GGS_midrange_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33436, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 889)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33436)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GGS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 905)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_FOREVER temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_30__33476, temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 908)) ;
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                                            const GGS_uint constinArgument_inTotalBankCount,
                                                                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                                                                            const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                            GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_lowerBound_35095 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_35095, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 931)) ;
  GGS_sint_36__34_ var_upperBound_35208 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_35208, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 932)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_35095.objectCompare (var_upperBound_35208)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_35095.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)).add_operation (var_upperBound_35208.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_35208.substract_operation (var_lowerBound_35095, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 936)).objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_35208.substract_operation (var_lowerBound_35095, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)).add_operation (GGS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)) ;
      }
    }
  }
  GGS_uint var_finalBank_35620 = ioArgument_ioCurrentBank ;
  GGS_constantMap var_tempConstantMap_35652 = constinArgument_inConstantMap ;
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_35652.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_35095, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 942)) ;
  }
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35652, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35620, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 943)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35620)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 959)) ;
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 961)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list contains an endless loop"), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 962)) ;
    }
  }
  GGS_sint_36__34_ var_idx_36401 = var_lowerBound_35095.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 965)) ;
  if (var_upperBound_35208.substract_operation (var_lowerBound_35095, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).isValid ()) {
    uint32_t variant_36424 = var_upperBound_35208.substract_operation (var_lowerBound_35095, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).uintValue () ;
    bool loop_36424 = true ;
    while (loop_36424) {
      GGS_bool test_16 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_36401.objectCompare (var_upperBound_35208)) ;
      if (GalgasBool::boolTrue == test_16.boolEnum ()) {
        test_16 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_36424 = test_16.isValid () ;
      if (loop_36424) {
        loop_36424 = test_16.boolValue () ;
      }
      if (loop_36424 && (0 == variant_36424)) {
        loop_36424 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)) ;
      }
      if (loop_36424) {
        variant_36424 -= 1 ;
        GGS_constantMap var_constantMap_36530 = constinArgument_inConstantMap ;
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = this ;
        var_constantMap_36530.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_36401, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 968)) ;
        }
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = this ;
        routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36530, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 969)) ;
        }
        var_idx_36401.plusAssignOperation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 984)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                                                         GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                         GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                                         const GGS_uint constinArgument_inTotalBankCount,
                                                                                                         GGS_uint & ioArgument_ioCurrentBank,
                                                                                                         const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                         GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                         const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37766 ;
  GGS_bitSliceTable var_bitSliceTable_37800 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37766, var_bitSliceTable_37800, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1003)) ;
  GGS_uint var_bitNumber_37967 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37800, var_bitNumber_37967, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1012)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37766, var_bitNumber_37967, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1019)) ;
  GGS_bool var_unusedContinuesInSequence_38200 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_38200, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1027)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                                          const GGS_uint constinArgument_inCurrentBank,
                                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                                          GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                          const GGS_bool constinArgument_inComplementaryBranch,
                                                                                          const GGS_location constinArgument_inInstructionLocation,
                                                                                          const GGS_string constinArgument_inTargetLabel,
                                                                                          GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_40117 ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_0 = this ;
  GGS_bitSliceTable joker_40146 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_40117, joker_40146, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1079)) ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (constinArgument_inInstructionLocation, var_IPICregisterDescription_40117, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1095)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1089)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                             GGS_uint & outArgument_outInstructionCount,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1103)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstructionCount = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outInstructionCount = GGS_uint (uint32_t (2U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_negateCondition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                                const GGS_uint constinArgument_inCurrentBank,
                                                                                const GGS_registerTable constinArgument_inRegisterTable,
                                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                                GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                const GGS_bool constinArgument_inComplementaryBranch,
                                                                                const GGS_location constinArgument_inInstructionLocation,
                                                                                const GGS_string constinArgument_inTargetLabel,
                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1130)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1124)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_negateCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                   GGS_uint & outArgument_outInstructionCount,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1145)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1144)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_andCondition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                             const GGS_uint constinArgument_inCurrentBank,
                                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                                             GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                             const GGS_bool constinArgument_inComplementaryBranch,
                                                                             const GGS_location constinArgument_inInstructionLocation,
                                                                             const GGS_string constinArgument_inTargetLabel,
                                                                             GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_andCondition temp_1 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1165)) ;
      const GGS_midrange_5F_andCondition temp_2 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1178)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_label_30__43332 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1192)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1192)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1192)) ;
    const GGS_midrange_5F_andCondition temp_3 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, var_label_30__43332, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1193)) ;
    const GGS_midrange_5F_andCondition temp_4 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1206)) ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__43332, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1219)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_andCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                GGS_uint & outArgument_outInstructionCount,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_countLeft_44523 ;
  const GGS_midrange_5F_andCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_44523, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1228)) ;
  GGS_uint var_countRight_44634 ;
  const GGS_midrange_5F_andCondition temp_1 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44634, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1232)) ;
  outArgument_outInstructionCount = var_countLeft_44523.add_operation (var_countRight_44634, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1236)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                                                               const GGS_uint constinArgument_inCurrentBank,
                                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               const GGS_bool constinArgument_inComplementaryBranch,
                                                                                                               const GGS_location constinArgument_inInstructionLocation,
                                                                                                               const GGS_string constinArgument_inTargetLabel,
                                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_45437 ;
  GGS_bitSliceTable var_bitSliceTable_45471 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_45437, var_bitSliceTable_45471, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1253)) ;
  GGS_uint var_bitNumber_45638 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_45471, var_bitNumber_45638, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1262)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_45437, var_bitNumber_45638, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1269)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (constinArgument_inInstructionLocation, GGS_lstring::init_21__21_ (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1278)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1275)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_computeInstructionCountForCondition (const GGS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                  GGS_uint & outArgument_outInstructionCount,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_structured_if build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                                            const GGS_uint constinArgument_inTotalBankCount,
                                                                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                                                                            const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                            GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_generateComplementaryCondition_46958 = GGS_bool (false) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_directCount_47108 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GGS_bool (true), var_directCount_47108, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1309)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_3 = this ;
        test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1310)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_directCount_47108.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1311)) ;
        }
      }
      GGS_uint var_complementaryCount_47291 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_4 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GGS_bool (false), var_complementaryCount_47291, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1313)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1314)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_complementaryCount_47291.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1315)) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::lowerThan, var_complementaryCount_47291.objectCompare (var_directCount_47108)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_generateComplementaryCondition_46958 = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).add_operation (GGS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).add_operation (var_directCount_47108.substract_operation (var_complementaryCount_47291, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1320)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1320)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).add_operation (GGS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1320)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_directCount_47108.substract_operation (var_complementaryCount_47291, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1321)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1322)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1324)) ;
        }
      }
    }
  }
  GGS_uint var_elseBranchFinalBank_47920 = ioArgument_ioCurrentBank ;
  GGS_uint var_thenBranchFinalBank_47968 = ioArgument_ioCurrentBank ;
  GGS_bool var_elseContinuesInSequence_48016 ;
  GGS_bool var_thenContinuesInSequence_48052 ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_46958.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GGS_string var_label_5F_nextCondition_48141 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1333)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1333)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1333)) ;
      GGS_string var_label_5F_endOfIfinstruction_48236 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1334)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1334)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1334)) ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_10 = this ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_11 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_48141, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1336)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_12 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47920, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_48016, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1350)) ;
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::greaterThan, temp_14.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1366)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_15 = this ;
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_16 = this ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_15.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_48236, temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1367)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_48141, temp_17.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1369)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_18 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47968, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_48052, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1370)) ;
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_20 = this ;
        test_19 = GGS_bool (ComparisonKind::greaterThan, temp_20.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1385)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_21 = this ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_48236, temp_21.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1386)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_string var_label_5F_nextCondition_50134 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1390)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1390)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1390)) ;
    GGS_string var_label_5F_endOfIfinstruction_50229 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1391)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1391)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1391)) ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_22 = this ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_23 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_50134, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1393)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_24 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47968, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_48052, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1407)) ;
    }
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_26 = this ;
      test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1423)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_27 = this ;
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_28 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_27.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_50229, temp_28.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1424)) ;
      }
    }
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_29 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_50134, temp_29.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1426)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_30 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47920, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_48016, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1427)) ;
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_32 = this ;
      test_31 = GGS_bool (ComparisonKind::greaterThan, temp_32.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1442)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_33 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_50229, temp_33.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1443)) ;
      }
    }
  }
  GalgasBool test_34 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_34) {
    test_34 = GGS_bool (ComparisonKind::equal, var_elseBranchFinalBank_47920.objectCompare (var_thenBranchFinalBank_47968)).boolEnum () ;
    if (GalgasBool::boolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_47920 ;
    }
  }
  if (GalgasBool::boolFalse == test_34) {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_35 = this ;
    GenericArray <FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GGS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1449)) ;
    var_elseBranchFinalBank_47920 = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1450)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_48052.operator_or (var_elseContinuesInSequence_48016 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1453)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_do_while build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                                                       GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                       GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                                       const GGS_uint constinArgument_inTotalBankCount,
                                                                                                       GGS_uint & ioArgument_ioCurrentBank,
                                                                                                       const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                       GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                       const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelInstructionBegin_53112 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1472)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1472)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1472)) ;
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_labelInstructionBegin_53112, temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1474)) ;
  GGS_uint var_finalBank_53393 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_53393, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1477)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_53393)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1493)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_5 = this ;
  UpEnumerator_midrange_5F_partList enumerator_53979 (temp_5.readProperty_mWhilePartList ()) ;
  while (enumerator_53979.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_53979.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1497)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_midrange_5F_instruction_5F_do_5F_while temp_7 = this ;
        callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53979.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_53112, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1498)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_string var_nextBranchLabel_54460 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1512)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1512)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1512)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_8 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53979.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_54460, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1513)) ;
      GGS_uint var_bank_54911 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_53979.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54911, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1527)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54911)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_53979.current_mEndOfPartLocation (HERE), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1543)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_11 = this ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_12 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_11.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_labelInstructionBegin_53112, temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1545)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_nextBranchLabel_54460, temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1546)) ;
    }
    enumerator_53979.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                        const GGS_constantMap constinArgument_inConstantMap,
                                                                                                        GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                        GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                                        const GGS_uint constinArgument_inTotalBankCount,
                                                                                                        GGS_uint & ioArgument_ioCurrentBank,
                                                                                                        const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                        GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                        GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_56437 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_baseCode_56437 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1569)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_baseCode_56437 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1571)) ;
  }
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_56751 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  GGS_bitSliceTable joker_56780 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_56751, joker_56780, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1574)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_baseCode_56437, var_IPICregisterDescription_56751, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1584)) ;
  GGS_bool var_unusedContinuesInSequence_57013 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_57013, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1592)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_assembly_instruction_list???????!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (const GGS_uint constinArgument_inTotalPageCount,
                                                                                                           const GGS_uint constinArgument_inTotalBankCount,
                                                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                                                           const GGS_string constinArgument_inSharedRAMBankName,
                                                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                           const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                                                           const GGS_bool constinArgument_inHasInterrupt,
                                                                                                           GGS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  GGS_string var_generationOptimizationMessages_57922 = GGS_string::makeEmptyString () ;
  GGS_routineMap var_routineMap_58017 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_58123 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_58123.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_58123.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1625)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_58123.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1625)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_58123.current_mRequiredBank (HERE).readProperty_location (), GGS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1626)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_58123.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1628)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_58123.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1628)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_58123.current_mReturnedBank (HERE).readProperty_location (), GGS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1629)) ;
      }
    }
    {
    var_routineMap_58017.setter_insertKey (enumerator_58123.current_mRoutineName (HERE), enumerator_58123.current_mIsNoReturn (HERE), enumerator_58123.current_mRequiredBank (HERE).readProperty_uint (), enumerator_58123.current_mReturnedBank (HERE).readProperty_uint (), enumerator_58123.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1631)) ;
    }
    enumerator_58123.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1635)) ;
      }
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_routineMap_58017.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1641)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_bool var_isNoReturn_59018 ;
      GGS_uint var_requiredBank_59041 ;
      GGS_uint joker_59055 ; // Joker input parameter
      GGS_bool joker_59059 ; // Joker input parameter
      var_routineMap_58017.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1642)), inCompiler COMMA_HERE), var_isNoReturn_59018, var_requiredBank_59041, joker_59055, joker_59059, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1642)) ;
      GGS_location var_mainDeclarationLocation_59081 = var_routineMap_58017.getter_locationForKey (GGS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1643)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_isNoReturn_59018.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1644)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59081, GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1645)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_59041.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59081, GGS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1648)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GGS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1651)) ;
  }
  GGS_uint var_localLabelIndex_59671 = GGS_uint (uint32_t (0U)) ;
  {
  routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_58017, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57922, var_localLabelIndex_59671, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1655)) ;
  }
  GGS_uint var_currentPage_60114 = GGS_uint (uint32_t (0U)) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_60132 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_60132 = true ;
    while (loop_60132) {
      loop_60132 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_60114.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_60132) {
        loop_60132 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_60114.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_60132 && (0 == variant_60132)) {
        loop_60132 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1672)) ;
      }
      if (loop_60132) {
        variant_60132 -= 1 ;
        GGS_bool var_orgGenerated_60210 = GGS_bool (ComparisonKind::equal, var_currentPage_60114.objectCompare (GGS_uint (uint32_t (0U)))) ;
        UpEnumerator_midrange_5F_routineDefinitionList enumerator_60367 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
        while (enumerator_60367.hasCurrentObject ()) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_60367.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_60114)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = var_orgGenerated_60210.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1676)).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (var_currentPage_60114.multiply_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1677)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1677)) ;
                  var_orgGenerated_60210 = GGS_bool (true) ;
                }
              }
              GGS_uint var_currentBank_60647 = enumerator_60367.current_mRequiredBank (HERE).readProperty_uint () ;
              GGS_routineKind var_routineKind_60705 ;
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                test_13 = enumerator_60367.current_mIsNoReturn (HERE).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_routineKind_60705 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1683)) ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_routineKind_60705 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1685)) ;
              }
              outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (enumerator_60367.current_mRoutineName (HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1687)) ;
              GGS_bool var_continuesInSequence_61332 ;
              {
              routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_60367.current_mInstructionList (HERE), var_routineMap_58017, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_59671, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57922, constinArgument_inTotalBankCount, var_currentBank_60647, enumerator_60367.current_mPreservesBank (HERE), var_continuesInSequence_61332, var_routineKind_60705, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1688)) ;
              }
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = enumerator_60367.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1703)).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_60367.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1703)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1703)).operator_and (GGS_bool (ComparisonKind::notEqual, var_currentBank_60647.objectCompare (enumerator_60367.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1703)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_60367.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution will not set bank selection to ").add_operation (enumerator_60367.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1704)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1704)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1704)) ;
                }
              }
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = enumerator_60367.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_61332 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1706)).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GenericArray <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_60367.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1707)) ;
                }
              }
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = enumerator_60367.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1710)).boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (enumerator_60367.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1711)) ;
                }
              }
            }
          }
          enumerator_60367.gotoNextObject () ;
        }
        var_currentPage_60114.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1715)) ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1719)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1719)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1719)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("IPIC INSTRUCTION LIST").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1720)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1720)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1720)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1720)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1721)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1721)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1721)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1722)) ;
      GGS_uint var_idx_62449 = GGS_uint (uint32_t (0U)) ;
      GGS_uint var_currentAddress_62471 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62499 (outArgument_outGeneratedInstructionList) ;
      while (enumerator_62499.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62499.current_mInstruction (HERE).ptr (), var_currentAddress_62471, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1726)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_idx_62449.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1727)).getter_leftPadding (GGS_uint (uint32_t (5U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1727)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1727)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1727)) ;
        callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62499.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1728)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1729)) ;
        var_idx_62449.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1730)) ;
        enumerator_62499.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1732)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62471.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1733)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1733)).add_operation (GGS_string (" instructions.\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1733)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1733)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'interruptRoutineShouldSavePCLATH??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                                               const GGS_uint constinArgument_inTotalPageCount,
                                                               GGS_string & ioArgument_ioListFileContents,
                                                               GGS_bool & outArgument_outShouldSavePCLATH,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outShouldSavePCLATH.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1744)) ;
  outArgument_outShouldSavePCLATH = GGS_bool (false) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_63330 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_63330.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_63330.current_mPage (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GGS_bool (true) ;
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_63330.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_63330.current_mPage (HERE).readProperty_location (), GGS_string ("invalid value (").add_operation (enumerator_63330.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1752)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1752)).add_operation (GGS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1752)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1752)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1752)).add_operation (GGS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1752)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1752)) ;
      }
    }
    enumerator_63330.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1755)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1756)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GGS_bool (false) ;
      UpEnumerator_midrange_5F_interruptDefinitionList enumerator_63906 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1761)).isValidAndTrue () ;
      if (enumerator_63906.hasCurrentObject () && bool_5) {
        while (enumerator_63906.hasCurrentObject () && bool_5) {
          UpEnumerator_midrange_5F_instructionList enumerator_63997 (enumerator_63906.current_mInstructionList (HERE)) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1762)).isValidAndTrue () ;
          if (enumerator_63997.hasCurrentObject () && bool_6) {
            while (enumerator_63997.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((cPtr_midrange_5F_instruction *) enumerator_63997.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1763)) ;
              enumerator_63997.gotoNextObject () ;
              if (enumerator_63997.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1762)).isValidAndTrue () ;
              }
            }
          }
          enumerator_63906.gotoNextObject () ;
          if (enumerator_63906.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1761)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1767)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1769)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1772)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleInterruptRoutine????????&&&!&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                                         const GGS_bool constinArgument_inHasInterrupt,
                                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                                         const GGS_string constinArgument_inSharedRAMBankName,
                                                                                         const GGS_routineMap constinArgument_inRoutineMap,
                                                                                         const GGS_uint constinArgument_inTotalBankCount,
                                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                                         const GGS_uint constinArgument_inTotalPageCount,
                                                                                         GGS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                         GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outGeneratedInstructionList = GGS_midrange_5F_intermediate_5F_instructionList::init (inCompiler COMMA_HERE) ;
  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1799)), GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1800)), inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1801)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1802)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1798)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1805)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1805)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1805)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("INTERRUPT ROUTINE").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1806)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1806)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1806)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1806)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1807)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1807)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1807)) ;
      GGS_bool var_shouldSavePCLATH_66252 ;
      {
      routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_66252, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1809)) ;
      }
      outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (GGS_uint (uint32_t (4U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1816)) ;
      UpEnumerator_midrange_5F_interruptDefinitionList enumerator_66428 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
      while (enumerator_66428.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inSharedRAMBankName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66428.current_mFirstSaveRegister (HERE), enumerator_66428.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66252, enumerator_66428.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66428.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1819)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66428.current_mFirstSaveRegister (HERE), enumerator_66428.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66252, enumerator_66428.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66428.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1835)) ;
          }
        }
        enumerator_66428.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const GGS_uint constinArgument_inTotalBankCount,
                                                                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                     const GGS_lstring constinArgument_inFirstSaveRegister,
                                                                                                                     const GGS_lstring constinArgument_inSecondSaveRegister,
                                                                                                                     const GGS_bool constinArgument_inNeedsToSavePCLATH,
                                                                                                                     const GGS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                                                                     const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                     const GGS_location constinArgument_inEndOfInterruptLocation,
                                                                                                                     GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                     GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                     GGS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_registerAddressList_68391 ;
  GGS_uint var_size_68419 ;
  GGS_registerProtection var_firstProtection_68435 ;
  GGS_bitSliceTable joker_68425_2 ; // Joker input parameter
  GGS_string joker_68425_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_68391, var_size_68419, joker_68425_2, joker_68425_1, var_firstProtection_68435, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1872)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_68435, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1873)) ;
  GGS_uint var_bankAccessibility_68555 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_68584 (var_registerAddressList_68391) ;
  while (enumerator_68584.hasCurrentObject ()) {
    var_bankAccessibility_68555 = var_bankAccessibility_68555.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1876)).left_shift_operation (enumerator_68584.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1876)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1876)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1876)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1876)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1876)) ;
    enumerator_68584.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_bankAccessibility_68555.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1878)).objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1878)).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1878)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1878)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1879)).add_operation (GGS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1879)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1879)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_size_68419.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1882)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1882)).add_operation (var_size_68419.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1882)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1882)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1882)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1882)) ;
    }
  }
  GGS_registerProtection var_secondProtection_69217 ;
  GGS_bitSliceTable joker_69207_2 ; // Joker input parameter
  GGS_string joker_69207_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_68391, var_size_68419, joker_69207_2, joker_69207_1, var_secondProtection_69217, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1885)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_69217, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1886)) ;
  var_bankAccessibility_68555 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_69359 (var_registerAddressList_68391) ;
  while (enumerator_69359.hasCurrentObject ()) {
    var_bankAccessibility_68555 = var_bankAccessibility_68555.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1889)).left_shift_operation (enumerator_69359.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1889)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1889)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1889)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1889)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1889)) ;
    enumerator_69359.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, var_bankAccessibility_68555.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1891)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1892)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1892)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1892)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_68419.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1894)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1895)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1895)).add_operation (var_size_68419.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1895)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1895)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1895)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1895)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_68419.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)).add_operation (var_size_68419.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1900)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GGS_registerExpression var_first_5F_register_70056 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1903)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1904)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_70316 ;
      GGS_bitSliceTable joker_70353 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_70056.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_70316, joker_70353, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1906)) ;
      GGS_registerExpression var_second_5F_register_70395 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1917)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1918)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_70690 ;
      GGS_bitSliceTable joker_70728 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_second_5F_register_70395.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_70690, joker_70728, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1920)) ;
      GGS_registerExpression var_STATUS_5F_register_70809 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1931)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1932)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1933)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_71088 ;
      GGS_bitSliceTable joker_71126 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_70809.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1937)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_71088, joker_71126, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1935)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1944)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1944)), var_first_5F_IPICregisterDescription_70316, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1944)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1945)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1945)), var_STATUS_5F_IPICregisterDescription_71088, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1945)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1946)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1946)), var_STATUS_5F_IPICregisterDescription_71088, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1946)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1947)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1947)), var_second_5F_IPICregisterDescription_70690, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1947)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_registerExpression var_reg_71868 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1951)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1952)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72169 ;
          GGS_bitSliceTable joker_72217 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_71868.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72169, joker_72217, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1954)) ;
          GGS_registerExpression var_PCLATH_5F_register_72306 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1965)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1966)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1967)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_72616 ;
          GGS_bitSliceTable joker_72656 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_72306.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1971)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_72616, joker_72656, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1969)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1978)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1978)), var_PCLATH_5F_IPICregisterDescription_72616, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1978)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1979)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1979)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72169, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1979)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1980)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1980)), var_PCLATH_5F_IPICregisterDescription_72616, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1980)) ;
        }
      }
      GGS_uint var_currentBank_73262 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_73654 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73262, GGS_bool (false), var_continuesInSequence_73654, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1996)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1984)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = var_continuesInSequence_73654.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1999)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2000)) ;
        }
      }
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GGS_registerExpression var_reg_73927 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2005)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2006)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74229 ;
          GGS_bitSliceTable joker_74277 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_73927.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74229, joker_74277, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2008)) ;
          GGS_registerExpression var_PCLATH_5F_register_74366 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2019)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2020)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2021)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_74675 ;
          GGS_bitSliceTable joker_74715 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_74366.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2025)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_74675, joker_74715, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2023)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2032)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2032)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74229, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2032)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2033)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2033)), var_PCLATH_5F_IPICregisterDescription_74675, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2033)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2036)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2036)), var_second_5F_IPICregisterDescription_70690, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2036)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2037)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2037)), var_STATUS_5F_IPICregisterDescription_71088, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2037)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2038)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2038)), var_first_5F_IPICregisterDescription_70316, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2038)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2039)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2039)), var_first_5F_IPICregisterDescription_70316, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2039)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2041)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2041)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithoutSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const GGS_uint constinArgument_inTotalBankCount,
                                                                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                        const GGS_lstring constinArgument_inFirstSaveRegister,
                                                                                                                        const GGS_lstring constinArgument_inSecondSaveRegister,
                                                                                                                        const GGS_bool constinArgument_inNeedsToSavePCLATH,
                                                                                                                        const GGS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                                                                        const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                                        const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                        const GGS_location constinArgument_inEndOfInterruptLocation,
                                                                                                                        GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                        GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                        GGS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                                                        GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2063)) ;
  GGS_uintlist var_registerAddressList_76831 ;
  GGS_uint var_size_76859 ;
  GGS_registerProtection var_firstProtection_76875 ;
  GGS_bitSliceTable joker_76865_2 ; // Joker input parameter
  GGS_string joker_76865_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_76831, var_size_76859, joker_76865_2, joker_76865_1, var_firstProtection_76875, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2064)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_76875, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2065)) ;
  GGS_bool var_accessibleFromBank_30__76995 = GGS_bool (false) ;
  GGS_uint var_offset_77035 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_77066 (var_registerAddressList_76831) ;
  bool bool_0 = var_accessibleFromBank_30__76995.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2068)).isValidAndTrue () ;
  if (enumerator_77066.hasCurrentObject () && bool_0) {
    while (enumerator_77066.hasCurrentObject () && bool_0) {
      var_offset_77035 = enumerator_77066.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2069)) ;
      var_accessibleFromBank_30__76995 = GGS_bool (ComparisonKind::equal, enumerator_77066.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2070)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_77066.gotoNextObject () ;
      if (enumerator_77066.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__76995.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2068)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__76995.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2072)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2073)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2073)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2073)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_76859.objectCompare (GGS_uint (uint32_t (3U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2075)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2076)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2076)).add_operation (var_size_76859.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2076)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2076)).add_operation (GGS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2076)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2076)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2077)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_76859.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2077)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)).add_operation (var_size_76859.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)) ;
      }
    }
  }
  GGS_uintlist var_saveStatusRegisterAddressList_77832 = var_registerAddressList_76831 ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2082)) ;
  GGS_registerProtection var_secondProtection_78025 ;
  GGS_bitSliceTable joker_78015_2 ; // Joker input parameter
  GGS_string joker_78015_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_76831, var_size_76859, joker_78015_2, joker_78015_1, var_secondProtection_78025, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2083)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_78025, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2084)) ;
  var_saveStatusRegisterAddressList_77832 = var_saveStatusRegisterAddressList_77832.add_operation (var_registerAddressList_76831, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2085)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_size_76859.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2087)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2087)).add_operation (var_size_76859.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2087)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2087)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2087)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2087)) ;
    }
  }
  GGS_bool var_accessibleFromBank_31__78435 = GGS_bool (false) ;
  UpEnumerator_uintlist enumerator_78470 (var_registerAddressList_76831) ;
  bool bool_9 = var_accessibleFromBank_31__78435.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2091)).isValidAndTrue () ;
  if (enumerator_78470.hasCurrentObject () && bool_9) {
    while (enumerator_78470.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78435 = GGS_bool (ComparisonKind::equal, enumerator_78470.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2092)).objectCompare (GGS_uint (uint32_t (128U)))) ;
      enumerator_78470.gotoNextObject () ;
      if (enumerator_78470.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78435.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2091)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__78435.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2094)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2095)).add_operation (GGS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2095)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2095)) ;
    }
  }
  GGS_bool var_offsetOk_78851 = GGS_bool (true) ;
  UpEnumerator_uintlist enumerator_78874 (var_registerAddressList_76831) ;
  bool bool_12 = var_offsetOk_78851.isValidAndTrue () ;
  if (enumerator_78874.hasCurrentObject () && bool_12) {
    while (enumerator_78874.hasCurrentObject () && bool_12) {
      var_offsetOk_78851 = GGS_bool (ComparisonKind::equal, var_offset_77035.objectCompare (enumerator_78874.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2100)))) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_offsetOk_78851.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2102)).add_operation (GGS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2102)).add_operation (enumerator_78874.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2103)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2103)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2102)).add_operation (GGS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2103)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2103)).add_operation (GGS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2103)).add_operation (var_offset_77035.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2104)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2103)).add_operation (GGS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2104)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2102)) ;
        }
      }
      enumerator_78874.gotoNextObject () ;
      if (enumerator_78874.hasCurrentObject ()) {
        bool_12 = var_offsetOk_78851.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2108)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_registerExpression var_first_5F_register_79357 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2111)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2112)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_79617 ;
      GGS_bitSliceTable joker_79654 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_79357.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_79617, joker_79654, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2114)) ;
      GGS_registerExpression var_first_5F_register_5F_second_5F_byte_79696 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2125)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2126)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79989 ;
      GGS_bitSliceTable joker_80042 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_79696.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79989, joker_80042, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2128)) ;
      GGS_registerExpression var_STATUS_5F_register_80123 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2139)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2140)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2141)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80421 ;
      GGS_bitSliceTable joker_80459 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_80123.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2145)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80421, joker_80459, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2143)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2152)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2152)), var_first_5F_IPICregisterDescription_79617, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2152)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2153)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2153)), var_STATUS_5F_IPICregisterDescription_80421, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2153)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2154)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2154)), var_STATUS_5F_IPICregisterDescription_80421, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2154)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2155)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2155)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79989, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2155)) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_81218 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2159)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2160)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81529 ;
          GGS_bitSliceTable joker_81583 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81218.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81529, joker_81583, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2162)) ;
          GGS_registerExpression var_PCLATH_5F_register_81672 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2173)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2174)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2175)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_81989 ;
          GGS_bitSliceTable joker_82029 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_81672.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2179)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_81989, joker_82029, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2177)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2186)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2186)), var_PCLATH_5F_IPICregisterDescription_81989, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2186)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2187)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2187)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81529, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2187)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2188)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2188)), var_PCLATH_5F_IPICregisterDescription_81989, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2188)) ;
        }
      }
      GGS_uint var_currentBank_82641 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_83016 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_82641, GGS_bool (true), var_continuesInSequence_83016, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2204)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2192)) ;
      }
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_continuesInSequence_83016.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2207)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2208)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_83289 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (2U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2213)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2214)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83642 ;
          GGS_bitSliceTable joker_83697 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83289.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83642, joker_83697, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2216)) ;
          GGS_registerExpression var_PCLATH_5F_register_83786 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2227)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2228)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2229)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_83999 ;
          GGS_bitSliceTable joker_84222 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_83786.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2234)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_83999, joker_84222, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2232)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2241)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2241)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83642, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2241)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2242)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2242)), var_PCLATH_5F_IPICregisterDescription_83999, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2242)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2245)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2245)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79989, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2245)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2246)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2246)), var_STATUS_5F_IPICregisterDescription_80421, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2246)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2247)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2247)), var_first_5F_IPICregisterDescription_79617, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2247)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2248)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2248)), var_first_5F_IPICregisterDescription_79617, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2248)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2250)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2250)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_IF_BitTest addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                           GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 13)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                       GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 22)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_IF_IncDec addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                          GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_JUMP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 40)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_JUMPCC addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GGS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 49)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FOREVER addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                     GGS_stringset & ioArgument_ioUsedRoutines,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 58)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_repetitionStatique addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 67)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_checkbank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LDATA16PTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LDATA8PTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LTBLPTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_MNOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_NOPBRA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_banksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_checknobank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_banksel_register addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_bra addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GGS_stringset & ioArgument_ioUsedRoutines,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4449 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_4449.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_4449.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 149)) ;
    enumerator_4449.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_goto addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4754 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_4754.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_4754.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 160)) ;
    enumerator_4754.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_rcall addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_lstringlist enumerator_5060 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_5060.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_5060.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 171)) ;
    enumerator_5060.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_retlw addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_do_while addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                         GGS_stringset & ioArgument_ioUsedRoutines,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 189)) ;
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_pic_31__38_DoWhilePartList enumerator_5708 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_5708.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_5708.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 191)) ;
    }
    enumerator_5708.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_nobanksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_savebank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 209)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_structured_if addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GGS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mThenInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 218)) ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 219)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_macro addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_7050 ;
  const GGS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  GGS_lstringlist joker_7041 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), joker_7041, var_instructionList_7050, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 228)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (var_instructionList_7050, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 229)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FBA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FDA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_JSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 262)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LFSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_MOVFF addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_TBLWT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_TBLRD addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_literalOperation addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_fnop addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_withNoOperand addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_block addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9860 (temp_0.readProperty_mBlockList ()) ;
  while (enumerator_9860.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_9860.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 328)) ;
    }
    enumerator_9860.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList??&'
//
//--------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                        const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GGS_stringset & ioArgument_ioUsedRoutines,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_pic_31__38_InstructionList enumerator_10240 (constinArgument_inInstructionList) ;
  while (enumerator_10240.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_10240.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 340)) ;
    enumerator_10240.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GGS_stringset function_pic_31__38__5F_computeUsedRoutines (const GGS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                           const GGS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           const GGS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                           const GGS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                           const GGS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  result_result = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 354)) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_10981 (constinArgument_inInterruptDefinitionList) ;
  while (enumerator_10981.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_10981.current_mInstructionList (HERE), constinArgument_inMacroMap, result_result, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 357)) ;
    }
    enumerator_10981.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_11195 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation) ;
  while (enumerator_11195.hasCurrentObject ()) {
    result_result.plusPlusAssignOperation (enumerator_11195.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 365)) ;
    enumerator_11195.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_11363 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_11363.hasCurrentObject ()) {
    result_result.plusPlusAssignOperation (enumerator_11363.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 369)) ;
    enumerator_11363.gotoNextObject () ;
  }
  GGS_stringset var_s_11519 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas3", 373)).isValid ()) {
    uint32_t variant_11538 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas3", 373)).uintValue () ;
    bool loop_11538 = true ;
    while (loop_11538) {
      loop_11538 = GGS_bool (ComparisonKind::notEqual, var_s_11519.objectCompare (result_result)).isValid () ;
      if (loop_11538) {
        loop_11538 = GGS_bool (ComparisonKind::notEqual, var_s_11519.objectCompare (result_result)).boolValue () ;
      }
      if (loop_11538 && (0 == variant_11538)) {
        loop_11538 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas3", 373)) ;
      }
      if (loop_11538) {
        variant_11538 -= 1 ;
        var_s_11519 = result_result ;
        UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_11660 (constinArgument_inRoutineDefinitionList) ;
        while (enumerator_11660.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            test_0 = result_result.getter_hasKey (enumerator_11660.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 377)).boolEnum () ;
            if (GalgasBool::boolTrue == test_0) {
              {
              routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_11660.current_mInstructionList (HERE), constinArgument_inMacroMap, result_result, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 378)) ;
              }
            }
          }
          enumerator_11660.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (Compiler * inCompiler,
                                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InterruptDefinitionList operand0 = GGS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                 inCompiler
                                                                                                                 COMMA_THERE) ;
  const GGS_pic_31__38_RoutineDefinitionList operand1 = GGS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                             inCompiler
                                                                                                             COMMA_THERE) ;
  const GGS_pic_31__38_MacroMap operand2 = GGS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                   inCompiler
                                                                                   COMMA_THERE) ;
  const GGS_routineDeclarationList operand3 = GGS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GGS_routineDeclarationList operand4 = GGS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  return function_pic_31__38__5F_computeUsedRoutines (operand0,
                                                      operand1,
                                                      operand2,
                                                      operand3,
                                                      operand4,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_intermediate_JSR buildInstructionInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                       GGS_string & ioArgument_ioGraphVizString,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)).add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)).add_operation (GGS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_intermediate_instruction_computed_rcall buildInstructionInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 33)).add_operation (GGS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 33)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 33)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_1324 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_1324.hasCurrentObject ()) {
    callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_1324.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 35)) ;
    enumerator_1324.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_condition_skip_instruction buildInstructionInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ReturnTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GGS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18RetlwTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                              GGS_string & /* ioArgument_ioGraphVizString */,
                                                                              const GGS_bool /* constinArgument_inDottedArrow */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18RetfieTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GGS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedGotoTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                     GGS_string & ioArgument_ioGraphVizString,
                                                                                     const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 94)).add_operation (GGS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 94)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 94)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedRETLWTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                      GGS_string & ioArgument_ioGraphVizString,
                                                                                      const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 103)).add_operation (GGS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 103)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedBraTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                    const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 112)).add_operation (GGS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 112)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 112)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18AbstractConditionTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                          GGS_string & ioArgument_ioGraphVizString,
                                                                                          const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 121)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 122)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18RegisterComparisonTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                          GGS_string & ioArgument_ioGraphVizString,
                                                                                          const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 131)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 132)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18TestRegisterTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                    const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 141)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 142)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18JumpTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                             GGS_string & ioArgument_ioGraphVizString,
                                                                             const GGS_bool constinArgument_inDottedArrow,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 151)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 151)).add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 151)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 151)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 151)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inDottedArrow.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioGraphVizString.plusAssignOperation(GGS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 153)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ConditionalJumpTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                        GGS_string & ioArgument_ioGraphVizString,
                                                                                        const GGS_bool constinArgument_inDottedArrow,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 164)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 164)).add_operation (temp_0.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 164)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 164)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 164)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inDottedArrow.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioGraphVizString.plusAssignOperation(GGS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 166)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 168)) ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 169)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 169)).add_operation (temp_2.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 169)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 169)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 169)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inDottedArrow.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioGraphVizString.plusAssignOperation(GGS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 171)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18ReturnTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ReturnTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18RetlwTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetlwTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                               Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18RetfieTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetfieTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18JumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_JumpTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  result_result = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                         Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18ComputedBraTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                     Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_AbstractConditionTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_result = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 256)).operator_and (callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 258)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 256)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_result = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 267)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@pic18TestRegisterTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_result = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 276)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18JumpTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                          GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_0.readProperty_mLabel () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 295)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ConditionalJumpTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                     GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_0.readProperty_mTargetLabelWhenTrue () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 303)) ;
  }
  {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_1.readProperty_mTargetLabelWhenFalse () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 304)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18RegisterComparisonTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                       GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 312)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18TestRegisterTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                 GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 323)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18IncDecRegisterTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                    GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 334)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 338)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18BitTestTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                            GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 349)) ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 353)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedGraph&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedGraph_26__3F__26_ (GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                            const GGS_string constinArgument_inSourceFileName,
                                            GGS_string & ioArgument_ioListFileContents,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 369)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 369)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 369)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BLOCK ORDERING OPTIMIZATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 370)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 370)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 370)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 370)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 371)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 371)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 371)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Block ordering optimization:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 372)) ;
  GGS_uint var_n_13030 = function_blockDiscontinuityCount (ioArgument_ioBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 373)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  jump count before optimization: ").add_operation (var_n_13030.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas3", 376)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Block ordering optimization... "), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 377)) ;
      }
    }
  }
  GGS_symbolTableForBlockOptimization var_symbolTable_13298 = GGS_symbolTableForBlockOptimization::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_13354 (ioArgument_ioBlockList) ;
  GGS_uint index_13349 (uint32_t (0)) ;
  while (enumerator_13354.hasCurrentObject ()) {
    {
    var_symbolTable_13298.setter_insertKey (enumerator_13354.current_mBlock (HERE).readProperty_mLabel (), index_13349, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 382)) ;
    }
    enumerator_13354.gotoNextObject () ;
    index_13349.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 381)) ;
  }
  GGS_blockInvocationGraph var_g_13469 = GGS_blockInvocationGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_13505 (ioArgument_ioBlockList) ;
  while (enumerator_13505.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_13505.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 387)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        var_g_13469.setter_addNode (enumerator_13505.current_mBlock (HERE).readProperty_mLabel (), enumerator_13505.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 388)) ;
        }
        callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_13505.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_13505.current_mBlock (HERE).readProperty_mLabel (), var_g_13469, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 389)) ;
      }
    }
    enumerator_13505.gotoNextObject () ;
  }
  GGS_lstringlist var_nodeList_13804 ;
  GGS_stringlist joker_13782 ; // Joker input parameter
  var_g_13469.method_nodesWithNoPredecessor (joker_13782, var_nodeList_13804 COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 393)) ;
  GGS_stringlist var_newOrderedLabelList_13820 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_visitedNodeSet_13862 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_clusterList var_clusterList_13898 = GGS_clusterList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_13934 (var_nodeList_13804) ;
  while (enumerator_13934.hasCurrentObject ()) {
    GGS_blockInvocationGraph var_gg_13988 = var_g_13469.getter_subgraphFromNodes (GGS_lstringlist::class_func_listWithValue (enumerator_13934.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 399)), var_visitedNodeSet_13862, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 398)) ;
    UpEnumerator_stringlist enumerator_14097 (var_gg_13988.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas3", 402))) ;
    while (enumerator_14097.hasCurrentObject ()) {
      var_visitedNodeSet_13862.plusPlusAssignOperation (enumerator_14097.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 403)) ;
      enumerator_14097.gotoNextObject () ;
    }
    {
    var_gg_13988.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas3", 405)) ;
    }
    GGS_stringlist var_partialOrderedLabelList_14270 ;
    GGS_lstringlist joker_14301_3 ; // Joker input parameter
    GGS_stringlist joker_14301_2 ; // Joker input parameter
    GGS_lstringlist joker_14301_1 ; // Joker input parameter
    var_gg_13988.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas3", 406)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_14270, joker_14301_3, joker_14301_2, joker_14301_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 406)) ;
    var_newOrderedLabelList_13820.plusAssignOperation(var_partialOrderedLabelList_14270, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 410)) ;
    GGS_ipic_31__38_BlockList var_cluster_14370 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_stringlist enumerator_14408 (var_partialOrderedLabelList_14270) ;
    while (enumerator_14408.hasCurrentObject ()) {
      GGS_uint var_blockIndex_14504 ;
      var_symbolTable_13298.method_searchKey (enumerator_14408.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 413)), var_blockIndex_14504, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 413)) ;
      GGS_ipic_31__38_Block var_b_14539 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_14504, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 414)) ;
      var_cluster_14370.addAssignOperation (var_b_14539  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 415)) ;
      enumerator_14408.gotoNextObject () ;
    }
    var_clusterList_13898.addAssignOperation (var_cluster_14370  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 417)) ;
    enumerator_13934.gotoNextObject () ;
  }
  UpEnumerator_ipic_31__38_BlockList enumerator_14731 (ioArgument_ioBlockList) ;
  while (enumerator_14731.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_14731.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 421)))).operator_and (var_visitedNodeSet_13862.getter_hasKey (enumerator_14731.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 422)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas3", 422)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 421)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_blockInvocationGraph var_gg_14917 = var_g_13469.getter_subgraphFromNodes (GGS_lstringlist::class_func_listWithValue (enumerator_14731.current_mBlock (HERE).readProperty_mLabel ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 424)), var_visitedNodeSet_13862, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 423)) ;
        UpEnumerator_stringlist enumerator_15041 (var_gg_14917.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas3", 427))) ;
        while (enumerator_15041.hasCurrentObject ()) {
          var_visitedNodeSet_13862.plusPlusAssignOperation (enumerator_15041.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 428)) ;
          enumerator_15041.gotoNextObject () ;
        }
        {
        var_gg_14917.setter_removeEdgesToNode (enumerator_14731.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 430)) ;
        }
        {
        var_gg_14917.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas3", 431)) ;
        }
        GGS_stringlist var_partialOrderedLabelList_15278 ;
        GGS_lstringlist joker_15311_3 ; // Joker input parameter
        GGS_stringlist joker_15311_2 ; // Joker input parameter
        GGS_lstringlist joker_15311_1 ; // Joker input parameter
        var_gg_14917.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas3", 432)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_15278, joker_15311_3, joker_15311_2, joker_15311_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 432)) ;
        var_newOrderedLabelList_13820.plusAssignOperation(var_partialOrderedLabelList_15278, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 436)) ;
        GGS_ipic_31__38_BlockList var_cluster_15386 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        UpEnumerator_stringlist enumerator_15427 (var_partialOrderedLabelList_15278) ;
        while (enumerator_15427.hasCurrentObject ()) {
          GGS_uint var_blockIndex_15525 ;
          var_symbolTable_13298.method_searchKey (enumerator_15427.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 439)), var_blockIndex_15525, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 439)) ;
          GGS_ipic_31__38_Block var_b_15562 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15525, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 440)) ;
          var_cluster_15386.addAssignOperation (var_b_15562  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 441)) ;
          enumerator_15427.gotoNextObject () ;
        }
        var_clusterList_13898.addAssignOperation (var_cluster_15386  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 443)) ;
      }
    }
    enumerator_14731.gotoNextObject () ;
  }
  GGS_ipic_31__38_BlockList var_orderedBlockList_15738 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continue_15830 = GGS_bool (true) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_15853 (ioArgument_ioBlockList) ;
  bool bool_3 = var_continue_15830.isValidAndTrue () ;
  if (enumerator_15853.hasCurrentObject () && bool_3) {
    while (enumerator_15853.hasCurrentObject () && bool_3) {
      var_continue_15830 = GGS_bool (ComparisonKind::notEqual, enumerator_15853.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 451)))) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_continue_15830.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_orderedBlockList_15738.addAssignOperation (enumerator_15853.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 453)) ;
        }
      }
      enumerator_15853.gotoNextObject () ;
      if (enumerator_15853.hasCurrentObject ()) {
        bool_3 = var_continue_15830.isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_stringlist enumerator_16043 (var_newOrderedLabelList_13820) ;
  while (enumerator_16043.hasCurrentObject ()) {
    GGS_uint var_blockIndex_16133 ;
    var_symbolTable_13298.method_searchKey (enumerator_16043.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 458)), var_blockIndex_16133, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 458)) ;
    GGS_ipic_31__38_Block var_b_16166 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_16133, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 459)) ;
    var_orderedBlockList_15738.addAssignOperation (var_b_16166  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 460)) ;
    enumerator_16043.gotoNextObject () ;
  }
  GGS_uint var_insertionIndex_16303 = var_orderedBlockList_15738.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas3", 463)) ;
  var_continue_15830 = GGS_bool (true) ;
  DownEnumerator_ipic_31__38_BlockList enumerator_16370 (ioArgument_ioBlockList) ;
  bool bool_5 = var_continue_15830.isValidAndTrue () ;
  if (enumerator_16370.hasCurrentObject () && bool_5) {
    while (enumerator_16370.hasCurrentObject () && bool_5) {
      var_continue_15830 = GGS_bool (ComparisonKind::notEqual, enumerator_16370.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 466)))) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_continue_15830.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          var_orderedBlockList_15738.setter_insertAtIndex (enumerator_16370.current_mBlock (HERE), var_insertionIndex_16303, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 468)) ;
          }
        }
      }
      enumerator_16370.gotoNextObject () ;
      if (enumerator_16370.hasCurrentObject ()) {
        bool_5 = var_continue_15830.isValidAndTrue () ;
      }
    }
  }
  GGS_uint var_p_16607 = function_blockDiscontinuityCount (var_orderedBlockList_15738, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 472)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  jump count after optimization: ").add_operation (var_p_16607.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas3", 474)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      routine_print_3F_ (var_n_13030.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)).add_operation (var_p_16607.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)).add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (gOption_piccoloOptions_generateGraphvizFiles.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_bool joker_17005 ; // Joker input parameter
      var_g_13469.getter_graphviz (SOURCE_FILE ("ipic18_block_ordering.galgas3", 479)).method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GGS_string (".blockOrderingConstraints.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 479)), joker_17005, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 479)) ;
    }
  }
  GGS_stringset var_newSymbolSet_17050 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_bool var_ok_17090 = GGS_bool (true) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_17107 (var_orderedBlockList_15738) ;
  while (enumerator_17107.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_newSymbolSet_17050.getter_hasKey (enumerator_17107.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 485)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_string var_s_17213 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17107.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 486)).add_operation (GGS_string ("\" is duplicated"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 487)) ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 488)), var_s_17213, fixItArray10  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 488)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_s_17213.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 489)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 489)) ;
        var_ok_17090 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_newSymbolSet_17050.plusPlusAssignOperation (enumerator_17107.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 492)) ;
    }
    enumerator_17107.gotoNextObject () ;
  }
  UpEnumerator_symbolTableForBlockOptimization enumerator_17476 (var_symbolTable_13298) ;
  while (enumerator_17476.hasCurrentObject ()) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_newSymbolSet_17050.getter_hasKey (enumerator_17476.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 496)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas3", 496)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_string var_s_17567 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17476.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 497)).add_operation (GGS_string ("\" is missing"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 498)) ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 499)), var_s_17567, fixItArray12  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 499)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_s_17567.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 500)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 500)) ;
        var_ok_17090 = GGS_bool (false) ;
      }
    }
    enumerator_17476.gotoNextObject () ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_ok_17090.boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      ioArgument_ioBlockList = var_orderedBlockList_15738 ;
      {
      routine_displayBlockList_3F__26__3F_ (GGS_string ("ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_orderedBlockList_15738, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 507)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_13) {
    GGS_string var_s_17998 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: reordered block list is inconsistent, it is not used anymore") ;
    GenericArray <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 510)), var_s_17998, fixItArray14  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 510)) ;
    ioArgument_ioListFileContents.plusAssignOperation(var_s_17998.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 511)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 511)) ;
    {
    routine_displayBlockList_3F__26__3F_ (GGS_string ("INCONSISTENT ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION (not used)"), ioArgument_ioListFileContents, var_orderedBlockList_15738, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 512)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = var_ok_17090.boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      routine_perform_5F_cluster_5F_ordering_3F__26__26_ (var_clusterList_13898, ioArgument_ioBlockList, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 516)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildInvocationGraph?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildInvocationGraph_3F__21_ (const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                           GGS_string & outArgument_outGraphVizString,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGraphVizString.drop () ; // Release 'out' argument
  outArgument_outGraphVizString = GGS_string ("digraph G {\n") ;
  outArgument_outGraphVizString.plusAssignOperation(GGS_string ("  node [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 530)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_18762 (constinArgument_inBlockList) ;
  while (enumerator_18762.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_18762.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 532)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_18762.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 533)).add_operation (GGS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 533)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 533)) ;
      }
    }
    UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_18957 (enumerator_18762.current_mBlock (HERE).readProperty_mInstructionList ()) ;
    while (enumerator_18957.hasCurrentObject ()) {
      callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_18957.current_mInstruction (HERE).ptr (), enumerator_18762.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 536)) ;
      enumerator_18957.gotoNextObject () ;
    }
    callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_18762.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_18762.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 538)) ;
    enumerator_18762.gotoNextObject () ;
  }
  outArgument_outGraphVizString.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 540)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'blockDiscontinuityCount'
//
//--------------------------------------------------------------------------------------------------

GGS_uint function_blockDiscontinuityCount (const GGS_ipic_31__38_BlockList & constinArgument_inBlockList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_19404 (constinArgument_inBlockList) ;
  GGS_uint index_19399 (uint32_t (0)) ;
  while (enumerator_19404.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_19404.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 548)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_nextBlockLabel_19529 ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::lowerThan, index_19399.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 550)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas3", 550)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_nextBlockLabel_19529 = constinArgument_inBlockList.getter_mBlockAtIndex (index_19399.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 551)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 551)).readProperty_mLabel ().readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          var_nextBlockLabel_19529 = GGS_string::makeEmptyString () ;
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_19404.current_mBlock (HERE).readProperty_mTerminator ().ptr (), var_nextBlockLabel_19529, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 555)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result_result.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 556)) ;
          }
        }
      }
    }
    enumerator_19404.gotoNextObject () ;
    index_19399.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 547)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_blockDiscontinuityCount [2] = {
  & kTypeDescriptor_GALGAS_ipic_31__38_BlockList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_blockDiscontinuityCount (Compiler * inCompiler,
                                                                     const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList operand0 = GGS_ipic_31__38_BlockList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                       inCompiler
                                                                                       COMMA_THERE) ;
  return function_blockDiscontinuityCount (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_blockDiscontinuityCount ("blockDiscontinuityCount",
                                                                         functionWithGenericHeader_blockDiscontinuityCount,
                                                                         & kTypeDescriptor_GALGAS_uint,
                                                                         1,
                                                                         functionArgs_blockDiscontinuityCount) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlockOrdering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (const GGS_string constinArgument_inSourceFileName,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccoloOptions_generateGraphvizFiles.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_invocationGraph_20200 ;
      {
      routine_buildInvocationGraph_3F__21_ (ioArgument_ioGeneratedBlockList, var_invocationGraph_20200, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 569)) ;
      }
      GGS_bool joker_20315 ; // Joker input parameter
      var_invocationGraph_20200.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GGS_string (".blockInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 570)), joker_20315, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 570)) ;
    }
  }
  GGS_bool var_optimize_20343 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (66)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 574)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 573)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_optimize_20343.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      routine_buildOrderedGraph_26__3F__26_ (ioArgument_ioGeneratedBlockList, constinArgument_inSourceFileName, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 576)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performRelativesResolution?&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_performRelativesResolution_3F__26__26__26_ (const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                         GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GGS_uint & ioArgument_ioConversionCount,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList var_modifiedBlockList_1614 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_1665 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_1694 (ioArgument_ioBlockList) ;
  GGS_uint index_1689 (uint32_t (0)) ;
  while (enumerator_1694.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_1749 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_1689.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 60)).objectCompare (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 60)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_1749 = ioArgument_ioBlockList.getter_mBlockAtIndex (index_1689.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 61)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 61)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_1749 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_1694.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 65)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_1665 = enumerator_1694.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    GGS_ipic_31__38_Block var_modifiedBlock_2232 ;
    extensionMethod_performRelativesResolution (enumerator_1694.current_mBlock (HERE), constinArgument_inSymbolTable, var_nextBlockLabel_1749, var_blockStartAddress_1665, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedBlock_2232, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 68)) ;
    var_modifiedBlockList_1614.addAssignOperation (var_modifiedBlock_2232  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 76)) ;
    GGS_uint var_blockSize_2306 = extensionGetter_blockSize (enumerator_1694.current_mBlock (HERE), var_nextBlockLabel_1749, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 77)) ;
    var_blockStartAddress_1665 = var_blockStartAddress_1665.add_operation (var_blockSize_2306, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 78)) ;
    enumerator_1694.gotoNextObject () ;
    index_1689.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 58)) ;
  }
  ioArgument_ioBlockList = var_modifiedBlockList_1614 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'computeLabelAbsoluteAddressMap??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                             const GGS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GGS_symbolTableForRelativesResolution & outArgument_outSymbolTable,
                                                             GGS_uint & outArgument_outFreeAddress,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSymbolTable.drop () ; // Release 'out' argument
  outArgument_outFreeAddress.drop () ; // Release 'out' argument
  outArgument_outSymbolTable = GGS_symbolTableForRelativesResolution::init (inCompiler COMMA_HERE) ;
  outArgument_outFreeAddress = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 106)) ;
  GGS_uint var_blockStartAddress_3364 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_3393 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_3388 (uint32_t (0)) ;
  while (enumerator_3393.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_3457 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_3388.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 111)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 111)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_3457 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_3388.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 112)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_3457 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_3393.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 116)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_3364 = enumerator_3393.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    {
    outArgument_outSymbolTable.setter_insertKey (enumerator_3393.current_mBlock (HERE).readProperty_mLabel (), var_blockStartAddress_3364, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 119)) ;
    }
    GGS_uint var_blockSize_3851 = extensionGetter_blockSize (enumerator_3393.current_mBlock (HERE), var_nextBlockLabel_3457, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 120)) ;
    var_blockStartAddress_3364 = var_blockStartAddress_3364.add_operation (var_blockSize_3851, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 121)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_3393.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 122)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outFreeAddress = var_blockStartAddress_3364 ;
      }
    }
    enumerator_3393.gotoNextObject () ;
    index_3388.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 109)) ;
  }
  UpEnumerator_ipic_31__38_BlockList enumerator_4083 (constinArgument_inInitialBlockList) ;
  while (enumerator_4083.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_4083.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 128)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = outArgument_outSymbolTable.getter_hasKey (enumerator_4083.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 129)).operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 129)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            outArgument_outSymbolTable.setter_insertKey (enumerator_4083.current_mBlock (HERE).readProperty_mLabel (), enumerator_4083.current_mBlock (HERE).readProperty_mAddress (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 130)) ;
            }
          }
        }
      }
    }
    enumerator_4083.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativesResolution&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativesResolution_26__26_ (GGS_string & ioArgument_ioListFileContents,
                                                      GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Relative branch conversion to absolute:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 143)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 145)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 145)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 145)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("RELATIVES RESOLUTION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 146)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 146)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 147)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 147)) ;
  GGS_bool var_resolutionDone_4878 = GGS_bool (false) ;
  GGS_uint var_pass_4913 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).isValid ()) {
    uint32_t variant_4924 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).uintValue () ;
    bool loop_4924 = true ;
    while (loop_4924) {
      loop_4924 = var_resolutionDone_4878.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).isValid () ;
      if (loop_4924) {
        loop_4924 = var_resolutionDone_4878.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).boolValue () ;
      }
      if (loop_4924 && (0 == variant_4924)) {
        loop_4924 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)) ;
      }
      if (loop_4924) {
        variant_4924 -= 1 ;
        var_pass_4913.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 153)) ;
        GGS_symbolTableForRelativesResolution var_symbolTable_5175 ;
        {
        GGS_uint joker_5194 ; // Joker input parameter
        routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (ioArgument_ioGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_5175, joker_5194, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 154)) ;
        }
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\nPass ").add_operation (var_pass_4913.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)) ;
        GGS_uint var_conversionCount_5268 = GGS_uint (uint32_t (0U)) ;
        {
        routine_performRelativesResolution_3F__26__26__26_ (var_symbolTable_5175, ioArgument_ioGeneratedBlockList, var_conversionCount_5268, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 162)) ;
        }
        var_resolutionDone_4878 = GGS_bool (ComparisonKind::equal, var_conversionCount_5268.objectCompare (GGS_uint (uint32_t (0U)))) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 169)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_s_5528 = GGS_string ("  Pass ").add_operation (var_pass_4913.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 170)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 170)) ;
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::equal, var_conversionCount_5268.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                var_s_5528.plusAssignOperation(GGS_string ("none."), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 172)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                test_3 = GGS_bool (ComparisonKind::equal, var_conversionCount_5268.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  var_s_5528.plusAssignOperation(GGS_string ("1 conversion"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 174)) ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                var_s_5528.plusAssignOperation(var_conversionCount_5268.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 176)).add_operation (GGS_string (" conversions"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 176)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 176)) ;
              }
            }
            {
            routine_print_3F_ (var_s_5528.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 178)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 178)) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 181)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No conversion.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 182)) ;
      {
      routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 183)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativeBranchOverflow??!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                             const GGS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GGS_branchOverflowMap & outArgument_outOverflowMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOverflowMap.drop () ; // Release 'out' argument
  GGS_symbolTableForRelativesResolution var_symbolTable_7247 ;
  {
  GGS_uint joker_7264 ; // Joker input parameter
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inBlockList, constinArgument_inInitialBlockList, var_symbolTable_7247, joker_7264, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 226)) ;
  }
  outArgument_outOverflowMap = GGS_branchOverflowMap::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_7330 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_7359 (constinArgument_inBlockList) ;
  GGS_uint index_7354 (uint32_t (0)) ;
  while (enumerator_7359.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_7414 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_7354.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 237)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 237)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_7414 = constinArgument_inBlockList.getter_mBlockAtIndex (index_7354.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 238)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_7414 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_7359.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 242)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_7330 = enumerator_7359.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    extensionMethod_relativeBranchOverflow (enumerator_7359.current_mBlock (HERE), var_symbolTable_7247, var_nextBlockLabel_7414, var_blockStartAddress_7330, outArgument_outOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 245)) ;
    GGS_uint var_blockSize_7855 = extensionGetter_blockSize (enumerator_7359.current_mBlock (HERE), var_nextBlockLabel_7414, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 251)) ;
    var_blockStartAddress_7330 = var_blockStartAddress_7330.add_operation (var_blockSize_7855, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 252)) ;
    enumerator_7359.gotoNextObject () ;
    index_7354.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_NULL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 8)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_PAGE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 20)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_END_ROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)).add_operation (GGS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 32)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_FD print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 38)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 38)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 38)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 38)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 40)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_F print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_FB print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 53)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 53)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 53)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 53)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 53)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_BitTestSkip print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 60)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 62)) ;
  }
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 64)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 64)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 64)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 64)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 64)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 70)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 70)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_JUMP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 76)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 76)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 83)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 83)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_JSR print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 90)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 90)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_MNOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 102)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 102)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_incDecRegisterInCondition print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 108)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 110)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 112)) ;
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 114)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 116)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 119)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 121)) ;
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 123)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_WO_OPERAND print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 129)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 129)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_TRIS print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 135)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateLineWithCode?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (const GGS_uint constinArgument_inAddress,
                                                           const GGS_codeList constinArgument_inCode,
                                                           const GGS_stringlist constinArgument_inIpicText,
                                                           const GGS_uint constinArgument_inMin,
                                                           const GGS_uint constinArgument_inMax,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_ipicText_1407 = constinArgument_inIpicText ;
  if (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).isValid ()) {
    uint32_t variant_1431 = constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).uintValue () ;
    bool loop_1431 = true ;
    while (loop_1431) {
      loop_1431 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1407.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)))).isValid () ;
      if (loop_1431) {
        loop_1431 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1407.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)))).boolValue () ;
      }
      if (loop_1431 && (0 == variant_1431)) {
        loop_1431 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_code_generation.galgas3", 41)) ;
      }
      if (loop_1431) {
        variant_1431 -= 1 ;
        var_ipicText_1407.addAssignOperation (GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 43)) ;
      }
    }
  }
  GGS_uint var_address_1540 = constinArgument_inAddress ;
  GGS_bool var_first_1566 = GGS_bool (true) ;
  UpEnumerator_stringlist enumerator_1586 (var_ipicText_1407) ;
  UpEnumerator_codeList enumerator_1623 (constinArgument_inCode) ;
  while (enumerator_1586.hasCurrentObject () && enumerator_1623.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_x_36_string (var_address_1540, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 49)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 49)) ;
    var_address_1540 = var_address_1540.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_1623.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 50)) ;
    GGS_string var_s_1755 = GGS_string (" ") ;
    UpEnumerator_uintlist enumerator_1772 (enumerator_1623.current_mBinaryCode (HERE)) ;
    while (enumerator_1772.hasCurrentObject ()) {
      var_s_1755.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_string (enumerator_1772.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 53)) ;
      enumerator_1772.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1755.getter_rightPadding (GGS_uint (uint32_t (13U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 55)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 55)) ;
    var_s_1755 = GGS_string::makeEmptyString () ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = var_first_1566 ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (constinArgument_inMax)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_s_1755.plusAssignOperation(constinArgument_inMin.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 59)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_s_1755.plusAssignOperation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 61)) ;
        }
        var_s_1755.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 63)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMax.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_s_1755.plusAssignOperation(constinArgument_inMax.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 65)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 65)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          var_s_1755.plusAssignOperation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 67)) ;
        }
        var_s_1755.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 69)) ;
      }
    }
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1755.getter_rightPadding (GGS_uint (uint32_t (12U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 71)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_1623.current_mAssemblyCode (HERE).getter_rightPadding (GGS_uint (uint32_t (50U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 72)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 72)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 73)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_1586.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 74)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 75)) ;
    var_first_1566 = GGS_bool (false) ;
    enumerator_1586.gotoNextObject () ;
    enumerator_1623.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_2457 (var_ipicText_1407.getter_subListFromIndex (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 79))) ;
  while (enumerator_2457.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_x_36_string (var_address_1540, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 80)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_rightPadding (GGS_uint (uint32_t (76U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 81)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 81)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_2457.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 82)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 83)) ;
    enumerator_2457.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18GenerateCode?????????&?!!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (const GGS_string constinArgument_inSourceFileName,
                                                                                           const GGS_programKind constinArgument_inProgramKind,
                                                                                           const GGS_uint constinArgument_inBootloaderReservedROMsize,
                                                                                           const GGS_uint constinArgument_inROMsize,
                                                                                           const GGS_string constinArgument_inProcessorName,
                                                                                           const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                                           const GGS_registerTable constinArgument_inAllRegisters,
                                                                                           const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                           const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                           const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                                                           GGS_uint & outArgument_outUsedROMsize,
                                                                                           GGS_generatedCodeMap & outArgument_outGeneratedCodeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  outArgument_outGeneratedCodeMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 219)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 219)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 219)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CODE GENERATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 220)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 220)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 220)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 221)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 221)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 221)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas3", 222)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Code generation:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 223)) ;
      }
    }
  }
  GGS_symbolTableForRelativesResolution var_symbolTable_7606 ;
  GGS_uint var_firstDataAddress_7634 ;
  {
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_7606, var_firstDataAddress_7634, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 226)) ;
  }
  GGS_uint var_dataAddress_7726 = var_firstDataAddress_7634 ;
  GGS_pic_31__38__5F_dataAddressMap var_dataAddressMap_7785 = GGS_pic_31__38__5F_dataAddressMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38__5F_dataMap enumerator_7824 (constinArgument_inDataMap) ;
  while (enumerator_7824.hasCurrentObject ()) {
    {
    var_dataAddressMap_7785.setter_insertKey (enumerator_7824.current_lkey (HERE), var_dataAddress_7726, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 236)) ;
    }
    var_dataAddress_7726 = var_dataAddress_7726.add_operation (enumerator_7824.current_mData (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 237)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 237)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 237)) ;
    enumerator_7824.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 240)) ;
  }
  GGS_string var_assemblyString_8032 = GGS_string::makeEmptyString () ;
  GGS_bigint var_relocatableCodeSize_8058 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 242)) ;
  GGS_bigint var_blockStartAddress_8088 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 243)) ;
  outArgument_outGeneratedCodeMap = GGS_generatedCodeMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_8145 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_8140 (uint32_t (0)) ;
  while (enumerator_8145.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_8209 ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::lowerThan, index_8140.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 247)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 247)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_nextBlockLabel_8209 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_8140.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 248)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      var_nextBlockLabel_8209 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_8145.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 252)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_blockStartAddress_8088 = enumerator_8145.current_mBlock (HERE).readProperty_mAddress ().getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 253)) ;
        {
        routine_setEmitAddress_3F_ (var_blockStartAddress_8088.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 254)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 254)) ;
        }
      }
    }
    extensionMethod_generateCodeForBlock (enumerator_8145.current_mBlock (HERE), var_symbolTable_7606, var_dataAddressMap_7785, var_blockStartAddress_8088.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 259)), var_nextBlockLabel_8209, ioArgument_ioListFileContents, var_assemblyString_8032, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 256)) ;
    GGS_uint var_blockSize_8782 = extensionGetter_blockSize (enumerator_8145.current_mBlock (HERE), var_nextBlockLabel_8209, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 265)) ;
    var_blockStartAddress_8088 = var_blockStartAddress_8088.add_operation (var_blockSize_8782.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 266)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 266)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_8145.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 267)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_relocatableCodeSize_8058 = var_relocatableCodeSize_8058.add_operation (var_blockSize_8782.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 268)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 268)) ;
      }
    }
    enumerator_8145.gotoNextObject () ;
    index_8140.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 245)) ;
  }
  var_dataAddress_7726 = var_firstDataAddress_7634 ;
  UpEnumerator_pic_31__38__5F_dataMap enumerator_9067 (constinArgument_inDataMap) ;
  const bool bool_4 = true ;
  if (enumerator_9067.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress_3F_ (var_dataAddress_7726, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 275)) ;
    }
    {
    GGS_codeList temp_5 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 278)) ;
    temp_5.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7726.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 278)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 278)) ;
    GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 279)) ;
    temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7726.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 279)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 279)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7726, temp_5, temp_6, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 280)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 276)) ;
    }
    var_assemblyString_8032.plusAssignOperation(GGS_string ("    ORG ").add_operation (var_dataAddress_7726.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 284)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 284)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 284)) ;
    while (enumerator_9067.hasCurrentObject () && bool_4) {
      {
      GGS_codeList temp_7 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)) ;
      temp_7.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("_data_").add_operation (enumerator_9067.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)) ;
      GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)) ;
      temp_8.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("_data_").add_operation (enumerator_9067.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7726, temp_7, temp_8, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 290)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 286)) ;
      }
      var_assemblyString_8032.plusAssignOperation(GGS_string ("_data_").add_operation (enumerator_9067.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 294)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 294)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 294)) ;
      UpEnumerator_uintlist enumerator_9660 (enumerator_9067.current_mData (HERE)) ;
      while (enumerator_9660.hasCurrentObject ()) {
        var_assemblyString_8032.plusAssignOperation(GGS_string ("    DW ").add_operation (enumerator_9660.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 296)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 296)) ;
        {
        routine_emitCode_3F_ (enumerator_9660.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 297)) ;
        }
        {
        GGS_codeList temp_9 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        temp_10.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (enumerator_9660.current_mValue (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        temp_9.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    DW ").add_operation (enumerator_9660.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)), temp_10, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        GGS_stringlist temp_11 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 301)) ;
        temp_11.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("    DW ").add_operation (enumerator_9660.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 301)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 301)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 301)) ;
        routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7726, temp_9, temp_11, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 302)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 298)) ;
        }
        var_dataAddress_7726 = var_dataAddress_7726.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 306)) ;
        enumerator_9660.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 308)) ;
      enumerator_9067.gotoNextObject () ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas3", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_print_3F_ (GGS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize_8058.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 311)).add_operation (GGS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 311)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 311)) ;
      }
    }
  }
  outArgument_outUsedROMsize = var_dataAddress_7726 ;
  switch (constinArgument_inProgramKind.enumValue ()) {
  case GGS_programKind::Enumeration::invalid:
    break ;
  case GGS_programKind::Enumeration::enum_regularProgram:
  case GGS_programKind::Enumeration::enum_userProgram:
    {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inROMsize)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 318)), GGS_string ("the program uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 318)).add_operation (GGS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 318)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 318)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 318)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 318)) ;
        }
      }
    }
    break ;
  case GGS_programKind::Enumeration::enum_bootloaderProgram:
    {
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inBootloaderReservedROMsize)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 322)), GGS_string ("the bootloader uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 322)).add_operation (GGS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 322)).add_operation (constinArgument_inBootloaderReservedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 322)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 322)), fixItArray16  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 322)) ;
        }
      }
    }
    break ;
  }
  UpEnumerator_actualConfigurationMap enumerator_10843 (constinArgument_inActualConfigurationMap) ;
  while (enumerator_10843.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_10843.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 328)) ;
    }
    {
    routine_emitByte_3F_ (enumerator_10843.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 329)) ;
    }
    enumerator_10843.gotoNextObject () ;
  }
  GGS_string var_contents_11024 ;
  {
  routine_getGeneratedContents_21_ (var_contents_11024, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 332)) ;
  }
  GGS_string var_destinationFile_11040 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 333)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 333)) ;
  GGS_bool joker_11169 ; // Joker input parameter
  var_contents_11024.method_writeToFileWhenDifferentContents (var_destinationFile_11040, joker_11169, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 334)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_string var_baseName_11272 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas3", 337)).getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 337)) ;
      GGS_string var_cContents_11395 ;
      {
      routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_11272, var_cContents_11395, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 338)) ;
      }
      var_destinationFile_11040 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 339)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 339)) ;
      GGS_bool joker_11540 ; // Joker input parameter
      var_cContents_11395.method_writeToFileWhenDifferentContents (var_destinationFile_11040, joker_11540, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 340)) ;
      GGS_string var_hContents_11591 ;
      {
      routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_11272, var_hContents_11591, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 341)) ;
      }
      var_destinationFile_11040 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 342)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 342)) ;
      GGS_bool joker_11736 ; // Joker input parameter
      var_hContents_11591.method_writeToFileWhenDifferentContents (var_destinationFile_11040, joker_11736, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 343)) ;
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas3", 346)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 346)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      {
      routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString_8032, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 347)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18GenerateAssemblyFile??????'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inSourceFileName,
                                                                      const GGS_string constinArgument_inProcessorName,
                                                                      const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                      const GGS_registerTable constinArgument_inAllRegisters,
                                                                      const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                      const GGS_string constinArgument_inAssemblyCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_assemblyString_12777 = GGS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 371)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 371)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 373)) ;
  var_assemblyString_12777.plusAssignOperation(constinArgument_inAssemblyCode, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 374)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 376)) ;
  UpEnumerator_registerTable enumerator_13028 (constinArgument_inPredefinedRegisters) ;
  while (enumerator_13028.hasCurrentObject ()) {
    GGS_uint var_firstRegister_13103 ;
    enumerator_13028.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13103, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 378)) ;
    var_assemblyString_12777.plusAssignOperation(enumerator_13028.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)).add_operation (var_firstRegister_13103.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 379)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)) ;
    enumerator_13028.gotoNextObject () ;
  }
  var_assemblyString_12777.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 381)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 383)) ;
  UpEnumerator_registerTable enumerator_13364 (constinArgument_inAllRegisters) ;
  while (enumerator_13364.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_13364.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 385)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas3", 385)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_firstRegister_13494 ;
        enumerator_13364.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13494, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 386)) ;
        var_assemblyString_12777.plusAssignOperation(enumerator_13364.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)).add_operation (var_firstRegister_13494.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 387)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)) ;
      }
    }
    enumerator_13364.gotoNextObject () ;
  }
  var_assemblyString_12777.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 390)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string (";--- Piccolo defined symbols\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 392)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string ("W EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 393)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string ("FAST EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 394)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string ("BSR_ACCESS EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 395)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 397)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_assemblyString_12777.plusAssignOperation(GGS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 398)) ;
      UpEnumerator_actualConfigurationMap enumerator_13995 (constinArgument_inActualConfigurationMap) ;
      while (enumerator_13995.hasCurrentObject ()) {
        var_assemblyString_12777.plusAssignOperation(GGS_string ("  __config ").add_operation (enumerator_13995.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).add_operation (enumerator_13995.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)) ;
        enumerator_13995.gotoNextObject () ;
      }
    }
  }
  var_assemblyString_12777.plusAssignOperation(GGS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 404)) ;
  var_assemblyString_12777.plusAssignOperation(GGS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 405)) ;
  GGS_string var_asmDestinationFile_14338 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 407)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 407)) ;
  GGS_bool joker_14478 ; // Joker input parameter
  var_assemblyString_12777.method_writeToFileWhenDifferentContents (var_asmDestinationFile_14338, joker_14478, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 408)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleBaselineInstructionList?????&&&!??&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (const GGS_uint constinArgument_inCurrentPage,
                                                                                            const GGS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                                                            const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                            GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                            GGS_bool & outArgument_outContinuesInSequence,
                                                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                                                            const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GGS_bool (true) ;
  UpEnumerator_baseline_5F_instructionList enumerator_2512 (constinArgument_inInstructionList) ;
  GGS_uint index_2507 (uint32_t (0)) ;
  while (enumerator_2512.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 72)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2512.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 73)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    GGS_bool temp_2 ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, index_2507.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 86)).objectCompare (constinArgument_inInstructionList.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 86)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) enumerator_2512.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 76)) ;
    enumerator_2512.gotoNextObject () ;
    index_2507.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 71)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                                 const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("the last routine instruction should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 122)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::init_21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 124)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'acceptableTRISoperand'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_acceptableTRISoperand (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  result_result = GGS_stringset::init (inCompiler COMMA_HERE) ;
  result_result.plusPlusAssignOperation (GGS_string ("GPIO")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 131)) ;
  result_result.plusPlusAssignOperation (GGS_string ("PORTA")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 132)) ;
  result_result.plusPlusAssignOperation (GGS_string ("PORTB")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 133)) ;
  result_result.plusPlusAssignOperation (GGS_string ("PORTC")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 134)) ;
  result_result.plusPlusAssignOperation (GGS_string ("PORTD")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 135)) ;
  result_result.plusPlusAssignOperation (GGS_string ("PORTE")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 136)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptableTRISoperand = false ;
static GGS_stringset gOnceFunctionResult_acceptableTRISoperand ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_acceptableTRISoperand (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptableTRISoperand) {
    gOnceFunctionResult_acceptableTRISoperand = onceFunction_acceptableTRISoperand (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptableTRISoperand = true ;
  }
  return gOnceFunctionResult_acceptableTRISoperand ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_acceptableTRISoperand (void) {
  gOnceFunctionResult_acceptableTRISoperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_acceptableTRISoperand (nullptr,
                                                                 releaseOnceFunctionResult_acceptableTRISoperand) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_acceptableTRISoperand [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_acceptableTRISoperand (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_acceptableTRISoperand (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_acceptableTRISoperand ("acceptableTRISoperand",
                                                                       functionWithGenericHeader_acceptableTRISoperand,
                                                                       & kTypeDescriptor_GALGAS_stringset,
                                                                       0,
                                                                       functionArgs_acceptableTRISoperand) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_TRIS::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                        const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                        GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_TRIS temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction but should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 154)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_instruction_5F_TRIS temp_4 = this ;
    test_3 = function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 157)).getter_hasKey (temp_4.readProperty_mOperand ().readProperty_string () COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 157)).operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 157)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_string var_s_5936 = GGS_string::makeEmptyString () ;
      UpEnumerator_stringset enumerator_5952 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 159))) ;
      while (enumerator_5952.hasCurrentObject ()) {
        var_s_5936.plusAssignOperation(enumerator_5952.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 160)) ;
        enumerator_5952.gotoNextObject () ;
        if (enumerator_5952.hasCurrentObject ()) {
          var_s_5936.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 161)) ;
        }
      }
      const GGS_baseline_5F_instruction_5F_TRIS temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s_5936, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 163)), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 163)) ;
    }
  }
  GGS_uintlist var_registerAddressList_6195 ;
  GGS_registerProtection var_protection_6226 ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_7 = this ;
  GGS_uint joker_6216_3 ; // Joker input parameter
  GGS_bitSliceTable joker_6216_2 ; // Joker input parameter
  GGS_string joker_6216_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mOperand (), var_registerAddressList_6195, joker_6216_3, joker_6216_2, joker_6216_1, var_protection_6226, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 166)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mOperand (), GGS_bool (true), var_protection_6226, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 167)) ;
  GGS_uint var_opcode_6358 ;
  var_registerAddressList_6195.method_first (var_opcode_6358, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 168)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_9 = this ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_TRIS::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mOperand (), var_opcode_6358, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 170)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_MNOP::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                        const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                        const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                        GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_MNOP temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 188)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_MNOP temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_MNOP temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 190)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                                    const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                    GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                    GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                    GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                                    GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                    const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                    const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = constinArgument_inLastInstructionShouldReturn.operator_and (GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLiteralInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 207)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 207)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 208)) ;
    }
  }
  GGS_sint_36__34_ var_immediatValue_8428 ;
  const GGS_baseline_5F_instruction_5F_literalOperation temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue_8428, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 210)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_immediatValue_8428.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_immediatValue_8428.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 212)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_immediatValue_8428.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 219)), var_immediatValue_8428.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 220)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 217)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_10 = this ;
    const GGS_baseline_5F_instruction_5F_literalOperation temp_11 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mLiteralInstruction (), var_immediatValue_8428.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 225)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 225)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 222)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_FD build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FD::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                      const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                      GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                      GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                      GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                      const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                      const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_FD temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 245)) ;
    }
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_10087 ;
  GGS_bitSliceTable var_bitSliceTable_10151 ;
  const GGS_baseline_5F_instruction_5F_FD temp_3 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_10087, var_bitSliceTable_10151, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 247)) ;
  const GGS_baseline_5F_instruction_5F_FD temp_4 = this ;
  const GGS_baseline_5F_instruction_5F_FD temp_5 = this ;
  const GGS_baseline_5F_instruction_5F_FD temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_intermediateRegisterDescription_10087, temp_6.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 254)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_CALL build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                        const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                        const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                        GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_11142 ;
  GGS_luint var_targetPage_11166 ;
  const GGS_baseline_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_11142, var_targetPage_11166, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 276)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isNoReturn_11142.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_baseline_5F_instruction_5F_CALL temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 278)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_11166.readProperty_uint ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_CALL temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("for an inter-page regular routine call, use a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 281)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_baseline_5F_instruction_5F_CALL temp_8 = this ;
      const GGS_baseline_5F_instruction_5F_CALL temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 285)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_baseline_5F_instruction_5F_CALL temp_10 = this ;
    const GGS_baseline_5F_instruction_5F_CALL temp_11 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_CALL::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 289)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_JSR build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JSR::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                       const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                       const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                       const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                       GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                       GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                       GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                       const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                       const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                       GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_12504 ;
  GGS_luint var_targetPage_12528 ;
  const GGS_baseline_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_12504, var_targetPage_12528, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 310)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isNoReturn_12504.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_baseline_5F_instruction_5F_JSR temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 312)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_JSR temp_5 = this ;
      const GGS_baseline_5F_instruction_5F_JSR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_12528.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 316)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    const GGS_baseline_5F_instruction_5F_JSR temp_7 = this ;
    const GGS_baseline_5F_instruction_5F_JSR temp_8 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), temp_8.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_12528.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 322)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_F build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_F::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                     const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                     GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                     GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                     GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                     const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                     const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_F temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 345)) ;
    }
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_14020 ;
  const GGS_baseline_5F_instruction_5F_F temp_3 = this ;
  GGS_bitSliceTable joker_14057 ; // Joker input parameter
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_14020, joker_14057, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 347)) ;
  const GGS_baseline_5F_instruction_5F_F temp_4 = this ;
  const GGS_baseline_5F_instruction_5F_F temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mFAinstruction (), var_intermediateRegisterDescription_14020, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 354)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_FB build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FB::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                      const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                      GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                      GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                      GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                      const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                      const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_FB temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 375)) ;
    }
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_15207 ;
  GGS_bitSliceTable var_bitSliceTable_15264 ;
  const GGS_baseline_5F_instruction_5F_FB temp_3 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_15207, var_bitSliceTable_15264, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 377)) ;
  GGS_uint var_bitNumber_15437 ;
  const GGS_baseline_5F_instruction_5F_FB temp_4 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_4.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_15264, var_bitNumber_15437, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 384)) ;
  const GGS_baseline_5F_instruction_5F_FB temp_5 = this ;
  const GGS_baseline_5F_instruction_5F_FB temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mBitOrientedOp (), var_intermediateRegisterDescription_15207, var_bitNumber_15437, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_GOTO build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                        const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                        const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                        GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                        const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_GOTO temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 414)) ;
    }
  }
  GGS_bool var_isNoReturn_16506 ;
  GGS_luint var_targetPage_16530 ;
  const GGS_baseline_5F_instruction_5F_GOTO temp_3 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.readProperty_mTargetLabel (), var_isNoReturn_16506, var_targetPage_16530, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 416)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isNoReturn_16506.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 417)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_GOTO temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 418)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_16530.readProperty_uint ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_baseline_5F_instruction_5F_GOTO temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("for an inter-page noreturn routine call, use a JUMP instruction"), fixItArray9  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 421)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_baseline_5F_instruction_5F_GOTO temp_10 = this ;
  const GGS_baseline_5F_instruction_5F_GOTO temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 425)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_JUMP build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                        const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                        const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                        GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                        const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_JUMP temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 445)) ;
    }
  }
  GGS_bool var_isNoReturn_17844 ;
  GGS_luint var_targetPage_17868 ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_3 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.readProperty_mTargetLabel (), var_isNoReturn_17844, var_targetPage_17868, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 447)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isNoReturn_17844.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 448)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_JUMP temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 449)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_7 = this ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), temp_8.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_17868.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 453)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_IF_BitTest build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                                 const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                 const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                 const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                 GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                 GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                                 GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                                 const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_18977 ;
  GGS_bitSliceTable var_bitSliceTable_19034 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_18977, var_bitSliceTable_19034, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 474)) ;
  GGS_uint var_bitNumber_19201 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_19034, var_bitNumber_19201, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 481)) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_intermediateRegisterDescription_18977, var_bitNumber_19201, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 488)) ;
  GGS_bool var_unusedContinuesInSequence_19439 = GGS_bool (true) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_19439, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 495)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_IF_IncDec build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                                const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                                GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                                const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_20491 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_baseCode_20491 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 527)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_baseCode_20491 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 529)) ;
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_20804 ;
  GGS_bitSliceTable var_bitSliceTable_20868 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_20804, var_bitSliceTable_20868, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 532)) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_baseCode_20491, var_intermediateRegisterDescription_20804, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 540)) ;
  GGS_bool var_unusedContinuesInSequence_21117 = GGS_bool (true) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_21117, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 547)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_FOREVER build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                           const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                                                           GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                           GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                                           GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                           const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                           const GGS_bool /* constinArgument_inLastInstructionShouldReturn */,
                                                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    {
      const GGS_baseline_5F_instruction_5F_FOREVER temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 578)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_baseline_5F_instruction_5F_FOREVER temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 581)) ;
    }
    break ;
  }
  GGS_string var_label_30__22502 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 584)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 584)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 585)) ;
  const GGS_baseline_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_30__22502, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 586)) ;
  {
  const GGS_baseline_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 587)) ;
  }
  const GGS_baseline_5F_instruction_5F_FOREVER temp_6 = this ;
  const GGS_baseline_5F_instruction_5F_FOREVER temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_30__22502, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 602)) ;
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_STATIC_REPEAT build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                                    const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                    GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                    GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                    GGS_string & ioArgument_ioListFileContents,
                                                                                                                    GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                    const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                                    const GGS_bool /* constinArgument_inLastInstructionShouldReturn */,
                                                                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_lowerBound_24033 ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_24033, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 625)) ;
  GGS_sint_36__34_ var_upperBound_24146 ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_24146, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 626)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_24033.objectCompare (var_upperBound_24146)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_24033.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)).add_operation (var_upperBound_24146.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)), fixItArray4  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_24146.substract_operation (var_lowerBound_24033, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 630)).objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_24146.substract_operation (var_lowerBound_24033, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)).getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)).add_operation (GGS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)) ;
      }
    }
  }
  GGS_constantMap var_tempConstantMap_24535 = constinArgument_inConstantMap ;
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_24535.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_24033, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 635)) ;
  }
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_24535, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 636)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 650)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list contains an endless loop"), fixItArray12  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 651)) ;
    }
  }
  GGS_sint_36__34_ var_idx_25155 = var_lowerBound_24033.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 654)) ;
  if (var_upperBound_24146.substract_operation (var_lowerBound_24033, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).isValid ()) {
    uint32_t variant_25178 = var_upperBound_24146.substract_operation (var_lowerBound_24033, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).uintValue () ;
    bool loop_25178 = true ;
    while (loop_25178) {
      GGS_bool test_13 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_25155.objectCompare (var_upperBound_24146)) ;
      if (GalgasBool::boolTrue == test_13.boolEnum ()) {
        test_13 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_25178 = test_13.isValid () ;
      if (loop_25178) {
        loop_25178 = test_13.boolValue () ;
      }
      if (loop_25178 && (0 == variant_25178)) {
        loop_25178 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)) ;
      }
      if (loop_25178) {
        variant_25178 -= 1 ;
        GGS_constantMap var_constantMap_25284 = constinArgument_inConstantMap ;
        {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
        var_constantMap_25284.setter_insertKey (temp_14.readProperty_mConstantName (), var_idx_25155, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 657)) ;
        }
        {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_15 = this ;
        routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_15.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_25284, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 658)) ;
        }
        var_idx_25155.plusAssignOperation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 672)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_do_while build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                               const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                                               GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                               GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                                               GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                               const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                               const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelInstructionBegin_26432 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 691)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 691)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 691)) ;
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_labelInstructionBegin_26432, temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 693)) ;
  {
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 695)) ;
  }
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_2 = this ;
  UpEnumerator_baseline_5F_partList enumerator_27094 (temp_2.readProperty_mWhilePartList ()) ;
  while (enumerator_27094.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_27094.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 711)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_baseline_5F_instruction_5F_do_5F_while temp_4 = this ;
        callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_27094.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_4.readProperty_mInstructionLocation (), var_labelInstructionBegin_26432, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 712)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_nextBranchLabel_27510 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 724)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 724)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 724)) ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_5 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_27094.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_5.readProperty_mInstructionLocation (), var_nextBranchLabel_27510, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 725)) ;
      {
      routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, enumerator_27094.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 736)) ;
      }
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_6 = this ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_7 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_labelInstructionBegin_26432, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 750)) ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_8 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_nextBranchLabel_27510, temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 753)) ;
    }
    enumerator_27094.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_structured_if build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint constinArgument_inCurrentPage,
                                                                                                                    const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                    GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                    GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                    GGS_string & ioArgument_ioListFileContents,
                                                                                                                    GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                    const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                                    const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_label_5F_nextCondition_29250 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 773)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 773)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 773)) ;
  GGS_string var_label_5F_endOfIfinstruction_29343 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 774)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 774)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 774)) ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_0 = this ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_0.readProperty_mIfCondition ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_1.readProperty_mInstructionLocation (), var_label_5F_nextCondition_29250, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 776)) ;
  GGS_bool var_thenContinuesInSequence_30005 ;
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_2 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_2.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_thenContinuesInSequence_30005, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 788)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 803)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 803)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 803)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_5 = this ;
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_29343, temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 804)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_29250, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 808)) ;
  GGS_bool var_elseContinuesInSequence_30779 ;
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_8 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_8.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_elseContinuesInSequence_30779, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 809)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 823)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 823)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 823)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_11 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_29343, temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 824)) ;
    }
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_30005.operator_or (var_elseContinuesInSequence_30779 COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 827)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_incDecRegisterInCondition build_intermediate_condition_instructions'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_incDecRegisterInCondition::method_build_5F_intermediate_5F_condition_5F_instructions (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                            const GGS_bool constinArgument_inComplementaryBranch,
                                                                                                            const GGS_location constinArgument_inInstructionLocation,
                                                                                                            const GGS_string constinArgument_inTargetLabel,
                                                                                                            GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_32610 ;
  GGS_bitSliceTable var_bitSliceTable_32674 ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_32610, var_bitSliceTable_32674, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 859)) ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (constinArgument_inInstructionLocation, var_intermediateRegisterDescription_32610, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 873)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 867)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_negateCondition build_intermediate_condition_instructions'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_negateCondition::method_build_5F_intermediate_5F_condition_5F_instructions (const GGS_uint constinArgument_inCurrentPage,
                                                                                                  const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                  const GGS_constantMap constinArgument_inConstantMap,
                                                                                                  GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                  const GGS_bool constinArgument_inComplementaryBranch,
                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                  const GGS_string constinArgument_inTargetLabel,
                                                                                                  GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                  GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_negateCondition temp_0 = this ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 893)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 888)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_andCondition build_intermediate_condition_instructions'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_andCondition::method_build_5F_intermediate_5F_condition_5F_instructions (const GGS_uint constinArgument_inCurrentPage,
                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                               GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                               const GGS_bool constinArgument_inComplementaryBranch,
                                                                                               const GGS_location constinArgument_inInstructionLocation,
                                                                                               const GGS_string constinArgument_inTargetLabel,
                                                                                               GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_andCondition temp_1 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 914)) ;
      const GGS_baseline_5F_andCondition temp_2 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 925)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_label_30__34979 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 937)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 937)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 937)) ;
    const GGS_baseline_5F_andCondition temp_3 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, var_label_30__34979, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 938)) ;
    const GGS_baseline_5F_andCondition temp_4 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 949)) ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_30__34979, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 960)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_bitTest_in_structured_if_condition build_intermediate_condition_instructions'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_build_5F_intermediate_5F_condition_5F_instructions (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                                                 const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                                 const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                                 const GGS_bool constinArgument_inComplementaryBranch,
                                                                                                                                 const GGS_location constinArgument_inInstructionLocation,
                                                                                                                                 const GGS_string constinArgument_inTargetLabel,
                                                                                                                                 GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                                 GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_36460 ;
  GGS_bitSliceTable var_bitSliceTable_36517 ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_36460, var_bitSliceTable_36517, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 977)) ;
  GGS_uint var_bitNumber_36684 ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_36517, var_bitNumber_36684, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 984)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_intermediateRegisterDescription_36460, var_bitNumber_36684, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 991)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (constinArgument_inInstructionLocation, GGS_lstring::init_21__21_ (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 997)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze_3F__3F_ (const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                          const GGS_string constinArgument_inSourceFileName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceFileBaseName_768 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas3", 15)).getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 15)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_768.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 17)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 17)).add_operation (var_sourceFileBaseName_768, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 18)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 18)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 17)) ;
    }
  }
  GGS_string var_listFileContents_1108 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_1239 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_1239, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 22)) ;
  }
  switch (var_piccoloDeviceModel_1239.readProperty_mProcessorType ().enumValue ()) {
  case GGS_processorType::Enumeration::invalid:
    break ;
  case GGS_processorType::Enumeration::enum_midrange:
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 25)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 26)) ;
    }
    break ;
  }
  GGS_bool var_hasInterrupt_1641 = GGS_bool (false) ;
  UpEnumerator_midrange_5F_interruptDefinitionList enumerator_1694 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
  while (enumerator_1694.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_hasInterrupt_1641.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1694.current_mInterruptLocation (HERE), GGS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 32)) ;
      }
    }
    var_hasInterrupt_1641 = GGS_bool (true) ;
    enumerator_1694.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_2073 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1239.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_1108, var_actualConfigurationMap_2073, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 37)) ;
  }
  GGS_constantMap var_constantMap_2173 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_usedRegisters_2208 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_registerTable var_registerTable_2249 = var_piccoloDeviceModel_1239.readProperty_mRegisterTable () ;
  GGS_lstring var_romSizeString_2335 = GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 48)), inCompiler COMMA_HERE) ;
  {
  var_constantMap_2173.setter_insertKey (var_romSizeString_2335, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 49)) ;
  }
  UpEnumerator_constantDefinitionList enumerator_2516 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList ()) ;
  while (enumerator_2516.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_2640 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_2516.current_mExpression (HERE).ptr (), var_registerTable_2249, var_constantMap_2173, var_result_2640, var_usedRegisters_2208, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 52)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_registerTable_2249.getter_hasKey (enumerator_2516.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 53)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2516.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_2516.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 54)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 54)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 54)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      var_constantMap_2173.setter_insertKey (enumerator_2516.current_mConstantName (HERE), var_result_2640, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 56)) ;
      }
    }
    enumerator_2516.gotoNextObject () ;
  }
  GGS_ramBankTable var_ramBank_2982 = var_piccoloDeviceModel_1239.readProperty_mRamBankTable () ;
  GGS_declaredByteMap var_declaredByteMap_3282 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_2173, var_usedRegisters_2208, var_ramBank_2982, var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_listFileContents_1108, var_registerTable_2249, var_declaredByteMap_3282, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 61)) ;
  }
  GGS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3682 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 74)).divide_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 74)), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2173, var_piccoloDeviceModel_1239.readProperty_mSharedBankName (), var_registerTable_2249, constinArgument_inPiccoloModel, var_hasInterrupt_1641, var_generatedInstructionList_3682, var_listFileContents_1108, var_usedRegisters_2208, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 73)) ;
  }
  GGS_stringset var_usedRoutineSet_3833 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 86)) ;
  GGS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_3979 = GGS_midrange_5F_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_4063 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_4063.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_3979.setter_insertKey (enumerator_4063.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 92)) ;
    }
    enumerator_4063.gotoNextObject () ;
  }
  GGS_stringset var_unusedRoutineDeclarationUnicity_4229 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_4283 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList ()) ;
  while (enumerator_4283.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_declaredRoutineMap_3979.getter_hasKey (enumerator_4283.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 97)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 97)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4283.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4283.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 98)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 98)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 98)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4229.getter_hasKey (enumerator_4283.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 99)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4283.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4283.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 100)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 100)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 100)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = var_usedRoutineSet_3833.getter_hasKey (enumerator_4283.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 101)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4283.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4283.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 102)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 102)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 102)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4229.plusPlusAssignOperation (enumerator_4283.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 104)) ;
    enumerator_4283.gotoNextObject () ;
  }
  UpEnumerator_midrange_5F_declaredRoutineMap enumerator_4834 (var_declaredRoutineMap_3979) ;
  while (enumerator_4834.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_usedRoutineSet_3833.getter_hasKey (enumerator_4834.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 107)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 107)).operator_and (var_unusedRoutineDeclarationUnicity_4229.getter_hasKey (enumerator_4834.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 107)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 107)) COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4834.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4834.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 108)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 108)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 108)) ;
      }
    }
    enumerator_4834.gotoNextObject () ;
  }
  GGS_stringset var_unusedByteDeclarationUnicity_5155 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_5206 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList ()) ;
  while (enumerator_5206.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_registerTable_2249.getter_hasKey (enumerator_5206.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 114)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 114)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5206.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5206.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 115)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 115)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 115)) ;
      }
    }
    if (GalgasBool::boolFalse == test_16) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5155.getter_hasKey (enumerator_5206.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 116)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5206.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5206.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 117)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 117)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 117)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_usedRegisters_2208.getter_hasKey (enumerator_5206.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 118)).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5206.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5206.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 119)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 119)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 119)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5155.plusPlusAssignOperation (enumerator_5206.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 121)) ;
    enumerator_5206.gotoNextObject () ;
  }
  UpEnumerator_declaredByteMap enumerator_5737 (var_declaredByteMap_3282) ;
  while (enumerator_5737.hasCurrentObject ()) {
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = var_usedRegisters_2208.getter_hasKey (enumerator_5737.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 124)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 124)).operator_and (var_unusedByteDeclarationUnicity_5155.getter_hasKey (enumerator_5737.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 124)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 124)) COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5737.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5737.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 125)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 125)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 125)) ;
      }
    }
    enumerator_5737.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas3", 129)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 129)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations_26__26_ (var_generatedInstructionList_3682, var_listFileContents_1108, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 130)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas3", 133)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (var_generatedInstructionList_3682, var_listFileContents_1108, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 134)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas3", 138)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GGS_uint var_usedROMsize_6789 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (var_registerTable_2249, GGS_constantMap::init (inCompiler COMMA_HERE), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_generatedInstructionList_3682, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), var_actualConfigurationMap_2073, var_listFileContents_1108, var_usedROMsize_6789, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 140)) ;
      }
      GGS_string var_contents_6823 ;
      {
      routine_getGeneratedContents_21_ (var_contents_6823, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 151)) ;
      }
      GGS_string var_destinationFile_6887 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 152)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 152)) ;
      GGS_bool joker_7018 ; // Joker input parameter
      var_contents_6823.method_writeToFileWhenDifferentContents (var_destinationFile_6887, joker_7018, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 153)) ;
      GalgasBool test_27 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_27) {
        test_27 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_27) {
          GGS_string var_baseName_7097 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas3", 155)).getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 155)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_7097, var_contents_6823, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 156)) ;
          }
          var_destinationFile_6887 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 157)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 157)) ;
          GGS_bool joker_7359 ; // Joker input parameter
          var_contents_6823.method_writeToFileWhenDifferentContents (var_destinationFile_6887, joker_7359, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 158)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_7097, var_contents_6823, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 159)) ;
          }
          var_destinationFile_6887 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 160)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 160)) ;
          GGS_bool joker_7549 ; // Joker input parameter
          var_contents_6823.method_writeToFileWhenDifferentContents (var_destinationFile_6887, joker_7549, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 161)) ;
        }
      }
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas3", 164)).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GGS_string var_verboseMessage_7656 = GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 165)).add_operation (GGS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 165)) ;
          var_verboseMessage_7656.plusAssignOperation(GGS_string (" used: ").add_operation (var_usedROMsize_6789.getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 166)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 166)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 166)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 166)) ;
          var_verboseMessage_7656.plusAssignOperation(var_usedROMsize_6789.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)).divide_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)).getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 167)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)) ;
          UpEnumerator_ramBankTable enumerator_7976 (var_ramBank_2982) ;
          while (enumerator_7976.hasCurrentObject ()) {
            GGS_uint var_bankSize_8012 = enumerator_7976.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_7976.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 169)) ;
            GGS_uint var_usedSize_8077 = enumerator_7976.current_mFirstFreeAddress (HERE).substract_operation (enumerator_7976.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 170)) ;
            var_verboseMessage_7656.plusAssignOperation(GGS_string ("  Bank '").add_operation (enumerator_7976.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 171)).add_operation (GGS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 171)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 171)) ;
            var_verboseMessage_7656.plusAssignOperation(var_usedSize_8077.getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 172)).add_operation (GGS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 172)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 172)) ;
            var_verboseMessage_7656.plusAssignOperation(var_bankSize_8012.getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 173)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 173)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 173)) ;
            var_verboseMessage_7656.plusAssignOperation(var_usedSize_8077.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)).divide_operation (var_bankSize_8012, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)).getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 174)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)) ;
            enumerator_7976.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_7656, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 176)) ;
          }
        }
      }
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        test_29 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_string var_assemblyCode_8541 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (var_piccoloDeviceModel_1239.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_registerTable_2249, var_generatedInstructionList_3682, var_actualConfigurationMap_2073, var_assemblyCode_8541, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 181)) ;
          }
          GGS_string var_asmDestinationFile_8823 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 189)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 189)) ;
          GGS_bool joker_8966 ; // Joker input parameter
          var_assemblyCode_8541.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8823, joker_8966, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 190)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    GGS_string var_hexDestinationFile_9048 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 193)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 193)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = var_hexDestinationFile_9048.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas3", 194)).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_9048, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 195)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_9230 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 197)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 197)) ;
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_asmDestinationFile_9230.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas3", 198)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_9230, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 199)) ;
        }
      }
    }
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    test_32 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      GGS_string var_listFile_9523 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 204)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 204)) ;
      GGS_bool joker_9649 ; // Joker input parameter
      var_listFileContents_1108.method_writeToFileWhenDifferentContents (var_listFile_9523, joker_9649, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 205)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_NULL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 11)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_pseudo_ORG print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 18)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 25)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_FD print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 32)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 32)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 32)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 34)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_F print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_FB print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 49)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 49)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 49)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 49)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_BitTestSkip print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 57)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 59)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 61)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 61)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 61)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 61)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_JUMP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 68)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 75)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 82)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_JSR print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_CLRWDT print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 96)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_CLRW print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_NOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_RETURN print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_RETFIE print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 125)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_SLEEP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 132)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_MNOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 146)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_incDecRegisterInCondition print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 153)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 155)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 157)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 159)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 161)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 164)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 166)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 168)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 168)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18BootloaderSpecificationAnalysis????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_string constinArgument_inSourceFileName,
                                                                                                             const GGS_lstring constinArgument_inBootloaderName,
                                                                                                             const GGS_lstring constinArgument_inDeviceName,
                                                                                                             const GGS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationList,
                                                                                                             const GGS_bootloaderReservedRAMmap constinArgument_inBootloaderReservedRAMmap,
                                                                                                             const GGS_luint constinArgument_inReservedRomSize,
                                                                                                             const GGS_routineDeclarationList constinArgument_inUserRoutineDeclarationList,
                                                                                                             const GGS_ramDefinitionList constinArgument_inSharedRamDefinitionList,
                                                                                                             GGS_string & outArgument_outListFileContents,
                                                                                                             GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                             GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                             GGS_ramBankTable & outArgument_outRamBank,
                                                                                                             GGS_registerTable & outArgument_outRegisterTable,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outListFileContents.drop () ; // Release 'out' argument
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  GGS_string var_sourceFileBaseName_749 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 18)).getter_deletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 18)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_749.objectCompare (constinArgument_inBootloaderName.readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inBootloaderName.readProperty_location (), GGS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 20)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 20)).add_operation (var_sourceFileBaseName_749, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 21)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 21)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 20)) ;
    }
  }
  outArgument_outListFileContents = GGS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 25)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.readProperty_mProcessorType ().enumValue ()) {
  case GGS_processorType::Enumeration::invalid:
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
    {
      outArgument_outAccessBankSplitOffset = GGS_uint (uint32_t (96U)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GGS_uint (uint32_t (128U)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_midrange:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 29)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 30)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 33)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 33)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 33)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BOOTLOADER FOOTPRINT").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 34)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 34)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 34)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 34)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 35)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 35)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, constinArgument_inReservedRomSize.readProperty_uint ().objectCompare (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReservedRomSize.readProperty_location (), GGS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 38)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 37)).add_operation (GGS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 38)).add_operation (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 39)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 38)).add_operation (GGS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 39)).add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 39)).add_operation (GGS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 40)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 37)) ;
    }
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 42)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 42)).add_operation (GGS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 42)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 42)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.readProperty_mRamBankTable () ;
  UpEnumerator_bootloaderReservedRAMmap enumerator_2465 (constinArgument_inBootloaderReservedRAMmap) ;
  while (enumerator_2465.hasCurrentObject ()) {
    GGS_uint var_firstAddress_2552 ;
    GGS_uint var_firstFreeAddress_2571 ;
    GGS_uint var_lastAddressPlusOne_2594 ;
    GGS_uintlist var_mirrorOffsetList_2626 ;
    outArgument_outRamBank.method_searchKey (enumerator_2465.current_lkey (HERE), var_firstAddress_2552, var_firstFreeAddress_2571, var_lastAddressPlusOne_2594, var_mirrorOffsetList_2626, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 46)) ;
    var_firstFreeAddress_2571 = var_firstFreeAddress_2571.add_operation (enumerator_2465.current_mReservedSize (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 47)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterThan, var_firstFreeAddress_2571.objectCompare (var_lastAddressPlusOne_2594)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2465.current_mReservedSize (HERE).readProperty_location (), GGS_string ("reserved size is greater than size of '").add_operation (enumerator_2465.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)).add_operation (GGS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)).add_operation (var_lastAddressPlusOne_2594.substract_operation (var_firstAddress_2552, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 50)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 50)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2571, enumerator_2465.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 52)) ;
      }
      outArgument_outListFileContents.plusAssignOperation(GGS_string ("'").add_operation (enumerator_2465.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (GGS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (enumerator_2465.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (GGS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (var_firstAddress_2552.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)).add_operation (var_firstFreeAddress_2571.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)).add_operation (GGS_string (").\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)) ;
    }
    enumerator_2465.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 58)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 58)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 58)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BOOTLOADER ROUTINES").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 60)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 60)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("Routine").getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 61)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 61)) ;
  GGS_stringset var_routineNameSet_3585 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_entryPointAddress_3627 = GGS_uint (uint32_t (4U)) ;
  UpEnumerator_routineDeclarationList enumerator_3677 (constinArgument_inBootloaderRoutineDeclarationList) ;
  while (enumerator_3677.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_routineNameSet_3585.getter_hasKey (enumerator_3677.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 65)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3677.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 66)) ;
      }
    }
    var_routineNameSet_3585.plusPlusAssignOperation (enumerator_3677.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 68)) ;
    outArgument_outListFileContents.plusAssignOperation(enumerator_3677.current_mRoutineName (HERE).readProperty_string ().getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)).add_operation (var_entryPointAddress_3627.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)) ;
    var_entryPointAddress_3627 = var_entryPointAddress_3627.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 70)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3627.objectCompare (GGS_uint (uint32_t (8U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        var_entryPointAddress_3627 = GGS_uint (uint32_t (12U)) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3627.objectCompare (GGS_uint (uint32_t (24U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          var_entryPointAddress_3627 = GGS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_3677.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 77)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 79)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 79)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 79)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("USER PROGRAM ROUTINES").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 81)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 81)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("Routine").getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 82)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 82)) ;
  var_entryPointAddress_3627 = constinArgument_inReservedRomSize.readProperty_uint () ;
  UpEnumerator_routineDeclarationList enumerator_4686 (constinArgument_inUserRoutineDeclarationList) ;
  while (enumerator_4686.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_routineNameSet_3585.getter_hasKey (enumerator_4686.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 85)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4686.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 86)) ;
      }
    }
    var_routineNameSet_3585.plusPlusAssignOperation (enumerator_4686.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 88)) ;
    outArgument_outListFileContents.plusAssignOperation(enumerator_4686.current_mRoutineName (HERE).readProperty_string ().getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)).add_operation (var_entryPointAddress_3627.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)) ;
    var_entryPointAddress_3627 = var_entryPointAddress_3627.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 90)) ;
    enumerator_4686.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 92)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GGS_stringset joker_5296 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  {
  GGS_declaredByteMap joker_5426 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GGS_constantMap::init (inCompiler COMMA_HERE), joker_5296, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5426, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 95)) ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 106)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 106)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 106)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_3F__3F_ (const GGS_pic_31__38_AST constinArgument_inPiccoloModel,
                                             const GGS_string constinArgument_inSourceFileName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceFileBaseName_562 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas3", 12)).getter_deletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas3", 12)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_562.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 14)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 14)).add_operation (var_sourceFileBaseName_562, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 15)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 15)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 14)) ;
    }
  }
  GGS_string var_listFileContents_902 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_1000 ;
  GGS_uint var_accessBankSplitOffset_1031 ;
  GGS_ramBankTable var_ramBank_1073 ;
  GGS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1113 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1301 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1476 ;
  GGS_luint var_bootloaderReservedROMsize_1544 ;
  GGS_registerTable var_registerTable_1691 ;
  GGS_string var_piccoloDeviceName_1719 ;
  switch (constinArgument_inPiccoloModel.readProperty_mProgramKind ().enumValue ()) {
  case GGS_programKind::Enumeration::invalid:
    break ;
  case GGS_programKind::Enumeration::enum_regularProgram:
    {
      var_piccoloDeviceName_1719 = constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_string () ;
      {
      routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1000, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 33)) ;
      }
      switch (var_piccoloDeviceModel_1000.readProperty_mProcessorType ().enumValue ()) {
      case GGS_processorType::Enumeration::invalid:
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1031 = GGS_uint (uint32_t (96U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1031 = GGS_uint (uint32_t (128U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_midrange:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 37)) ;
          var_accessBankSplitOffset_1031.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_processorType::Enumeration::enum_baseline:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 38)) ;
          var_accessBankSplitOffset_1031.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1073 = var_piccoloDeviceModel_1000.readProperty_mRamBankTable () ;
      var_bootloaderReservedRAMmap_1113 = GGS_bootloaderReservedRAMmap::init (inCompiler COMMA_HERE) ;
      var_registerTable_1691 = var_piccoloDeviceModel_1000.readProperty_mRegisterTable () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderReservedROMsize_1544 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 47)), inCompiler COMMA_HERE) ;
    }
    break ;
  case GGS_programKind::Enumeration::enum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_piccoloDeviceModel_1000.drop () ;
      var_piccoloDeviceName_1719.drop () ;
      var_accessBankSplitOffset_1031.drop () ;
      var_ramBank_1073.drop () ;
      var_registerTable_1691.drop () ;
      var_bootloaderReservedRAMmap_1113.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1000, var_piccoloDeviceName_1719, var_accessBankSplitOffset_1031, var_ramBank_1073, var_registerTable_1691, var_bootloaderReservedRAMmap_1113, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 51)) ;
      UpEnumerator_ramBankTable enumerator_3691 (var_ramBank_1073) ;
      while (enumerator_3691.hasCurrentObject ()) {
        {
        var_ramBank_1073.setter_setMFirstFreeAddressForKey (enumerator_3691.current_mFirstAddress (HERE), enumerator_3691.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 63)) ;
        }
        enumerator_3691.gotoNextObject () ;
      }
    }
    break ;
  case GGS_programKind::Enumeration::enum_userProgram:
    {
      var_piccoloDeviceModel_1000.drop () ;
      var_piccoloDeviceName_1719.drop () ;
      var_accessBankSplitOffset_1031.drop () ;
      var_ramBank_1073.drop () ;
      var_registerTable_1691.drop () ;
      var_bootloaderReservedRAMmap_1113.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1000, var_piccoloDeviceName_1719, var_accessBankSplitOffset_1031, var_ramBank_1073, var_registerTable_1691, var_bootloaderReservedRAMmap_1113, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 66)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
    }
    break ;
  }
  GGS_pic_31__38_MacroMap var_macroMap_4557 = GGS_pic_31__38_MacroMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_MacroDefinitionList enumerator_4608 (constinArgument_inPiccoloModel.readProperty_mMacroDefinitionList ()) ;
  while (enumerator_4608.hasCurrentObject ()) {
    {
    var_macroMap_4557.setter_insertKey (enumerator_4608.current_mMacroName (HERE), enumerator_4608.current_mConstantNameList (HERE), enumerator_4608.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 83)) ;
    }
    enumerator_4608.gotoNextObject () ;
  }
  GGS_stringset var_usedRoutineSet_4829 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), var_macroMap_4557, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForUserProgramImplementation_1476, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 86)) ;
  GGS_declaredRoutineMap var_declaredRoutineMap_5111 = GGS_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_5246 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_5246.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5111.setter_insertKey (enumerator_5246.current_mRoutineName (HERE), enumerator_5246.current_mRequiredBank (HERE), enumerator_5246.current_mReturnedBank (HERE), enumerator_5246.current_mPreservesBank (HERE), enumerator_5246.current_mIsNoReturn (HERE), enumerator_5246.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 95)) ;
    }
    enumerator_5246.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_5535 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_5582 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList ()) ;
  while (enumerator_5582.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5111.getter_hasKey (enumerator_5582.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 107)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5582.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5582.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 108)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 108)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 108)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5535.getter_hasKey (enumerator_5582.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 109)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5582.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5582.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 110)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 110)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 110)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_usedRoutineSet_4829.getter_hasKey (enumerator_5582.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 111)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5582.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5582.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 112)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 112)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 112)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5535.plusPlusAssignOperation (enumerator_5582.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 114)) ;
    enumerator_5582.gotoNextObject () ;
  }
  UpEnumerator_declaredRoutineMap enumerator_6132 (var_declaredRoutineMap_5111) ;
  while (enumerator_6132.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_usedRoutineSet_4829.getter_hasKey (enumerator_6132.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 117)).operator_and (var_unusedDeclarationUnicity_5535.getter_hasKey (enumerator_6132.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 117)) COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 117)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_6132.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6132.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 118)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 118)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 118)) ;
      }
    }
    enumerator_6132.gotoNextObject () ;
  }
  GGS_stringset var_inlinedRoutineSet_6402 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_6442 (constinArgument_inPiccoloModel.readProperty_mInlinedRoutineList ()) ;
  while (enumerator_6442.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5111.getter_hasKey (enumerator_6442.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 124)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6442.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6442.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 125)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 125)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 125)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = var_usedRoutineSet_4829.getter_hasKey (enumerator_6442.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 126)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6442.current_mValue (HERE).readProperty_location (), GGS_string ("useless declaration, the '").add_operation (enumerator_6442.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 127)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 127)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 127)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        var_inlinedRoutineSet_6402.plusPlusAssignOperation (enumerator_6442.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 129)) ;
      }
    }
    enumerator_6442.gotoNextObject () ;
  }
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6865 = constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList () ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_6965 = constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList () ;
  {
  routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (var_inlinedRoutineSet_6402, var_declaredRoutineMap_5111, var_interruptDefinitionList_6865, var_routineDefinitionList_6965, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 134)) ;
  }
  UpEnumerator_checkpicList enumerator_7256 (constinArgument_inPiccoloModel.readProperty_mCheckpicList ()) ;
  while (enumerator_7256.hasCurrentObject ()) {
    GGS_bool var_found_7318 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_7341 (enumerator_7256.current_mValueList (HERE)) ;
    bool bool_16 = var_found_7318.operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 143)).isValidAndTrue () ;
    if (enumerator_7341.hasCurrentObject () && bool_16) {
      while (enumerator_7341.hasCurrentObject () && bool_16) {
        var_found_7318 = GGS_bool (ComparisonKind::equal, enumerator_7341.current_mValue (HERE).readProperty_string ().objectCompare (var_piccoloDeviceName_1719)) ;
        enumerator_7341.gotoNextObject () ;
        if (enumerator_7341.hasCurrentObject ()) {
          bool_16 = var_found_7318.operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 143)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = var_found_7318.operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 146)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7256.current_mErrorLocation (HERE), GGS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1719, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 147)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 147)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 147)) ;
      }
    }
    enumerator_7256.gotoNextObject () ;
  }
  GGS_bool var_hasHighInterrupt_7627 = GGS_bool (false) ;
  GGS_bool var_highInterruptIsFast_7664 = GGS_bool (false) ;
  GGS_bool var_hasLowInterrupt_7704 = GGS_bool (false) ;
  GGS_bool var_lowInterruptIsFast_7740 = GGS_bool (false) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_7803 (var_interruptDefinitionList_6865) ;
  while (enumerator_7803.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas3", 156)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7803.current_mInterruptName (HERE).readProperty_location (), GGS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 157)) ;
      }
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, enumerator_7803.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("high"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        var_highInterruptIsFast_7664 = enumerator_7803.current_mFastReturn (HERE) ;
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7627.boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GenericArray <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7803.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 162)) ;
          }
        }
        var_hasHighInterrupt_7627 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, enumerator_7803.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("low"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          var_lowInterruptIsFast_7740 = enumerator_7803.current_mFastReturn (HERE) ;
          GalgasBool test_25 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7704.boolEnum () ;
            if (GalgasBool::boolTrue == test_25) {
              GenericArray <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7803.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 168)) ;
            }
          }
          var_hasLowInterrupt_7704 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7803.current_mInterruptName (HERE).readProperty_location (), GGS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 172)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7664.operator_and (var_lowInterruptIsFast_7740 COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 174)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7803.current_mInterruptName (HERE).readProperty_location (), GGS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 175)) ;
      }
    }
    enumerator_7803.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_8823 ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas3", 180)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      UpEnumerator_configDefinitionList enumerator_8942 (constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList ()) ;
      while (enumerator_8942.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8942.current_mDefinitionLocation (HERE), GGS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 182)) ;
        enumerator_8942.gotoNextObject () ;
      }
      var_actualConfigurationMap_8823 = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    {
    routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1000.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_902, var_actualConfigurationMap_8823, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 186)) ;
    }
  }
  GGS_uint var_RAMsize_9397 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ramBankTable enumerator_9442 (var_ramBank_1073) ;
  while (enumerator_9442.hasCurrentObject ()) {
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::greaterThan, enumerator_9442.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9397)).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        var_RAMsize_9397 = enumerator_9442.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9442.gotoNextObject () ;
  }
  GGS_constantMap var_constantMap_9624 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_9624.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 203)), inCompiler COMMA_HERE), var_piccoloDeviceModel_1000.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 203)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 203)) ;
  }
  {
  var_constantMap_9624.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("RAM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 204)), inCompiler COMMA_HERE), var_RAMsize_9397.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 204)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 204)) ;
  }
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (ComparisonKind::notEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_semantics.galgas3", 206)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      GGS_lstring var_bootloaderSizeString_10009 = GGS_lstring::init_21__21_ (GGS_string ("BOOTLOADER_RESERVED_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 207)), inCompiler COMMA_HERE) ;
      {
      var_constantMap_9624.setter_insertKey (var_bootloaderSizeString_10009, var_bootloaderReservedROMsize_1544.readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 208)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 208)) ;
      }
    }
  }
  GGS_stringset var_usedRegisters_10221 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_constantDefinitionList enumerator_10272 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList ()) ;
  while (enumerator_10272.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_10416 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_10272.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_1000.readProperty_mRegisterTable (), var_constantMap_9624, var_result_10416, var_usedRegisters_10221, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 213)) ;
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_1000.readProperty_mRegisterTable ().getter_hasKey (enumerator_10272.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 214)).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        GenericArray <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_10272.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_10272.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 215)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 215)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 215)) ;
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      {
      var_constantMap_9624.setter_insertKey (enumerator_10272.current_mConstantName (HERE), var_result_10416, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 217)) ;
      }
    }
    enumerator_10272.gotoNextObject () ;
  }
  GGS_declaredByteMap var_declaredByteMap_11015 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_9624, var_usedRegisters_10221, var_ramBank_1073, var_piccoloDeviceModel_1000.readProperty_mRegisterTable (), var_listFileContents_902, var_registerTable_1691, var_declaredByteMap_11015, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 221)) ;
  }
  GalgasBool test_36 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_36) {
    test_36 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas3", 233)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_36) {
      UpEnumerator_ramBankTable enumerator_11276 (var_ramBank_1073) ;
      while (enumerator_11276.hasCurrentObject ()) {
        GalgasBool test_37 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1113.getter_hasKey (enumerator_11276.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 235)).boolEnum () ;
          if (GalgasBool::boolTrue == test_37) {
            GGS_luint var_bootloaderReservedSize_11373 ;
            var_bootloaderReservedRAMmap_1113.method_searchKey (enumerator_11276.current_lkey (HERE), var_bootloaderReservedSize_11373, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 237)) ;
            GalgasBool test_38 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_38) {
              test_38 = GGS_bool (ComparisonKind::greaterThan, enumerator_11276.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11276.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 238)).objectCompare (var_bootloaderReservedSize_11373.readProperty_uint ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_38) {
                GenericArray <FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)), GGS_string ("for '").add_operation (enumerator_11276.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)).add_operation (enumerator_11276.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11276.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 240)).getter_string (SOURCE_FILE ("pic18_semantics.galgas3", 240)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 240)).add_operation (var_bootloaderReservedSize_11373.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_semantics.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 241)).add_operation (GGS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 242)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_37) {
          GalgasBool test_40 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_40) {
            test_40 = GGS_bool (ComparisonKind::greaterThan, enumerator_11276.current_mFirstFreeAddress (HERE).objectCompare (enumerator_11276.current_mFirstAddress (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_40) {
              GenericArray <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)), GGS_string ("for '").add_operation (enumerator_11276.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)).add_operation (enumerator_11276.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11276.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 247)).getter_string (SOURCE_FILE ("pic18_semantics.galgas3", 247)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 247)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)) ;
            }
          }
        }
        enumerator_11276.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inSourceFileName, var_piccoloDeviceModel_1000.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 255)), var_macroMap_4557, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_accessBankSplitOffset_1031, var_registerTable_1691, var_declaredByteMap_11015, var_routineDefinitionList_6965, constinArgument_inPiccoloModel.readProperty_mProgramKind (), var_constantMap_9624, var_usedRegisters_10221, constinArgument_inPiccoloModel.readProperty_mDataList (), var_interruptDefinitionList_6865, constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), var_ramBank_1073, var_hasHighInterrupt_7627, var_hasLowInterrupt_7704, var_piccoloDeviceModel_1000.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1000.readProperty_mRegisterTable (), var_actualConfigurationMap_8823, constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), var_listFileContents_902, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 253)) ;
  }
  GalgasBool test_42 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_42) {
    test_42 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_42) {
      var_listFileContents_902.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 283)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 283)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 283)) ;
      GGS_string var_listFile_13413 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas3", 284)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 284)) ;
      GGS_bool joker_13539 ; // Joker input parameter
      var_listFileContents_902.method_writeToFileWhenDifferentContents (var_listFile_13413, joker_13539, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 285)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_NULL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_NULL::getter_length (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_pseudo_PAGE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_length (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_pseudo_END_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_pseudo_LABEL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_length (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_actualInstruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_actualInstruction::getter_length (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (1U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_JUMP length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_JUMP::getter_length (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  result_result = GGS_uint (uint32_t (1U)).add_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas3", 44)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas3", 44)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas3", 44)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_JSR length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_JSR::getter_length (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  result_result = GGS_uint (uint32_t (1U)).add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas3", 50)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas3", 50)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_instruction_MNOP length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::getter_length (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_result = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@baseline_intermediate_incDecRegisterInCondition length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_length (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_uint (uint32_t (2U)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                    const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                    const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                    const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                    GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                    const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                    GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                    GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_withNoOperand temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_withNoOperand temp_1 = this ;
  outArgument_outInstruction = GGS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mKind (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FDA analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6745 ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_1 = this ;
  GGS_bitSliceTable joker_6774 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 176)), var_IPICregisterDescription_6745, joker_6774, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 171)) ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_3 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), var_IPICregisterDescription_6745, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FA analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                         const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                         GGS_uint & ioArgument_ioCurrentBank,
                                                                         const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7695 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_0 = this ;
  GGS_bitSliceTable joker_7724 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_7695, joker_7724, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 201)) ;
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7797 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_1 = this ;
  switch (temp_1.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_7797 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 213)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_7797 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 214)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_code_7797 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 215)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_code_7797 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 216)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_code_7797 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 217)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 219)), GGS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 219)) ;
      var_code_7797.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_pic_31__38_Instruction_5F_FA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_code_7797, var_IPICregisterDescription_7695, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_MOVFF analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                            GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_9109 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mSourceRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_sourceIPICregisterDescription_9109, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 239)) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9378 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_1 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_1.readProperty_mDestinationRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_destinationIPICregisterDescription_9378, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 246)) ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_2 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_sourceIPICregisterDescription_9109, var_destinationIPICregisterDescription_9378, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FBA analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10288 ;
  GGS_bitSliceTable var_bitSliceTable_10337 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_10288, var_bitSliceTable_10337, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 271)) ;
  GGS_uint var_bitNumber_10510 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10337, var_bitNumber_10510, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 281)) ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_10288, var_bitNumber_10510, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_literalOperation analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                       const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                                       const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                                       GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                       const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                       GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_11253 ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11253, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 307)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_11253.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_11253.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 309)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_11253.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)).add_operation (GGS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_5 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_11253.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 316)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 316)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_fnop analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_12194 ;
  const GGS_pic_31__38_Instruction_5F_fnop temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12194, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 331)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_12194.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_12194.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 333)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_fnop temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_12194.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_fnop temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), var_result_12194.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 339)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LFSR analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_LFSR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFSRindex ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_LFSR temp_2 = this ;
      const GGS_pic_31__38_Instruction_5F_LFSR temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFSRindex ().readProperty_location (), GGS_string ("the LFSR register idx (").add_operation (temp_3.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 355)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 355)).add_operation (GGS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 355)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 355)) ;
    }
  }
  GGS_sint_36__34_ var_result_13239 ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_5 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13239, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 358)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_result_13239.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_13239.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 360)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_LFSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_13239.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LFSR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_10 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mFSRindex (), var_result_13239.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 366)), inCompiler COMMA_HERE) ;
}

