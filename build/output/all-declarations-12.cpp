#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_incDecRegisterInCondition instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::getter_instructionLength (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outLength = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outLength = GGS_uint (uint32_t (2U)) ;
  }
//---
  return result_outLength ;
}


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
  GGS_configFieldMap var_configFieldMap_954 = GGS_configFieldMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_configRegisterMap enumerator_1056 (constinArgument_inConfigRegisterMap) ;
  while (enumerator_1056.hasCurrentObject ()) {
    GGS_uint var_defaultValue_1100 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)).left_shift_operation (enumerator_1056.current_mRegisterWidth (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 25)) ;
    {
    outArgument_outActualConfigurationMap.setter_insertKey (enumerator_1056.current_lkey (HERE), enumerator_1056.current_mRegisterAddress (HERE).readProperty_uint (), var_defaultValue_1100, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 26)) ;
    }
    GGS_lstring var_registerName_1251 = enumerator_1056.current_lkey (HERE) ;
    UpEnumerator_configRegisterMaskMap enumerator_1327 (enumerator_1056.current_mConfigRegisterMaskMap (HERE)) ;
    while (enumerator_1327.hasCurrentObject ()) {
      {
      var_configFieldMap_954.setter_insertKey (enumerator_1327.current_lkey (HERE), var_registerName_1251, enumerator_1327.current_mMaskValue (HERE), enumerator_1327.current_mDescription (HERE), enumerator_1327.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 29)) ;
      }
      enumerator_1327.gotoNextObject () ;
    }
    enumerator_1056.gotoNextObject () ;
  }
  GGS_stringset var_actualSettingNameSet_1551 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_configDefinitionList enumerator_1596 (constinArgument_inConfigDefinitionList) ;
  while (enumerator_1596.hasCurrentObject ()) {
    UpEnumerator_configSettingList enumerator_1662 (enumerator_1596.current_mSettingList (HERE)) ;
    while (enumerator_1662.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_actualSettingNameSet_1551.getter_hasKey (enumerator_1662.current_mSettingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 36)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_1662.current_mSettingName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_1662.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 37)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 37)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 37)) ;
        }
      }
      var_actualSettingNameSet_1551.plusPlusAssignOperation (enumerator_1662.current_mSettingName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 39)) ;
      GGS_lstring var_registerName_1960 ;
      GGS_fieldSettingMap var_fieldSettingMap_1982 ;
      GGS_luint joker_1973_2 ; // Joker input parameter
      GGS_lstring joker_1973_1 ; // Joker input parameter
      var_configFieldMap_954.method_searchKey (enumerator_1662.current_mSettingName (HERE), var_registerName_1960, joker_1973_2, joker_1973_1, var_fieldSettingMap_1982, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 40)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_fieldSettingMap_1982.getter_hasKey (enumerator_1662.current_mSettingValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 41)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_uint var_settingValue_2115 ;
          GGS_uint var_settingMask_2133 ;
          var_fieldSettingMap_1982.method_searchKey (enumerator_1662.current_mSettingValue (HERE), var_settingValue_2115, var_settingMask_2133, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 42)) ;
          GGS_uint var_registerValue_2164 ;
          GGS_uint joker_2237 ; // Joker input parameter
          outArgument_outActualConfigurationMap.method_searchKey (var_registerName_1960, joker_2237, var_registerValue_2164, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 44)) ;
          var_registerValue_2164 = var_registerValue_2164.operator_and (var_settingMask_2133.operator_tilde (SOURCE_FILE ("piccolo_config.galgas3", 45)) COMMA_SOURCE_FILE ("piccolo_config.galgas3", 45)).operator_or (var_settingValue_2115 COMMA_SOURCE_FILE ("piccolo_config.galgas3", 45)) ;
          {
          outArgument_outActualConfigurationMap.setter_setMRegisterValueForKey (var_registerValue_2164, var_registerName_1960.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 46)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::greaterThan, var_fieldSettingMap_1982.getter_count (SOURCE_FILE ("piccolo_config.galgas3", 47)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GGS_string var_errorMessage_2480 = GGS_string ("the '").add_operation (enumerator_1662.current_mSettingValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 48)).add_operation (GGS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 48)).add_operation (enumerator_1662.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 48)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 49)) ;
            GGS_stringlist var_replacementSuggestions_2627 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
            UpEnumerator_fieldSettingMap enumerator_2676 (var_fieldSettingMap_1982) ;
            while (enumerator_2676.hasCurrentObject ()) {
              var_replacementSuggestions_2627.addAssignOperation (GGS_string ("\"").add_operation (enumerator_2676.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 52)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 52))  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 52)) ;
              enumerator_2676.gotoNextObject () ;
            }
            GenericArray <FixItDescription> fixItArray4 ;
            appendFixItActions (fixItArray4, EnumFixItKind::fixItReplace, var_replacementSuggestions_2627) ;
            inCompiler->emitSemanticError (enumerator_1662.current_mSettingValue (HERE).readProperty_location (), var_errorMessage_2480, fixItArray4  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 54)) ;
          }
        }
      }
      enumerator_1662.gotoNextObject () ;
    }
    enumerator_1596.gotoNextObject () ;
  }
  GGS_stringset var_notDefinedSetting_2941 = var_configFieldMap_954.getter_keySet (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 59)).substract_operation (var_actualSettingNameSet_1551, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 59)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_notDefinedSetting_2941.getter_count (SOURCE_FILE ("piccolo_config.galgas3", 60)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_errorMessage_3060 = GGS_string ("the following configuration settings are not defined:") ;
      UpEnumerator_stringset enumerator_3140 (var_notDefinedSetting_2941) ;
      while (enumerator_3140.hasCurrentObject ()) {
        var_errorMessage_3060.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_3140.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 63)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 63)) ;
        enumerator_3140.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 65)), var_errorMessage_3060, fixItArray6  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 65)) ;
    }
  }
  UpEnumerator_actualConfigurationMap enumerator_3341 (outArgument_outActualConfigurationMap) ;
  while (enumerator_3341.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Register '").add_operation (enumerator_3341.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (enumerator_3341.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (GGS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (enumerator_3341.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 69)) ;
    GGS_configRegisterMaskMap var_configRegisterMaskMap_3574 ;
    GGS_luint joker_3563 ; // Joker input parameter
    GGS_luint joker_3566 ; // Joker input parameter
    GGS_illegalMaskList joker_3596 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3341.current_lkey (HERE), joker_3563, joker_3566, var_configRegisterMaskMap_3574, joker_3596, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 70)) ;
    UpEnumerator_configRegisterMaskMap enumerator_3641 (var_configRegisterMaskMap_3574) ;
    while (enumerator_3641.hasCurrentObject ()) {
      GGS_lstring var_settingName_3714 = enumerator_3641.current_lkey (HERE) ;
      UpEnumerator_fieldSettingMap enumerator_3777 (enumerator_3641.current_mFieldSettingMap (HERE)) ;
      while (enumerator_3777.hasCurrentObject ()) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_3341.current_mRegisterValue (HERE).operator_and (enumerator_3641.current_mMaskValue (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 74)).objectCompare (enumerator_3777.current_mValue (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  setting '").add_operation (var_settingName_3714.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (GGS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (enumerator_3777.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas3", 75)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (GGS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (enumerator_3777.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)).add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 75)) ;
          }
        }
        enumerator_3777.gotoNextObject () ;
      }
      enumerator_3641.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 79)) ;
    enumerator_3341.gotoNextObject () ;
  }
  UpEnumerator_actualConfigurationMap enumerator_4136 (outArgument_outActualConfigurationMap) ;
  while (enumerator_4136.hasCurrentObject ()) {
    GGS_illegalMaskList var_illegalMaskList_4240 ;
    GGS_luint joker_4226 ; // Joker input parameter
    GGS_luint joker_4229 ; // Joker input parameter
    GGS_configRegisterMaskMap joker_4232 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4136.current_lkey (HERE), joker_4226, joker_4229, joker_4232, var_illegalMaskList_4240, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 83)) ;
    UpEnumerator_illegalMaskList enumerator_4294 (var_illegalMaskList_4240) ;
    while (enumerator_4294.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, enumerator_4136.current_mRegisterValue (HERE).operator_and (enumerator_4294.current_mIllegalMask (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas3", 85)).objectCompare (enumerator_4294.current_mIllegalValue (HERE).readProperty_uint ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)), GGS_string ("illegal setting for '").add_operation (enumerator_4136.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)).add_operation (GGS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)).add_operation (enumerator_4294.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 86)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4136.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 87)).add_operation (GGS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 87)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 87)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  message: ").add_operation (enumerator_4294.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 88)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas3", 88)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas3", 88)) ;
        }
      }
      enumerator_4294.gotoNextObject () ;
    }
    enumerator_4136.gotoNextObject () ;
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
//Overriding extension method '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_structured_if instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CALL instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JSR instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_GOTO instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JUMP instructionUsesGOTOorCALL'
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
  UpEnumerator_midrange_5F_instructionList enumerator_2937 (constinArgument_inInstructionList) ;
  while (enumerator_2937.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 87)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2937.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 88)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) enumerator_2937.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 91)) ;
    enumerator_2937.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrange_instruction_savebank build_midrange_ipic_instructionList'
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
  GGS_registerExpression var_STATUS_5F_register_5023 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 147)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 148)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 149)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5191 ;
  GGS_bitSliceTable joker_5401 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_5023.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 154)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5191, joker_5401, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 152)) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5524 ;
  const GGS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  GGS_bitSliceTable joker_5729 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 165)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5524, joker_5729, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 163)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 175)), var_STATUS_5F_IPICregisterDescription_5191, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 173)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 181)), var_save_5F_IPICregisterDescription_5524, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 179)) ;
  GGS_uint var_finalBank_6273 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_savebank temp_3 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_3.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6273, GGS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 185)) ;
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
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 206)), var_save_5F_IPICregisterDescription_5524, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 204)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 212)), var_STATUS_5F_IPICregisterDescription_5191, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 210)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_banksel build_midrange_ipic_instructionList'
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
  GGS_registerExpression var_STATUS_5F_register_8084 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 236)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 237)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 238)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8253 ;
  GGS_bitSliceTable var_bitSliceTable_8305 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_8084.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8253, var_bitSliceTable_8305, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 242)) ;
  const GGS_midrange_5F_instruction_5F_banksel temp_3 = this ;
  GGS_lstring var_RP_8528 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_8620 ;
  GGS_uint var_sliceSize_8639 ;
  var_bitSliceTable_8305.method_searchKey (var_RP_8528, var_rpIndex_8620, var_sliceSize_8639, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 252)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_8639.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 253)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 253)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8639.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 254)) ;
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
          GGS_uint var_shiftedBank_9379 = temp_19.readProperty_mBankIndex ().readProperty_uint () ;
          GGS_uint var_idx_9428 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_8639.isValid ()) {
            uint32_t variant_9440 = var_sliceSize_8639.uintValue () ;
            bool loop_9440 = true ;
            while (loop_9440) {
              loop_9440 = GGS_bool (ComparisonKind::lowerThan, var_idx_9428.objectCompare (var_sliceSize_8639)).isValid () ;
              if (loop_9440) {
                loop_9440 = GGS_bool (ComparisonKind::lowerThan, var_idx_9428.objectCompare (var_sliceSize_8639)).boolValue () ;
              }
              if (loop_9440 && (0 == variant_9440)) {
                loop_9440 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 266)) ;
              }
              if (loop_9440) {
                variant_9440 -= 1 ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_9518 ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::equal, var_shiftedBank_9379.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 268)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    var_op_9518 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 269)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_20) {
                  var_op_9518 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 271)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel temp_21 = this ;
                ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_21.readProperty_mInstructionLocation (), var_op_9518, var_STATUS_5F_IPICregisterDescription_8253, var_rpIndex_8620.add_operation (var_idx_9428, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 277)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 273)) ;
                var_idx_9428.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 278)) ;
                var_shiftedBank_9379 = var_shiftedBank_9379.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 279)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 279)) ;
              }
            }
          }
          const GGS_midrange_5F_instruction_5F_banksel temp_22 = this ;
          ioArgument_ioCurrentBank = temp_22.readProperty_mBankIndex ().readProperty_uint () ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_bool var_optimize_9979 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) ;
        const GGS_midrange_5F_instruction_5F_banksel temp_23 = this ;
        GGS_uint var_shiftedBank_10055 = temp_23.readProperty_mBankIndex ().readProperty_uint () ;
        const GGS_midrange_5F_instruction_5F_banksel temp_24 = this ;
        GGS_uint var_shiftedXorBank_10104 = temp_24.readProperty_mBankIndex ().readProperty_uint ().operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 285)) ;
        GGS_uint var_idx_10172 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_8639.isValid ()) {
          uint32_t variant_10184 = var_sliceSize_8639.uintValue () ;
          bool loop_10184 = true ;
          while (loop_10184) {
            loop_10184 = GGS_bool (ComparisonKind::lowerThan, var_idx_10172.objectCompare (var_sliceSize_8639)).isValid () ;
            if (loop_10184) {
              loop_10184 = GGS_bool (ComparisonKind::lowerThan, var_idx_10172.objectCompare (var_sliceSize_8639)).boolValue () ;
            }
            if (loop_10184 && (0 == variant_10184)) {
              loop_10184 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 287)) ;
            }
            if (loop_10184) {
              variant_10184 -= 1 ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_10262 ;
              GalgasBool test_25 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_25) {
                test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_10055.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 289)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_25) {
                  var_op_10262 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 290)) ;
                }
              }
              if (GalgasBool::boolFalse == test_25) {
                var_op_10262 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 292)) ;
              }
              GalgasBool test_26 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_26) {
                test_26 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_10104.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 294)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_9979.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 294)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 294)).boolEnum () ;
                if (GalgasBool::boolTrue == test_26) {
                  const GGS_midrange_5F_instruction_5F_banksel temp_27 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_27.readProperty_mInstructionLocation (), var_op_10262, var_STATUS_5F_IPICregisterDescription_8253, var_rpIndex_8620.add_operation (var_idx_10172, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 299)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 295)) ;
                }
              }
              if (GalgasBool::boolFalse == test_26) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 301)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10262, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 302)) ;
                ioArgument_ioListFileContents.plusAssignOperation(var_rpIndex_8620.add_operation (var_idx_10172, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 303)) ;
              }
              var_idx_10172.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 305)) ;
              var_shiftedBank_10055 = var_shiftedBank_10055.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 306)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 306)) ;
              var_shiftedXorBank_10104 = var_shiftedXorBank_10104.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 307)) ;
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
//Overriding extension method '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'
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
  GGS_registerExpression var_STATUS_5F_register_11876 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 333)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 334)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 335)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12170 ;
  GGS_bitSliceTable var_bitSliceTable_12225 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_11876.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12170, var_bitSliceTable_12225, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 337)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_3 = this ;
  GGS_lstring var_RP_12271 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_12363 ;
  GGS_uint var_sliceSize_12382 ;
  var_bitSliceTable_12225.method_searchKey (var_RP_12271, var_rpIndex_12363, var_sliceSize_12382, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 347)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_12382.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 348)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 348)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12382.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 349)) ;
    }
  }
  GGS_uintlist var_registerAddressList_12695 ;
  GGS_uint var_size_12730 ;
  GGS_registerProtection var_protection_12752 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_7 = this ;
  GGS_bitSliceTable joker_12739_2 ; // Joker input parameter
  GGS_string joker_12739_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_12695, var_size_12730, joker_12739_2, joker_12739_1, var_protection_12752, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 352)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mRegister ().readProperty_mRegisterName (), GGS_bool (false), var_protection_12752, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 359)) ;
  GGS_uint var_address_12901 ;
  var_registerAddressList_12695.method_first (var_address_12901, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 360)) ;
  GGS_uint var_newBank_12922 = var_address_12901.right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 361)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 361)) ;
  GGS_sint_36__34_ var_offset_13027 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_9 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_9.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_13027, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 363)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::lowerThan, var_offset_13027.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index value (").add_operation (var_offset_13027.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)).add_operation (GGS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 365)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_13027.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 366)).objectCompare (var_size_12730)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("maximum index value is ").add_operation (var_size_12730.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 367)) ;
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, var_newBank_12922.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
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
      test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_newBank_12922.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("the bank ").add_operation (var_newBank_12922.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)).add_operation (GGS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)).add_operation (GGS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)), fixItArray23  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 375)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 376)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GGS_uint var_shiftedBank_13805 = var_newBank_12922 ;
          GGS_uint var_idx_13841 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_12382.isValid ()) {
            uint32_t variant_13853 = var_sliceSize_12382.uintValue () ;
            bool loop_13853 = true ;
            while (loop_13853) {
              loop_13853 = GGS_bool (ComparisonKind::lowerThan, var_idx_13841.objectCompare (var_sliceSize_12382)).isValid () ;
              if (loop_13853) {
                loop_13853 = GGS_bool (ComparisonKind::lowerThan, var_idx_13841.objectCompare (var_sliceSize_12382)).boolValue () ;
              }
              if (loop_13853 && (0 == variant_13853)) {
                loop_13853 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 379)) ;
              }
              if (loop_13853) {
                variant_13853 -= 1 ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_13931 ;
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_13805.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 381)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    var_op_13931 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 382)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_25) {
                  var_op_13931 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 384)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_26 = this ;
                ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_26.readProperty_mInstructionLocation (), var_op_13931, var_STATUS_5F_IPICregisterDescription_12170, var_rpIndex_12363.add_operation (var_idx_13841, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 390)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 386)) ;
                var_idx_13841.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 391)) ;
                var_shiftedBank_13805 = var_shiftedBank_13805.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 392)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 392)) ;
              }
            }
          }
          ioArgument_ioCurrentBank = var_newBank_12922 ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GGS_bool var_optimize_14379 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) ;
        GGS_uint var_shiftedBank_14455 = var_newBank_12922 ;
        GGS_uint var_shiftedXorBank_14491 = var_newBank_12922.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 398)) ;
        GGS_uint var_idx_14546 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_12382.isValid ()) {
          uint32_t variant_14558 = var_sliceSize_12382.uintValue () ;
          bool loop_14558 = true ;
          while (loop_14558) {
            loop_14558 = GGS_bool (ComparisonKind::lowerThan, var_idx_14546.objectCompare (var_sliceSize_12382)).isValid () ;
            if (loop_14558) {
              loop_14558 = GGS_bool (ComparisonKind::lowerThan, var_idx_14546.objectCompare (var_sliceSize_12382)).boolValue () ;
            }
            if (loop_14558 && (0 == variant_14558)) {
              loop_14558 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 400)) ;
            }
            if (loop_14558) {
              variant_14558 -= 1 ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_14636 ;
              GalgasBool test_27 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_27) {
                test_27 = GGS_bool (ComparisonKind::equal, var_shiftedBank_14455.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 402)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_27) {
                  var_op_14636 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 403)) ;
                }
              }
              if (GalgasBool::boolFalse == test_27) {
                var_op_14636 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 405)) ;
              }
              GalgasBool test_28 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_28) {
                test_28 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_14491.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 407)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_14379.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 407)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 407)).boolEnum () ;
                if (GalgasBool::boolTrue == test_28) {
                  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_29 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_29.readProperty_mInstructionLocation (), var_op_14636, var_STATUS_5F_IPICregisterDescription_12170, var_rpIndex_12363.add_operation (var_idx_14546, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 412)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 408)) ;
                }
              }
              if (GalgasBool::boolFalse == test_28) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 414)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14636, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 415)) ;
                ioArgument_ioListFileContents.plusAssignOperation(var_rpIndex_12363.add_operation (var_idx_14546, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 416)) ;
              }
              var_idx_14546.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 418)) ;
              var_shiftedBank_14455 = var_shiftedBank_14455.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 419)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 419)) ;
              var_shiftedXorBank_14491 = var_shiftedXorBank_14491.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 420)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 420)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_12922 ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FD build_midrange_ipic_instructionList'
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16234 ;
  const GGS_midrange_5F_instruction_5F_FD temp_0 = this ;
  GGS_bitSliceTable joker_16262 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16234, joker_16262, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 441)) ;
  const GGS_midrange_5F_instruction_5F_FD temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_IPICregisterDescription_16234, temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 450)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_F build_midrange_ipic_instructionList'
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17162 ;
  const GGS_midrange_5F_instruction_5F_F temp_0 = this ;
  GGS_bitSliceTable joker_17350 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17162, joker_17350, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 474)) ;
  const GGS_midrange_5F_instruction_5F_F temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mFAinstruction (), var_IPICregisterDescription_17162, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 483)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FB build_midrange_ipic_instructionList'
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18303 ;
  GGS_bitSliceTable var_bitSliceTable_18336 ;
  const GGS_midrange_5F_instruction_5F_FB temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18303, var_bitSliceTable_18336, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 506)) ;
  GGS_uint var_bitNumber_18498 ;
  const GGS_midrange_5F_instruction_5F_FB temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18336, var_bitNumber_18498, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 515)) ;
  const GGS_midrange_5F_instruction_5F_FB temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_18303, var_bitNumber_18498, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 522)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JSR build_midrange_ipic_instructionList'
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
  GGS_bool var_isNoReturn_19408 ;
  GGS_uint var_requiredBank_19424 ;
  GGS_uint var_returnedBank_19442 ;
  GGS_bool var_preservesBank_19460 ;
  const GGS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_19408, var_requiredBank_19424, var_returnedBank_19442, var_preservesBank_19460, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 546)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_19424.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 547)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_19424.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 547)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JSR temp_2 = this ;
      GGS_string var_errorMessage_19564 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)).add_operation (var_requiredBank_19424.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 548)) ;
      var_errorMessage_19564.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 549)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 550)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_19564.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 551)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_19564.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 553)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 553)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 553)) ;
      }
      const GGS_midrange_5F_instruction_5F_JSR temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_19564, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 555)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_19408.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_JSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 558)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_19460.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 560)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_19442 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_JSR temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_JSR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 567)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 568)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 564)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'
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
  GGS_bool var_isNoReturn_23014 ;
  GGS_uint var_requiredBank_23030 ;
  GGS_uint var_returnedBank_23048 ;
  GGS_bool var_preservesBank_23066 ;
  const GGS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_23014, var_requiredBank_23030, var_returnedBank_23048, var_preservesBank_23066, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 635)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_23030.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 636)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_23030.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 636)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_CALL temp_2 = this ;
      GGS_string var_errorMessage_23170 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)).add_operation (var_requiredBank_23030.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 637)) ;
      var_errorMessage_23170.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 638)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 639)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_23170.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 640)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_23170.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 642)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 642)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 642)) ;
      }
      const GGS_midrange_5F_instruction_5F_CALL temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23170, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 644)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_23014.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_CALL temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 647)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_23066.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 649)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23048 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_CALL temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_CALL temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_CALL::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 653)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'
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
  GGS_bool var_isNoReturn_24586 ;
  GGS_uint var_requiredBank_24602 ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  GGS_uint joker_24615 ; // Joker input parameter
  GGS_bool joker_24618 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_24586, var_requiredBank_24602, joker_24615, joker_24618, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 674)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_24602.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 675)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_24602.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 675)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JUMP temp_2 = this ;
      GGS_string var_errorMessage_24711 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)).add_operation (var_requiredBank_24602.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 676)) ;
      var_errorMessage_24711.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 677)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 678)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_24711.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 679)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_24711.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 681)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 681)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 681)) ;
      }
      const GGS_midrange_5F_instruction_5F_JUMP temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_24711, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 683)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_24586.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 685)).boolEnum () ;
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
//Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'
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
  GGS_bool var_isNoReturn_26168 ;
  GGS_uint var_requiredBank_26184 ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  GGS_uint joker_26197 ; // Joker input parameter
  GGS_bool joker_26200 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26168, var_requiredBank_26184, joker_26197, joker_26200, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 713)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_26184.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 714)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_26184.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 714)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_GOTO temp_2 = this ;
      GGS_string var_errorMessage_26293 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)).add_operation (var_requiredBank_26184.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 715)) ;
      var_errorMessage_26293.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 716)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 717)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_26293.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 718)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_26293.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 720)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 720)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 720)) ;
      }
      const GGS_midrange_5F_instruction_5F_GOTO temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26293, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 722)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_26168.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 724)).boolEnum () ;
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
//Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'
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
  GGS_sint_36__34_ var_result_30760 ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30760, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 825)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_30760.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_30760.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 827)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_30760.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 828)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_literalOperation temp_4 = this ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_30760.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 834)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 834)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 831)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'
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
//Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'
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
  GGS_uint var_finalBank_33064 = ioArgument_ioCurrentBank ;
  GGS_string var_label_30__33104 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 886)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 886)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 887)) ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__33104, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 888)) ;
  {
  const GGS_midrange_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33064, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 889)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33064)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GGS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 905)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_FOREVER temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_30__33104, temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 908)) ;
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'
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
  GGS_sint_36__34_ var_lowerBound_34697 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34697, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 931)) ;
  GGS_sint_36__34_ var_upperBound_34807 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_34807, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 932)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_34697.objectCompare (var_upperBound_34807)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_34697.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)).add_operation (var_upperBound_34807.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 935)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_34807.substract_operation (var_lowerBound_34697, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 936)).objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_34807.substract_operation (var_lowerBound_34697, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)).add_operation (GGS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 937)) ;
      }
    }
  }
  GGS_uint var_finalBank_35218 = ioArgument_ioCurrentBank ;
  GGS_constantMap var_tempConstantMap_35250 = constinArgument_inConstantMap ;
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_35250.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_34697, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 942)) ;
  }
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35250, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35218, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 943)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35218)).boolEnum () ;
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
  GGS_sint_36__34_ var_idx_35986 = var_lowerBound_34697.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 965)) ;
  if (var_upperBound_34807.substract_operation (var_lowerBound_34697, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).isValid ()) {
    uint32_t variant_36009 = var_upperBound_34807.substract_operation (var_lowerBound_34697, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).uintValue () ;
    bool loop_36009 = true ;
    while (loop_36009) {
      GGS_bool test_16 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_35986.objectCompare (var_upperBound_34807)) ;
      if (GalgasBool::boolTrue == test_16.boolEnum ()) {
        test_16 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_36009 = test_16.isValid () ;
      if (loop_36009) {
        loop_36009 = test_16.boolValue () ;
      }
      if (loop_36009 && (0 == variant_36009)) {
        loop_36009 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 966)) ;
      }
      if (loop_36009) {
        variant_36009 -= 1 ;
        GGS_constantMap var_constantMap_36115 = constinArgument_inConstantMap ;
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = this ;
        var_constantMap_36115.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_35986, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 968)) ;
        }
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = this ;
        routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36115, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 969)) ;
        }
        var_idx_35986.plusAssignOperation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 984)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37322 ;
  GGS_bitSliceTable var_bitSliceTable_37355 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37322, var_bitSliceTable_37355, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1003)) ;
  GGS_uint var_bitNumber_37517 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37355, var_bitNumber_37517, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1012)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37322, var_bitNumber_37517, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1019)) ;
  GGS_bool var_unusedContinuesInSequence_37750 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_37750, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1027)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39630 ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_0 = this ;
  GGS_bitSliceTable joker_39658 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39630, joker_39658, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1079)) ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (constinArgument_inInstructionLocation, var_IPICregisterDescription_39630, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1095)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1089)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'
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
//Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'
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
//Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                   GGS_uint & outArgument_outInstructionCount,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1145)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1144)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'
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
    GGS_string var_label_30__42786 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1192)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1192)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1192)) ;
    const GGS_midrange_5F_andCondition temp_3 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, var_label_30__42786, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1193)) ;
    const GGS_midrange_5F_andCondition temp_4 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1206)) ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__42786, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1219)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                GGS_uint & outArgument_outInstructionCount,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_countLeft_43954 ;
  const GGS_midrange_5F_andCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_43954, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1228)) ;
  GGS_uint var_countRight_44064 ;
  const GGS_midrange_5F_andCondition temp_1 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44064, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1232)) ;
  outArgument_outInstructionCount = var_countLeft_43954.add_operation (var_countRight_44064, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1236)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_44852 ;
  GGS_bitSliceTable var_bitSliceTable_44885 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_44852, var_bitSliceTable_44885, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1253)) ;
  GGS_uint var_bitNumber_45047 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_44885, var_bitNumber_45047, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1262)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_44852, var_bitNumber_45047, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1269)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (constinArgument_inInstructionLocation, GGS_lstring::init_21__21_ (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1278)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1275)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_computeInstructionCountForCondition (const GGS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                  GGS_uint & outArgument_outInstructionCount,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'
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
  GGS_bool var_generateComplementaryCondition_46398 = GGS_bool (false) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_directCount_46548 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GGS_bool (true), var_directCount_46548, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1309)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_3 = this ;
        test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1310)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_directCount_46548.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1311)) ;
        }
      }
      GGS_uint var_complementaryCount_46730 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_4 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GGS_bool (false), var_complementaryCount_46730, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1313)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1314)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_complementaryCount_46730.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1315)) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::lowerThan, var_complementaryCount_46730.objectCompare (var_directCount_46548)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_generateComplementaryCondition_46398 = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).add_operation (GGS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).add_operation (var_directCount_46548.substract_operation (var_complementaryCount_46730, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1320)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1320)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)).add_operation (GGS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1320)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1319)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_directCount_46548.substract_operation (var_complementaryCount_46730, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1321)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1322)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1324)) ;
        }
      }
    }
  }
  GGS_uint var_elseBranchFinalBank_47358 = ioArgument_ioCurrentBank ;
  GGS_uint var_thenBranchFinalBank_47406 = ioArgument_ioCurrentBank ;
  GGS_bool var_elseContinuesInSequence_47454 ;
  GGS_bool var_thenContinuesInSequence_47490 ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_46398.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GGS_string var_label_5F_nextCondition_47579 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1333)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1333)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1333)) ;
      GGS_string var_label_5F_endOfIfinstruction_47674 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1334)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1334)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1334)) ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_10 = this ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_11 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_47579, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1336)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_12 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47358, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47454, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1350)) ;
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::greaterThan, temp_14.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1366)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_15 = this ;
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_16 = this ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_15.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_47674, temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1367)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_47579, temp_17.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1369)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_18 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47406, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47490, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1370)) ;
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_20 = this ;
        test_19 = GGS_bool (ComparisonKind::greaterThan, temp_20.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1385)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_21 = this ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_47674, temp_21.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1386)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_string var_label_5F_nextCondition_49538 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1390)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1390)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1390)) ;
    GGS_string var_label_5F_endOfIfinstruction_49633 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1391)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1391)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1391)) ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_22 = this ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_23 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_49538, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1393)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_24 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47406, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47490, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1407)) ;
    }
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_26 = this ;
      test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1423)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_27 = this ;
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_28 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_27.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_49633, temp_28.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1424)) ;
      }
    }
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_29 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_49538, temp_29.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1426)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_30 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47358, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47454, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1427)) ;
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_32 = this ;
      test_31 = GGS_bool (ComparisonKind::greaterThan, temp_32.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1442)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_33 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_49633, temp_33.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1443)) ;
      }
    }
  }
  GalgasBool test_34 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_34) {
    test_34 = GGS_bool (ComparisonKind::equal, var_elseBranchFinalBank_47358.objectCompare (var_thenBranchFinalBank_47406)).boolEnum () ;
    if (GalgasBool::boolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_47358 ;
    }
  }
  if (GalgasBool::boolFalse == test_34) {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_35 = this ;
    GenericArray <FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GGS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1449)) ;
    var_elseBranchFinalBank_47358 = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1450)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47490.operator_or (var_elseContinuesInSequence_47454 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1453)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'
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
  GGS_string var_labelInstructionBegin_52470 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1472)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1472)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1472)) ;
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_labelInstructionBegin_52470, temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1474)) ;
  GGS_uint var_finalBank_52751 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_52751, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1477)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_52751)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1493)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_5 = this ;
  UpEnumerator_midrange_5F_partList enumerator_53325 (temp_5.readProperty_mWhilePartList ()) ;
  while (enumerator_53325.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_53325.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1497)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_midrange_5F_instruction_5F_do_5F_while temp_7 = this ;
        callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53325.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_52470, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1498)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_string var_nextBranchLabel_53796 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1512)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1512)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1512)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_8 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53325.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_53796, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1513)) ;
      GGS_uint var_bank_54237 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_53325.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54237, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1527)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54237)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_53325.current_mEndOfPartLocation (HERE), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1543)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_11 = this ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_12 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_11.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_labelInstructionBegin_52470, temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1545)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_nextBranchLabel_53796, temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1546)) ;
    }
    enumerator_53325.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'
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
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_55739 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_baseCode_55739 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1569)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_baseCode_55739 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1571)) ;
  }
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_56049 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  GGS_bitSliceTable joker_56077 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_56049, joker_56077, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1574)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_baseCode_55739, var_IPICregisterDescription_56049, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1584)) ;
  GGS_bool var_unusedContinuesInSequence_56309 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56309, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1592)) ;
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
  GGS_string var_generationOptimizationMessages_57220 = GGS_string::makeEmptyString () ;
  GGS_routineMap var_routineMap_57315 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_57421 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_57421.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_57421.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1626)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_57421.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1626)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_57421.current_mRequiredBank (HERE).readProperty_location (), GGS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1627)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_57421.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1629)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_57421.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1629)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_57421.current_mReturnedBank (HERE).readProperty_location (), GGS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1630)) ;
      }
    }
    {
    var_routineMap_57315.setter_insertKey (enumerator_57421.current_mRoutineName (HERE), enumerator_57421.current_mIsNoReturn (HERE), enumerator_57421.current_mRequiredBank (HERE).readProperty_uint (), enumerator_57421.current_mReturnedBank (HERE).readProperty_uint (), enumerator_57421.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1632)) ;
    }
    enumerator_57421.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1636)) ;
      }
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_routineMap_57315.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1642)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_bool var_isNoReturn_58310 ;
      GGS_uint var_requiredBank_58332 ;
      GGS_uint joker_58345 ; // Joker input parameter
      GGS_bool joker_58348 ; // Joker input parameter
      var_routineMap_57315.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1643)), inCompiler COMMA_HERE), var_isNoReturn_58310, var_requiredBank_58332, joker_58345, joker_58348, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1643)) ;
      GGS_location var_mainDeclarationLocation_58370 = var_routineMap_57315.getter_locationForKey (GGS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1644)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_isNoReturn_58310.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1645)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_58370, GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1646)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_58332.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_58370, GGS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1649)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GGS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1652)) ;
  }
  GGS_uint var_localLabelIndex_58960 = GGS_uint (uint32_t (0U)) ;
  {
  routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57315, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57220, var_localLabelIndex_58960, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1656)) ;
  }
  GGS_uint var_currentPage_59391 = GGS_uint (uint32_t (0U)) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_59409 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_59409 = true ;
    while (loop_59409) {
      loop_59409 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_59391.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_59409) {
        loop_59409 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_59391.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_59409 && (0 == variant_59409)) {
        loop_59409 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1673)) ;
      }
      if (loop_59409) {
        variant_59409 -= 1 ;
        GGS_bool var_orgGenerated_59487 = GGS_bool (ComparisonKind::equal, var_currentPage_59391.objectCompare (GGS_uint (uint32_t (0U)))) ;
        UpEnumerator_midrange_5F_routineDefinitionList enumerator_59644 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
        while (enumerator_59644.hasCurrentObject ()) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_59644.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_59391)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = var_orgGenerated_59487.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1677)).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (var_currentPage_59391.multiply_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1678)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1678)) ;
                  var_orgGenerated_59487 = GGS_bool (true) ;
                }
              }
              GGS_uint var_currentBank_59924 = enumerator_59644.current_mRequiredBank (HERE).readProperty_uint () ;
              GGS_routineKind var_routineKind_59982 ;
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                test_13 = enumerator_59644.current_mIsNoReturn (HERE).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_routineKind_59982 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1684)) ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_routineKind_59982 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1686)) ;
              }
              outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (enumerator_59644.current_mRoutineName (HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1688)) ;
              GGS_bool var_continuesInSequence_60599 ;
              {
              routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_59644.current_mInstructionList (HERE), var_routineMap_57315, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_58960, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57220, constinArgument_inTotalBankCount, var_currentBank_59924, enumerator_59644.current_mPreservesBank (HERE), var_continuesInSequence_60599, var_routineKind_59982, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1689)) ;
              }
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = enumerator_59644.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1704)).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_59644.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1704)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1704)).operator_and (GGS_bool (ComparisonKind::notEqual, var_currentBank_59924.objectCompare (enumerator_59644.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1704)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_59644.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution will not set bank selection to ").add_operation (enumerator_59644.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1705)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1705)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1705)) ;
                }
              }
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = enumerator_59644.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_60599 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1707)).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GenericArray <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_59644.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1708)) ;
                }
              }
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = enumerator_59644.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1711)).boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (enumerator_59644.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1712)) ;
                }
              }
            }
          }
          enumerator_59644.gotoNextObject () ;
        }
        var_currentPage_59391.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1716)) ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1720)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1720)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1720)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("IPIC INSTRUCTION LIST").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1721)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1721)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1721)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1721)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1722)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1722)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1722)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1723)) ;
      GGS_uint var_idx_61714 = GGS_uint (uint32_t (0U)) ;
      GGS_uint var_currentAddress_61736 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_61764 (outArgument_outGeneratedInstructionList) ;
      while (enumerator_61764.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_61764.current_mInstruction (HERE).ptr (), var_currentAddress_61736, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1727)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_idx_61714.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1728)).getter_leftPadding (GGS_uint (uint32_t (5U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1728)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1728)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1728)) ;
        callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_61764.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1729)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1730)) ;
        var_idx_61714.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1731)) ;
        enumerator_61764.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1733)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_61736.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1734)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1734)).add_operation (GGS_string (" instructions.\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1734)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1734)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1745)) ;
  outArgument_outShouldSavePCLATH = GGS_bool (false) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_62589 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_62589.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_62589.current_mPage (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GGS_bool (true) ;
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_62589.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_62589.current_mPage (HERE).readProperty_location (), GGS_string ("invalid value (").add_operation (enumerator_62589.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1753)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1753)).add_operation (GGS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1753)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1753)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1753)).add_operation (GGS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1753)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1753)) ;
      }
    }
    enumerator_62589.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1756)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1757)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GGS_bool (false) ;
      UpEnumerator_midrange_5F_interruptDefinitionList enumerator_63165 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1762)).isValidAndTrue () ;
      if (enumerator_63165.hasCurrentObject () && bool_5) {
        while (enumerator_63165.hasCurrentObject () && bool_5) {
          UpEnumerator_midrange_5F_instructionList enumerator_63256 (enumerator_63165.current_mInstructionList (HERE)) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1763)).isValidAndTrue () ;
          if (enumerator_63256.hasCurrentObject () && bool_6) {
            while (enumerator_63256.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((cPtr_midrange_5F_instruction *) enumerator_63256.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1764)) ;
              enumerator_63256.gotoNextObject () ;
              if (enumerator_63256.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1763)).isValidAndTrue () ;
              }
            }
          }
          enumerator_63165.gotoNextObject () ;
          if (enumerator_63165.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1762)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1768)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1770)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1773)) ;
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
  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1800)), GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1801)), inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1802)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1803)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1799)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1806)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1806)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1806)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("INTERRUPT ROUTINE").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1807)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1807)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1807)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1807)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1808)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1808)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1808)) ;
      GGS_bool var_shouldSavePCLATH_65493 ;
      {
      routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_65493, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1810)) ;
      }
      outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (GGS_uint (uint32_t (4U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1817)) ;
      UpEnumerator_midrange_5F_interruptDefinitionList enumerator_65669 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
      while (enumerator_65669.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inSharedRAMBankName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_65669.current_mFirstSaveRegister (HERE), enumerator_65669.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_65493, enumerator_65669.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_65669.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1820)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_65669.current_mFirstSaveRegister (HERE), enumerator_65669.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_65493, enumerator_65669.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_65669.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1836)) ;
          }
        }
        enumerator_65669.gotoNextObject () ;
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
  GGS_uintlist var_registerAddressList_67592 ;
  GGS_uint var_size_67619 ;
  GGS_registerProtection var_firstProtection_67633 ;
  GGS_bitSliceTable joker_67624_2 ; // Joker input parameter
  GGS_string joker_67624_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_67592, var_size_67619, joker_67624_2, joker_67624_1, var_firstProtection_67633, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1873)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_67633, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1874)) ;
  GGS_uint var_bankAccessibility_67751 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_67780 (var_registerAddressList_67592) ;
  while (enumerator_67780.hasCurrentObject ()) {
    var_bankAccessibility_67751 = var_bankAccessibility_67751.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1877)).left_shift_operation (enumerator_67780.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1877)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1877)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1877)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1877)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1877)) ;
    enumerator_67780.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_bankAccessibility_67751.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1879)).objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1879)).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1879)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1879)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1880)).add_operation (GGS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1880)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1880)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_size_67619.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1883)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1883)).add_operation (var_size_67619.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1883)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1883)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1883)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1883)) ;
    }
  }
  GGS_registerProtection var_secondProtection_68409 ;
  GGS_bitSliceTable joker_68400_2 ; // Joker input parameter
  GGS_string joker_68400_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_67592, var_size_67619, joker_68400_2, joker_68400_1, var_secondProtection_68409, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1886)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_68409, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1887)) ;
  var_bankAccessibility_67751 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_68549 (var_registerAddressList_67592) ;
  while (enumerator_68549.hasCurrentObject ()) {
    var_bankAccessibility_67751 = var_bankAccessibility_67751.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1890)).left_shift_operation (enumerator_68549.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1890)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1890)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1890)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1890)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1890)) ;
    enumerator_68549.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, var_bankAccessibility_67751.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1892)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1893)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1893)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1893)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_67619.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1895)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)).add_operation (var_size_67619.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1896)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_67619.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1897)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1898)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1898)).add_operation (var_size_67619.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1898)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1898)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1898)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1898)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1901)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GGS_registerExpression var_first_5F_register_69246 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1904)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1905)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_69502 ;
      GGS_bitSliceTable joker_69538 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_69246.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_69502, joker_69538, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1907)) ;
      GGS_registerExpression var_second_5F_register_69579 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1918)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1919)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_69870 ;
      GGS_bitSliceTable joker_69907 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_second_5F_register_69579.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_69870, joker_69907, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1921)) ;
      GGS_registerExpression var_STATUS_5F_register_69987 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1932)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1933)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1934)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_70263 ;
      GGS_bitSliceTable joker_70300 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_69987.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1938)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_70263, joker_70300, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1936)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1945)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1945)), var_first_5F_IPICregisterDescription_69502, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1945)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1946)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1946)), var_STATUS_5F_IPICregisterDescription_70263, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1946)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1947)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1947)), var_STATUS_5F_IPICregisterDescription_70263, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1947)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1948)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1948)), var_second_5F_IPICregisterDescription_69870, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1948)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_registerExpression var_reg_71041 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1952)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1953)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_71455 ;
          GGS_bitSliceTable joker_71502 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_71041.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_71455, joker_71502, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1956)) ;
          GGS_registerExpression var_PCLATH_5F_register_71590 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1967)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1968)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1969)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_71896 ;
          GGS_bitSliceTable joker_71935 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_71590.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1973)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_71896, joker_71935, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1971)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1980)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1980)), var_PCLATH_5F_IPICregisterDescription_71896, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1980)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1981)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1981)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_71455, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1981)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1982)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1982)), var_PCLATH_5F_IPICregisterDescription_71896, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1982)) ;
        }
      }
      GGS_uint var_currentBank_72540 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_72922 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_72540, GGS_bool (false), var_continuesInSequence_72922, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1998)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 1986)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = var_continuesInSequence_72922.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2001)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2002)) ;
        }
      }
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GGS_registerExpression var_reg_73193 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2007)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2008)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73491 ;
          GGS_bitSliceTable joker_73538 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_73193.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73491, joker_73538, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2010)) ;
          GGS_registerExpression var_PCLATH_5F_register_73626 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2021)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2022)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2023)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_73931 ;
          GGS_bitSliceTable joker_73970 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_73626.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2027)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_73931, joker_73970, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2025)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2034)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2034)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73491, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2034)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2035)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2035)), var_PCLATH_5F_IPICregisterDescription_73931, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2035)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2038)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2038)), var_second_5F_IPICregisterDescription_69870, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2038)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2039)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2039)), var_STATUS_5F_IPICregisterDescription_70263, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2039)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2040)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2040)), var_first_5F_IPICregisterDescription_69502, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2040)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2041)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2041)), var_first_5F_IPICregisterDescription_69502, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2041)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2043)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2043)) ;
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
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2065)) ;
  GGS_uintlist var_registerAddressList_76069 ;
  GGS_uint var_size_76096 ;
  GGS_registerProtection var_firstProtection_76110 ;
  GGS_bitSliceTable joker_76101_2 ; // Joker input parameter
  GGS_string joker_76101_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_76069, var_size_76096, joker_76101_2, joker_76101_1, var_firstProtection_76110, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2066)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_76110, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2067)) ;
  GGS_bool var_accessibleFromBank_30__76228 = GGS_bool (false) ;
  GGS_uint var_offset_76268 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_76299 (var_registerAddressList_76069) ;
  bool bool_0 = var_accessibleFromBank_30__76228.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2070)).isValidAndTrue () ;
  if (enumerator_76299.hasCurrentObject () && bool_0) {
    while (enumerator_76299.hasCurrentObject () && bool_0) {
      var_offset_76268 = enumerator_76299.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2071)) ;
      var_accessibleFromBank_30__76228 = GGS_bool (ComparisonKind::equal, enumerator_76299.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2072)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_76299.gotoNextObject () ;
      if (enumerator_76299.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__76228.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2070)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__76228.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2074)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2075)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2075)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2075)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_76096.objectCompare (GGS_uint (uint32_t (3U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2077)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)).add_operation (var_size_76096.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)).add_operation (GGS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2078)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2079)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_76096.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2079)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2080)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2080)).add_operation (var_size_76096.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2080)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2080)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2080)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2080)) ;
      }
    }
  }
  GGS_uintlist var_saveStatusRegisterAddressList_77065 = var_registerAddressList_76069 ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2084)) ;
  GGS_registerProtection var_secondProtection_77254 ;
  GGS_bitSliceTable joker_77245_2 ; // Joker input parameter
  GGS_string joker_77245_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_76069, var_size_76096, joker_77245_2, joker_77245_1, var_secondProtection_77254, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2085)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_77254, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2086)) ;
  var_saveStatusRegisterAddressList_77065 = var_saveStatusRegisterAddressList_77065.add_operation (var_registerAddressList_76069, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2087)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_size_76096.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2089)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2089)).add_operation (var_size_76096.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2089)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2089)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2089)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2089)) ;
    }
  }
  GGS_bool var_accessibleFromBank_31__77662 = GGS_bool (false) ;
  UpEnumerator_uintlist enumerator_77697 (var_registerAddressList_76069) ;
  bool bool_9 = var_accessibleFromBank_31__77662.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2093)).isValidAndTrue () ;
  if (enumerator_77697.hasCurrentObject () && bool_9) {
    while (enumerator_77697.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__77662 = GGS_bool (ComparisonKind::equal, enumerator_77697.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2094)).objectCompare (GGS_uint (uint32_t (128U)))) ;
      enumerator_77697.gotoNextObject () ;
      if (enumerator_77697.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__77662.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2093)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__77662.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2096)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2097)).add_operation (GGS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2097)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2097)) ;
    }
  }
  GGS_bool var_offsetOk_78078 = GGS_bool (true) ;
  UpEnumerator_uintlist enumerator_78101 (var_registerAddressList_76069) ;
  bool bool_12 = var_offsetOk_78078.isValidAndTrue () ;
  if (enumerator_78101.hasCurrentObject () && bool_12) {
    while (enumerator_78101.hasCurrentObject () && bool_12) {
      var_offsetOk_78078 = GGS_bool (ComparisonKind::equal, var_offset_76268.objectCompare (enumerator_78101.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2102)))) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_offsetOk_78078.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2103)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2104)).add_operation (GGS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2104)).add_operation (enumerator_78101.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2105)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2105)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2104)).add_operation (GGS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2105)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2105)).add_operation (GGS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2105)).add_operation (var_offset_76268.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2106)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2105)).add_operation (GGS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2106)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2104)) ;
        }
      }
      enumerator_78101.gotoNextObject () ;
      if (enumerator_78101.hasCurrentObject ()) {
        bool_12 = var_offsetOk_78078.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2110)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_registerExpression var_first_5F_register_78584 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2113)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2114)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_78840 ;
      GGS_bitSliceTable joker_78876 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_78584.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_78840, joker_78876, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2116)) ;
      GGS_registerExpression var_first_5F_register_5F_second_5F_byte_78917 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2127)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2128)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79206 ;
      GGS_bitSliceTable joker_79258 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_78917.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79206, joker_79258, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2130)) ;
      GGS_registerExpression var_STATUS_5F_register_79338 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2141)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2142)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2143)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_79632 ;
      GGS_bitSliceTable joker_79669 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_79338.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2147)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_79632, joker_79669, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2145)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2154)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2154)), var_first_5F_IPICregisterDescription_78840, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2154)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2155)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2155)), var_STATUS_5F_IPICregisterDescription_79632, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2155)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2156)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2156)), var_STATUS_5F_IPICregisterDescription_79632, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2156)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2157)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2157)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79206, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2157)) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_80427 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2161)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2162)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_80734 ;
          GGS_bitSliceTable joker_80787 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_80427.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_80734, joker_80787, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2164)) ;
          GGS_registerExpression var_PCLATH_5F_register_80875 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2175)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2176)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2177)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_81188 ;
          GGS_bitSliceTable joker_81227 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_80875.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2181)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_81188, joker_81227, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2179)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2188)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2188)), var_PCLATH_5F_IPICregisterDescription_81188, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2188)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2189)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2189)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_80734, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2189)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2190)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2190)), var_PCLATH_5F_IPICregisterDescription_81188, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2190)) ;
        }
      }
      GGS_uint var_currentBank_81838 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_82203 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_81838, GGS_bool (true), var_continuesInSequence_82203, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2206)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2194)) ;
      }
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_continuesInSequence_82203.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2209)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2210)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_82474 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (2U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2215)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2216)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_82823 ;
          GGS_bitSliceTable joker_82877 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_82474.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_82823, joker_82877, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2218)) ;
          GGS_registerExpression var_PCLATH_5F_register_82965 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2229)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2230)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2231)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_83178 ;
          GGS_bitSliceTable joker_83396 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_82965.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2236)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_83178, joker_83396, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2234)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2243)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2243)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_82823, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2243)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2244)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2244)), var_PCLATH_5F_IPICregisterDescription_83178, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2244)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2247)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2247)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79206, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2247)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2248)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2248)), var_STATUS_5F_IPICregisterDescription_79632, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2248)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2249)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2249)), var_first_5F_IPICregisterDescription_78840, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2249)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2250)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2250)), var_first_5F_IPICregisterDescription_78840, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2250)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2252)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas3", 2252)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                           GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 13)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                       GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 22)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                          GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 40)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GGS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 49)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'
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
//Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'
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
//Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_banksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GGS_stringset & ioArgument_ioUsedRoutines,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4407 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_4407.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_4407.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 149)) ;
    enumerator_4407.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4710 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_4710.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_4710.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 160)) ;
    enumerator_4710.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_lstringlist enumerator_5014 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_5014.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_5014.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 171)) ;
    enumerator_5014.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_do_while addUsedRoutines'
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
  UpEnumerator_pic_31__38_DoWhilePartList enumerator_5656 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_5656.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_5656.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 191)) ;
    }
    enumerator_5656.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_savebank addUsedRoutines'
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
//Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'
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
//Overriding extension method '@pic18Instruction_macro addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_6980 ;
  const GGS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  GGS_lstringlist joker_6972 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), joker_6972, var_instructionList_6980, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 228)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (var_instructionList_6980, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 229)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FBA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FDA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 262)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_fnop addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_block addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9764 (temp_0.readProperty_mBlockList ()) ;
  while (enumerator_9764.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_9764.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 328)) ;
    }
    enumerator_9764.gotoNextObject () ;
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
  UpEnumerator_pic_31__38_InstructionList enumerator_10137 (constinArgument_inInstructionList) ;
  while (enumerator_10137.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_10137.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 340)) ;
    enumerator_10137.gotoNextObject () ;
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
  GGS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 354)) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_10899 (constinArgument_inInterruptDefinitionList) ;
  while (enumerator_10899.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_10899.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 357)) ;
    }
    enumerator_10899.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_11124 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation) ;
  while (enumerator_11124.hasCurrentObject ()) {
    result_outUsedRoutineSet.plusPlusAssignOperation (enumerator_11124.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 365)) ;
    enumerator_11124.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_11303 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_11303.hasCurrentObject ()) {
    result_outUsedRoutineSet.plusPlusAssignOperation (enumerator_11303.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 369)) ;
    enumerator_11303.gotoNextObject () ;
  }
  GGS_stringset var_s_11470 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas3", 373)).isValid ()) {
    uint32_t variant_11489 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas3", 373)).uintValue () ;
    bool loop_11489 = true ;
    while (loop_11489) {
      loop_11489 = GGS_bool (ComparisonKind::notEqual, var_s_11470.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11489) {
        loop_11489 = GGS_bool (ComparisonKind::notEqual, var_s_11470.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11489 && (0 == variant_11489)) {
        loop_11489 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas3", 373)) ;
      }
      if (loop_11489) {
        variant_11489 -= 1 ;
        var_s_11470 = result_outUsedRoutineSet ;
        UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_11633 (constinArgument_inRoutineDefinitionList) ;
        while (enumerator_11633.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11633.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 377)).boolEnum () ;
            if (GalgasBool::boolTrue == test_0) {
              {
              routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_11633.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas3", 378)) ;
              }
            }
          }
          enumerator_11633.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
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
//Overriding extension method '@ipic18_intermediate_JSR buildInstructionInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                       GGS_string & ioArgument_ioGraphVizString,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)).add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)).add_operation (GGS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 25)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildInstructionInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 33)).add_operation (GGS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 33)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 33)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_1318 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_1318.hasCurrentObject ()) {
    callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_1318.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 35)) ;
    enumerator_1318.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction buildInstructionInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GGS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                              GGS_string & /* ioArgument_ioGraphVizString */,
                                                                              const GGS_bool /* constinArgument_inDottedArrow */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GGS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                     GGS_string & ioArgument_ioGraphVizString,
                                                                                     const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 94)).add_operation (GGS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 94)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 94)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                      GGS_string & ioArgument_ioGraphVizString,
                                                                                      const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 103)).add_operation (GGS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 103)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator buildTerminatorInvocationGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                    const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 112)).add_operation (GGS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 112)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 112)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18AbstractConditionTerminator buildTerminatorInvocationGraph'
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
//Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorInvocationGraph'
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
//Overriding extension method '@pic18TestRegisterTerminator buildTerminatorInvocationGraph'
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
//Overriding extension method '@ipic18JumpTerminator buildTerminatorInvocationGraph'
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
//Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorInvocationGraph'
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
//Overriding extension getter '@ipic18ReturnTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ReturnTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetlwTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                               Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetfieTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_JumpTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  result_outResult = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                         Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                     Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_AbstractConditionTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 256)).operator_and (callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 258)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 256)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 267)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 276)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator buildTerminatorOrderedGraph'
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
//Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorOrderedGraph'
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
//Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                       GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 312)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator buildTerminatorOrderedGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                 GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 323)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator buildTerminatorOrderedGraph'
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
//Overriding extension method '@pic18BitTestTerminator buildTerminatorOrderedGraph'
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
  GGS_uint var_n_13077 = function_blockDiscontinuityCount (ioArgument_ioBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 373)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  jump count before optimization: ").add_operation (var_n_13077.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 374)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas3", 376)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Block ordering optimization... "), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 377)) ;
      }
    }
  }
  GGS_symbolTableForBlockOptimization var_symbolTable_13345 = GGS_symbolTableForBlockOptimization::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_13401 (ioArgument_ioBlockList) ;
  GGS_uint index_13396 (uint32_t (0)) ;
  while (enumerator_13401.hasCurrentObject ()) {
    {
    var_symbolTable_13345.setter_insertKey (enumerator_13401.current_mBlock (HERE).readProperty_mLabel (), index_13396, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 382)) ;
    }
    enumerator_13401.gotoNextObject () ;
    index_13396.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 381)) ;
  }
  GGS_blockInvocationGraph var_g_13515 = GGS_blockInvocationGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_13551 (ioArgument_ioBlockList) ;
  while (enumerator_13551.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_13551.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 387)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        var_g_13515.setter_addNode (enumerator_13551.current_mBlock (HERE).readProperty_mLabel (), enumerator_13551.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 388)) ;
        }
        callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_13551.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_13551.current_mBlock (HERE).readProperty_mLabel (), var_g_13515, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 389)) ;
      }
    }
    enumerator_13551.gotoNextObject () ;
  }
  GGS_lstringlist var_nodeList_13847 ;
  GGS_stringlist joker_13826 ; // Joker input parameter
  var_g_13515.method_nodesWithNoPredecessor (joker_13826, var_nodeList_13847 COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 393)) ;
  GGS_stringlist var_newOrderedLabelList_13863 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_visitedNodeSet_13905 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_clusterList var_clusterList_13941 = GGS_clusterList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_13977 (var_nodeList_13847) ;
  while (enumerator_13977.hasCurrentObject ()) {
    GGS_blockInvocationGraph var_gg_14031 = var_g_13515.getter_subgraphFromNodes (GGS_lstringlist::class_func_listWithValue (enumerator_13977.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 399)), var_visitedNodeSet_13905, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 398)) ;
    UpEnumerator_stringlist enumerator_14140 (var_gg_14031.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas3", 402))) ;
    while (enumerator_14140.hasCurrentObject ()) {
      var_visitedNodeSet_13905.plusPlusAssignOperation (enumerator_14140.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 403)) ;
      enumerator_14140.gotoNextObject () ;
    }
    {
    var_gg_14031.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas3", 405)) ;
    }
    GGS_stringlist var_partialOrderedLabelList_14313 ;
    GGS_lstringlist joker_14343_3 ; // Joker input parameter
    GGS_stringlist joker_14343_2 ; // Joker input parameter
    GGS_lstringlist joker_14343_1 ; // Joker input parameter
    var_gg_14031.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas3", 406)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_14313, joker_14343_3, joker_14343_2, joker_14343_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 406)) ;
    var_newOrderedLabelList_13863.plusAssignOperation(var_partialOrderedLabelList_14313, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 410)) ;
    GGS_ipic_31__38_BlockList var_cluster_14412 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_stringlist enumerator_14450 (var_partialOrderedLabelList_14313) ;
    while (enumerator_14450.hasCurrentObject ()) {
      GGS_uint var_blockIndex_14545 ;
      var_symbolTable_13345.method_searchKey (enumerator_14450.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 413)), var_blockIndex_14545, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 413)) ;
      GGS_ipic_31__38_Block var_b_14580 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_14545, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 414)) ;
      var_cluster_14412.addAssignOperation (var_b_14580  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 415)) ;
      enumerator_14450.gotoNextObject () ;
    }
    var_clusterList_13941.addAssignOperation (var_cluster_14412  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 417)) ;
    enumerator_13977.gotoNextObject () ;
  }
  UpEnumerator_ipic_31__38_BlockList enumerator_14772 (ioArgument_ioBlockList) ;
  while (enumerator_14772.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_14772.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 421)))).operator_and (var_visitedNodeSet_13905.getter_hasKey (enumerator_14772.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 422)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas3", 422)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 421)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_blockInvocationGraph var_gg_14958 = var_g_13515.getter_subgraphFromNodes (GGS_lstringlist::class_func_listWithValue (enumerator_14772.current_mBlock (HERE).readProperty_mLabel ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 424)), var_visitedNodeSet_13905, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 423)) ;
        UpEnumerator_stringlist enumerator_15082 (var_gg_14958.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas3", 427))) ;
        while (enumerator_15082.hasCurrentObject ()) {
          var_visitedNodeSet_13905.plusPlusAssignOperation (enumerator_15082.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 428)) ;
          enumerator_15082.gotoNextObject () ;
        }
        {
        var_gg_14958.setter_removeEdgesToNode (enumerator_14772.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 430)) ;
        }
        {
        var_gg_14958.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas3", 431)) ;
        }
        GGS_stringlist var_partialOrderedLabelList_15318 ;
        GGS_lstringlist joker_15350_3 ; // Joker input parameter
        GGS_stringlist joker_15350_2 ; // Joker input parameter
        GGS_lstringlist joker_15350_1 ; // Joker input parameter
        var_gg_14958.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas3", 432)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_15318, joker_15350_3, joker_15350_2, joker_15350_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 432)) ;
        var_newOrderedLabelList_13863.plusAssignOperation(var_partialOrderedLabelList_15318, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 436)) ;
        GGS_ipic_31__38_BlockList var_cluster_15425 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        UpEnumerator_stringlist enumerator_15465 (var_partialOrderedLabelList_15318) ;
        while (enumerator_15465.hasCurrentObject ()) {
          GGS_uint var_blockIndex_15562 ;
          var_symbolTable_13345.method_searchKey (enumerator_15465.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 439)), var_blockIndex_15562, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 439)) ;
          GGS_ipic_31__38_Block var_b_15599 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15562, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 440)) ;
          var_cluster_15425.addAssignOperation (var_b_15599  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 441)) ;
          enumerator_15465.gotoNextObject () ;
        }
        var_clusterList_13941.addAssignOperation (var_cluster_15425  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 443)) ;
      }
    }
    enumerator_14772.gotoNextObject () ;
  }
  GGS_ipic_31__38_BlockList var_orderedBlockList_15775 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continue_15867 = GGS_bool (true) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_15890 (ioArgument_ioBlockList) ;
  bool bool_3 = var_continue_15867.isValidAndTrue () ;
  if (enumerator_15890.hasCurrentObject () && bool_3) {
    while (enumerator_15890.hasCurrentObject () && bool_3) {
      var_continue_15867 = GGS_bool (ComparisonKind::notEqual, enumerator_15890.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 451)))) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_continue_15867.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_orderedBlockList_15775.addAssignOperation (enumerator_15890.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 453)) ;
        }
      }
      enumerator_15890.gotoNextObject () ;
      if (enumerator_15890.hasCurrentObject ()) {
        bool_3 = var_continue_15867.isValidAndTrue () ;
      }
    }
  }
  UpEnumerator_stringlist enumerator_16080 (var_newOrderedLabelList_13863) ;
  while (enumerator_16080.hasCurrentObject ()) {
    GGS_uint var_blockIndex_16169 ;
    var_symbolTable_13345.method_searchKey (enumerator_16080.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 458)), var_blockIndex_16169, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 458)) ;
    GGS_ipic_31__38_Block var_b_16202 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_16169, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 459)) ;
    var_orderedBlockList_15775.addAssignOperation (var_b_16202  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 460)) ;
    enumerator_16080.gotoNextObject () ;
  }
  GGS_uint var_insertionIndex_16339 = var_orderedBlockList_15775.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas3", 463)) ;
  var_continue_15867 = GGS_bool (true) ;
  DownEnumerator_ipic_31__38_BlockList enumerator_16406 (ioArgument_ioBlockList) ;
  bool bool_5 = var_continue_15867.isValidAndTrue () ;
  if (enumerator_16406.hasCurrentObject () && bool_5) {
    while (enumerator_16406.hasCurrentObject () && bool_5) {
      var_continue_15867 = GGS_bool (ComparisonKind::notEqual, enumerator_16406.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 466)))) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_continue_15867.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          var_orderedBlockList_15775.setter_insertAtIndex (enumerator_16406.current_mBlock (HERE), var_insertionIndex_16339, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 468)) ;
          }
        }
      }
      enumerator_16406.gotoNextObject () ;
      if (enumerator_16406.hasCurrentObject ()) {
        bool_5 = var_continue_15867.isValidAndTrue () ;
      }
    }
  }
  GGS_uint var_p_16642 = function_blockDiscontinuityCount (var_orderedBlockList_15775, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 472)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  jump count after optimization: ").add_operation (var_p_16642.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 473)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas3", 474)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      routine_print_3F_ (var_n_13077.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)).add_operation (var_p_16642.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)).add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 475)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (gOption_piccoloOptions_generateGraphvizFiles.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_bool joker_17039 ; // Joker input parameter
      var_g_13515.getter_graphviz (SOURCE_FILE ("ipic18_block_ordering.galgas3", 479)).method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GGS_string (".blockOrderingConstraints.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 479)), joker_17039, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 479)) ;
    }
  }
  GGS_stringset var_newSymbolSet_17084 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_bool var_ok_17124 = GGS_bool (true) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_17141 (var_orderedBlockList_15775) ;
  while (enumerator_17141.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_newSymbolSet_17084.getter_hasKey (enumerator_17141.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 485)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_string var_s_17247 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17141.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 486)).add_operation (GGS_string ("\" is duplicated"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 487)) ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 488)), var_s_17247, fixItArray10  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 488)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_s_17247.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 489)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 489)) ;
        var_ok_17124 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_newSymbolSet_17084.plusPlusAssignOperation (enumerator_17141.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 492)) ;
    }
    enumerator_17141.gotoNextObject () ;
  }
  UpEnumerator_symbolTableForBlockOptimization enumerator_17510 (var_symbolTable_13345) ;
  while (enumerator_17510.hasCurrentObject ()) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_newSymbolSet_17084.getter_hasKey (enumerator_17510.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 496)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas3", 496)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_string var_s_17601 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17510.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 497)).add_operation (GGS_string ("\" is missing"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 498)) ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 499)), var_s_17601, fixItArray12  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 499)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_s_17601.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 500)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 500)) ;
        var_ok_17124 = GGS_bool (false) ;
      }
    }
    enumerator_17510.gotoNextObject () ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_ok_17124.boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      ioArgument_ioBlockList = var_orderedBlockList_15775 ;
      {
      routine_displayBlockList_3F__26__3F_ (GGS_string ("ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_orderedBlockList_15775, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 507)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_13) {
    GGS_string var_s_18030 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: reordered block list is inconsistent, it is not used anymore") ;
    GenericArray <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas3", 510)), var_s_18030, fixItArray14  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 510)) ;
    ioArgument_ioListFileContents.plusAssignOperation(var_s_18030.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 511)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 511)) ;
    {
    routine_displayBlockList_3F__26__3F_ (GGS_string ("INCONSISTENT ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION (not used)"), ioArgument_ioListFileContents, var_orderedBlockList_15775, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 512)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = var_ok_17124.boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      routine_perform_5F_cluster_5F_ordering_3F__26__26_ (var_clusterList_13941, ioArgument_ioBlockList, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 516)) ;
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
  UpEnumerator_ipic_31__38_BlockList enumerator_18786 (constinArgument_inBlockList) ;
  while (enumerator_18786.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_18786.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 532)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outGraphVizString.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_18786.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 533)).add_operation (GGS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 533)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 533)) ;
      }
    }
    UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_18981 (enumerator_18786.current_mBlock (HERE).readProperty_mInstructionList ()) ;
    while (enumerator_18981.hasCurrentObject ()) {
      callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_18981.current_mInstruction (HERE).ptr (), enumerator_18786.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 536)) ;
      enumerator_18981.gotoNextObject () ;
    }
    callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_18786.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_18786.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 538)) ;
    enumerator_18786.gotoNextObject () ;
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
  GGS_uint result_outResult ; // Returned variable
  result_outResult = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_19435 (constinArgument_inBlockList) ;
  GGS_uint index_19430 (uint32_t (0)) ;
  while (enumerator_19435.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_19435.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas3", 548)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_nextBlockLabel_19560 ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::lowerThan, index_19430.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 550)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas3", 550)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_nextBlockLabel_19560 = constinArgument_inBlockList.getter_mBlockAtIndex (index_19430.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 551)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 551)).readProperty_mLabel ().readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          var_nextBlockLabel_19560 = GGS_string::makeEmptyString () ;
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_19435.current_mBlock (HERE).readProperty_mTerminator ().ptr (), var_nextBlockLabel_19560, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 555)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result_outResult.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 556)) ;
          }
        }
      }
    }
    enumerator_19435.gotoNextObject () ;
    index_19430.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 547)) ;
  }
//---
  return result_outResult ;
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
      GGS_string var_invocationGraph_20228 ;
      {
      routine_buildInvocationGraph_3F__21_ (ioArgument_ioGeneratedBlockList, var_invocationGraph_20228, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 569)) ;
      }
      GGS_bool joker_20342 ; // Joker input parameter
      var_invocationGraph_20228.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GGS_string (".blockInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 570)), joker_20342, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 570)) ;
    }
  }
  GGS_bool var_optimize_20370 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (66)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 574)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas3", 573)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_optimize_20370.boolEnum () ;
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
  GGS_ipic_31__38_BlockList var_modifiedBlockList_1591 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_1642 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_1671 (ioArgument_ioBlockList) ;
  GGS_uint index_1666 (uint32_t (0)) ;
  while (enumerator_1671.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_1726 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_1666.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 60)).objectCompare (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 60)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_1726 = ioArgument_ioBlockList.getter_mBlockAtIndex (index_1666.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 61)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 61)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_1726 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_1671.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 65)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_1642 = enumerator_1671.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    GGS_ipic_31__38_Block var_modifiedBlock_2204 ;
    extensionMethod_performRelativesResolution (enumerator_1671.current_mBlock (HERE), constinArgument_inSymbolTable, var_nextBlockLabel_1726, var_blockStartAddress_1642, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedBlock_2204, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 68)) ;
    var_modifiedBlockList_1591.addAssignOperation (var_modifiedBlock_2204  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 76)) ;
    GGS_uint var_blockSize_2278 = extensionGetter_blockSize (enumerator_1671.current_mBlock (HERE), var_nextBlockLabel_1726, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 77)) ;
    var_blockStartAddress_1642 = var_blockStartAddress_1642.add_operation (var_blockSize_2278, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 78)) ;
    enumerator_1671.gotoNextObject () ;
    index_1666.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 58)) ;
  }
  ioArgument_ioBlockList = var_modifiedBlockList_1591 ;
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
  GGS_uint var_blockStartAddress_3329 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_3358 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_3353 (uint32_t (0)) ;
  while (enumerator_3358.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_3422 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_3353.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 111)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 111)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_3422 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_3353.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 112)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_3422 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_3358.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 116)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_3329 = enumerator_3358.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    {
    outArgument_outSymbolTable.setter_insertKey (enumerator_3358.current_mBlock (HERE).readProperty_mLabel (), var_blockStartAddress_3329, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 119)) ;
    }
    GGS_uint var_blockSize_3815 = extensionGetter_blockSize (enumerator_3358.current_mBlock (HERE), var_nextBlockLabel_3422, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 120)) ;
    var_blockStartAddress_3329 = var_blockStartAddress_3329.add_operation (var_blockSize_3815, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 121)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_3358.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 122)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outFreeAddress = var_blockStartAddress_3329 ;
      }
    }
    enumerator_3358.gotoNextObject () ;
    index_3353.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 109)) ;
  }
  UpEnumerator_ipic_31__38_BlockList enumerator_4047 (constinArgument_inInitialBlockList) ;
  while (enumerator_4047.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_4047.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 128)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = outArgument_outSymbolTable.getter_hasKey (enumerator_4047.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 129)).operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 129)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            outArgument_outSymbolTable.setter_insertKey (enumerator_4047.current_mBlock (HERE).readProperty_mLabel (), enumerator_4047.current_mBlock (HERE).readProperty_mAddress (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 130)) ;
            }
          }
        }
      }
    }
    enumerator_4047.gotoNextObject () ;
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
  GGS_bool var_resolutionDone_4837 = GGS_bool (false) ;
  GGS_uint var_pass_4872 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).isValid ()) {
    uint32_t variant_4883 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)).uintValue () ;
    bool loop_4883 = true ;
    while (loop_4883) {
      loop_4883 = var_resolutionDone_4837.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).isValid () ;
      if (loop_4883) {
        loop_4883 = var_resolutionDone_4837.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 152)).boolValue () ;
      }
      if (loop_4883 && (0 == variant_4883)) {
        loop_4883 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 151)) ;
      }
      if (loop_4883) {
        variant_4883 -= 1 ;
        var_pass_4872.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 153)) ;
        GGS_symbolTableForRelativesResolution var_symbolTable_5132 ;
        {
        GGS_uint joker_5150 ; // Joker input parameter
        routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (ioArgument_ioGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_5132, joker_5150, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 154)) ;
        }
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\nPass ").add_operation (var_pass_4872.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 160)) ;
        GGS_uint var_conversionCount_5224 = GGS_uint (uint32_t (0U)) ;
        {
        routine_performRelativesResolution_3F__26__26__26_ (var_symbolTable_5132, ioArgument_ioGeneratedBlockList, var_conversionCount_5224, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 162)) ;
        }
        var_resolutionDone_4837 = GGS_bool (ComparisonKind::equal, var_conversionCount_5224.objectCompare (GGS_uint (uint32_t (0U)))) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 169)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_s_5481 = GGS_string ("  Pass ").add_operation (var_pass_4872.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 170)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 170)) ;
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::equal, var_conversionCount_5224.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                var_s_5481.plusAssignOperation(GGS_string ("none."), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 172)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                test_3 = GGS_bool (ComparisonKind::equal, var_conversionCount_5224.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  var_s_5481.plusAssignOperation(GGS_string ("1 conversion"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 174)) ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                var_s_5481.plusAssignOperation(var_conversionCount_5224.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 176)).add_operation (GGS_string (" conversions"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 176)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 176)) ;
              }
            }
            {
            routine_print_3F_ (var_s_5481.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 178)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 178)) ;
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
  GGS_symbolTableForRelativesResolution var_symbolTable_7182 ;
  {
  GGS_uint joker_7198 ; // Joker input parameter
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inBlockList, constinArgument_inInitialBlockList, var_symbolTable_7182, joker_7198, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 226)) ;
  }
  outArgument_outOverflowMap = GGS_branchOverflowMap::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_7264 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_7293 (constinArgument_inBlockList) ;
  GGS_uint index_7288 (uint32_t (0)) ;
  while (enumerator_7293.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_7348 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_7288.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 237)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 237)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_7348 = constinArgument_inBlockList.getter_mBlockAtIndex (index_7288.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 238)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_7348 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_7293.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 242)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_7264 = enumerator_7293.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    extensionMethod_relativeBranchOverflow (enumerator_7293.current_mBlock (HERE), var_symbolTable_7182, var_nextBlockLabel_7348, var_blockStartAddress_7264, outArgument_outOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 245)) ;
    GGS_uint var_blockSize_7786 = extensionGetter_blockSize (enumerator_7293.current_mBlock (HERE), var_nextBlockLabel_7348, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 251)) ;
    var_blockStartAddress_7264 = var_blockStartAddress_7264.add_operation (var_blockSize_7786, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 252)) ;
    enumerator_7293.gotoNextObject () ;
    index_7288.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_NULL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 8)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_PAGE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 14)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 20)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)).add_operation (GGS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 32)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_FD print'
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
//Overriding extension method '@baseline_intermediate_instruction_F print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_FB print'
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
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip print'
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
//Overriding extension method '@baseline_intermediate_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 70)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 70)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JUMP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 76)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 76)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 83)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 83)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JSR print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 90)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 90)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 96)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_MNOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 102)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 102)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'
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
//Overriding extension method '@baseline_intermediate_WO_OPERAND print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 129)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas3", 129)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_TRIS print'
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
  GGS_stringlist var_ipicText_1397 = constinArgument_inIpicText ;
  if (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).isValid ()) {
    uint32_t variant_1421 = constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 41)).uintValue () ;
    bool loop_1421 = true ;
    while (loop_1421) {
      loop_1421 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1397.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)))).isValid () ;
      if (loop_1421) {
        loop_1421 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1397.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 42)))).boolValue () ;
      }
      if (loop_1421 && (0 == variant_1421)) {
        loop_1421 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_code_generation.galgas3", 41)) ;
      }
      if (loop_1421) {
        variant_1421 -= 1 ;
        var_ipicText_1397.addAssignOperation (GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 43)) ;
      }
    }
  }
  GGS_uint var_address_1530 = constinArgument_inAddress ;
  GGS_bool var_first_1556 = GGS_bool (true) ;
  UpEnumerator_stringlist enumerator_1576 (var_ipicText_1397) ;
  UpEnumerator_codeList enumerator_1613 (constinArgument_inCode) ;
  while (enumerator_1576.hasCurrentObject () && enumerator_1613.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_x_36_string (var_address_1530, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 49)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 49)) ;
    var_address_1530 = var_address_1530.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_1613.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 50)) ;
    GGS_string var_s_1745 = GGS_string (" ") ;
    UpEnumerator_uintlist enumerator_1762 (enumerator_1613.current_mBinaryCode (HERE)) ;
    while (enumerator_1762.hasCurrentObject ()) {
      var_s_1745.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_string (enumerator_1762.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 53)) ;
      enumerator_1762.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1745.getter_rightPadding (GGS_uint (uint32_t (13U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 55)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 55)) ;
    var_s_1745 = GGS_string::makeEmptyString () ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = var_first_1556 ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (constinArgument_inMax)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_s_1745.plusAssignOperation(constinArgument_inMin.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 59)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_s_1745.plusAssignOperation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 61)) ;
        }
        var_s_1745.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 63)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMax.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_s_1745.plusAssignOperation(constinArgument_inMax.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 65)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 65)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          var_s_1745.plusAssignOperation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 67)) ;
        }
        var_s_1745.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 69)) ;
      }
    }
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1745.getter_rightPadding (GGS_uint (uint32_t (12U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 71)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_1613.current_mAssemblyCode (HERE).getter_rightPadding (GGS_uint (uint32_t (50U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 72)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 72)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 73)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_1576.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 74)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 75)) ;
    var_first_1556 = GGS_bool (false) ;
    enumerator_1576.gotoNextObject () ;
    enumerator_1613.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_2447 (var_ipicText_1397.getter_subListFromIndex (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 79))) ;
  while (enumerator_2447.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_x_36_string (var_address_1530, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 80)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_rightPadding (GGS_uint (uint32_t (76U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 81)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 81)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_2447.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 82)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 83)) ;
    enumerator_2447.gotoNextObject () ;
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
  GGS_symbolTableForRelativesResolution var_symbolTable_7544 ;
  GGS_uint var_firstDataAddress_7571 ;
  {
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_7544, var_firstDataAddress_7571, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 226)) ;
  }
  GGS_uint var_dataAddress_7663 = var_firstDataAddress_7571 ;
  GGS_pic_31__38__5F_dataAddressMap var_dataAddressMap_7722 = GGS_pic_31__38__5F_dataAddressMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38__5F_dataMap enumerator_7761 (constinArgument_inDataMap) ;
  while (enumerator_7761.hasCurrentObject ()) {
    {
    var_dataAddressMap_7722.setter_insertKey (enumerator_7761.current_lkey (HERE), var_dataAddress_7663, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 236)) ;
    }
    var_dataAddress_7663 = var_dataAddress_7663.add_operation (enumerator_7761.current_mData (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 237)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 237)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 237)) ;
    enumerator_7761.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 240)) ;
  }
  GGS_string var_assemblyString_7968 = GGS_string::makeEmptyString () ;
  GGS_bigint var_relocatableCodeSize_7994 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 242)) ;
  GGS_bigint var_blockStartAddress_8024 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 243)) ;
  outArgument_outGeneratedCodeMap = GGS_generatedCodeMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_8081 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_8076 (uint32_t (0)) ;
  while (enumerator_8081.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_8145 ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::lowerThan, index_8076.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 247)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 247)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_nextBlockLabel_8145 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_8076.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 248)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      var_nextBlockLabel_8145 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_8081.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 252)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_blockStartAddress_8024 = enumerator_8081.current_mBlock (HERE).readProperty_mAddress ().getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 253)) ;
        {
        routine_setEmitAddress_3F_ (var_blockStartAddress_8024.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 254)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 254)) ;
        }
      }
    }
    extensionMethod_generateCodeForBlock (enumerator_8081.current_mBlock (HERE), var_symbolTable_7544, var_dataAddressMap_7722, var_blockStartAddress_8024.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 259)), var_nextBlockLabel_8145, ioArgument_ioListFileContents, var_assemblyString_7968, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 256)) ;
    GGS_uint var_blockSize_8712 = extensionGetter_blockSize (enumerator_8081.current_mBlock (HERE), var_nextBlockLabel_8145, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 265)) ;
    var_blockStartAddress_8024 = var_blockStartAddress_8024.add_operation (var_blockSize_8712.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 266)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 266)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_8081.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 267)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_relocatableCodeSize_7994 = var_relocatableCodeSize_7994.add_operation (var_blockSize_8712.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 268)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 268)) ;
      }
    }
    enumerator_8081.gotoNextObject () ;
    index_8076.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 245)) ;
  }
  var_dataAddress_7663 = var_firstDataAddress_7571 ;
  UpEnumerator_pic_31__38__5F_dataMap enumerator_8997 (constinArgument_inDataMap) ;
  const bool bool_4 = true ;
  if (enumerator_8997.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress_3F_ (var_dataAddress_7663, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 275)) ;
    }
    {
    GGS_codeList temp_5 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 278)) ;
    temp_5.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7663.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 278)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 278)) ;
    GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 279)) ;
    temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7663.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 279)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 279)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7663, temp_5, temp_6, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 280)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 276)) ;
    }
    var_assemblyString_7968.plusAssignOperation(GGS_string ("    ORG ").add_operation (var_dataAddress_7663.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 284)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 284)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 284)) ;
    while (enumerator_8997.hasCurrentObject () && bool_4) {
      {
      GGS_codeList temp_7 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)) ;
      temp_7.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("_data_").add_operation (enumerator_8997.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 288)) ;
      GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)) ;
      temp_8.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("_data_").add_operation (enumerator_8997.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 289)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7663, temp_7, temp_8, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 290)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 286)) ;
      }
      var_assemblyString_7968.plusAssignOperation(GGS_string ("_data_").add_operation (enumerator_8997.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 294)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 294)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 294)) ;
      UpEnumerator_uintlist enumerator_9580 (enumerator_8997.current_mData (HERE)) ;
      while (enumerator_9580.hasCurrentObject ()) {
        var_assemblyString_7968.plusAssignOperation(GGS_string ("    DW ").add_operation (enumerator_9580.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 296)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 296)) ;
        {
        routine_emitCode_3F_ (enumerator_9580.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 297)) ;
        }
        {
        GGS_codeList temp_9 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        temp_10.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (enumerator_9580.current_mValue (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        temp_9.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    DW ").add_operation (enumerator_9580.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)), temp_10, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 300)) ;
        GGS_stringlist temp_11 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 301)) ;
        temp_11.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("    DW ").add_operation (enumerator_9580.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 301)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 301)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 301)) ;
        routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7663, temp_9, temp_11, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 302)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 298)) ;
        }
        var_dataAddress_7663 = var_dataAddress_7663.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 306)) ;
        enumerator_9580.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 308)) ;
      enumerator_8997.gotoNextObject () ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas3", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_print_3F_ (GGS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize_7994.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 311)).add_operation (GGS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 311)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 311)) ;
      }
    }
  }
  outArgument_outUsedROMsize = var_dataAddress_7663 ;
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
  UpEnumerator_actualConfigurationMap enumerator_10758 (constinArgument_inActualConfigurationMap) ;
  while (enumerator_10758.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_10758.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 328)) ;
    }
    {
    routine_emitByte_3F_ (enumerator_10758.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 329)) ;
    }
    enumerator_10758.gotoNextObject () ;
  }
  GGS_string var_contents_10939 ;
  {
  routine_getGeneratedContents_21_ (var_contents_10939, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 332)) ;
  }
  GGS_string var_destinationFile_10955 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 333)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 333)) ;
  GGS_bool joker_11083 ; // Joker input parameter
  var_contents_10939.method_writeToFileWhenDifferentContents (var_destinationFile_10955, joker_11083, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 334)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_string var_baseName_11186 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas3", 337)).getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 337)) ;
      GGS_string var_cContents_11308 ;
      {
      routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_11186, var_cContents_11308, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 338)) ;
      }
      var_destinationFile_10955 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 339)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 339)) ;
      GGS_bool joker_11452 ; // Joker input parameter
      var_cContents_11308.method_writeToFileWhenDifferentContents (var_destinationFile_10955, joker_11452, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 340)) ;
      GGS_string var_hContents_11502 ;
      {
      routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_11186, var_hContents_11502, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 341)) ;
      }
      var_destinationFile_10955 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 342)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 342)) ;
      GGS_bool joker_11646 ; // Joker input parameter
      var_hContents_11502.method_writeToFileWhenDifferentContents (var_destinationFile_10955, joker_11646, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 343)) ;
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas3", 346)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 346)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      {
      routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString_7968, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 347)) ;
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
  GGS_string var_assemblyString_12674 = GGS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 371)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 371)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 373)) ;
  var_assemblyString_12674.plusAssignOperation(constinArgument_inAssemblyCode, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 374)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 376)) ;
  UpEnumerator_registerTable enumerator_12925 (constinArgument_inPredefinedRegisters) ;
  while (enumerator_12925.hasCurrentObject ()) {
    GGS_uint var_firstRegister_13000 ;
    enumerator_12925.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13000, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 378)) ;
    var_assemblyString_12674.plusAssignOperation(enumerator_12925.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)).add_operation (var_firstRegister_13000.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 379)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 379)) ;
    enumerator_12925.gotoNextObject () ;
  }
  var_assemblyString_12674.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 381)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 383)) ;
  UpEnumerator_registerTable enumerator_13261 (constinArgument_inAllRegisters) ;
  while (enumerator_13261.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_13261.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 385)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas3", 385)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_firstRegister_13391 ;
        enumerator_13261.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13391, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 386)) ;
        var_assemblyString_12674.plusAssignOperation(enumerator_13261.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)).add_operation (var_firstRegister_13391.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 387)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 387)) ;
      }
    }
    enumerator_13261.gotoNextObject () ;
  }
  var_assemblyString_12674.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 390)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string (";--- Piccolo defined symbols\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 392)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string ("W EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 393)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string ("FAST EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 394)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string ("BSR_ACCESS EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 395)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 397)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_assemblyString_12674.plusAssignOperation(GGS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 398)) ;
      UpEnumerator_actualConfigurationMap enumerator_13892 (constinArgument_inActualConfigurationMap) ;
      while (enumerator_13892.hasCurrentObject ()) {
        var_assemblyString_12674.plusAssignOperation(GGS_string ("  __config ").add_operation (enumerator_13892.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).add_operation (enumerator_13892.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 400)) ;
        enumerator_13892.gotoNextObject () ;
      }
    }
  }
  var_assemblyString_12674.plusAssignOperation(GGS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 404)) ;
  var_assemblyString_12674.plusAssignOperation(GGS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 405)) ;
  GGS_string var_asmDestinationFile_14235 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas3", 407)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 407)) ;
  GGS_bool joker_14374 ; // Joker input parameter
  var_assemblyString_12674.method_writeToFileWhenDifferentContents (var_asmDestinationFile_14235, joker_14374, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 408)) ;
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
  UpEnumerator_baseline_5F_instructionList enumerator_2483 (constinArgument_inInstructionList) ;
  GGS_uint index_2478 (uint32_t (0)) ;
  while (enumerator_2483.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 72)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2483.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 73)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    GGS_bool temp_2 ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, index_2478.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 86)).objectCompare (constinArgument_inInstructionList.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 86)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) enumerator_2483.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 76)) ;
    enumerator_2483.gotoNextObject () ;
    index_2478.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 71)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'
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
  GGS_stringset result_set ; // Returned variable
  result_set = GGS_stringset::init (inCompiler COMMA_HERE) ;
  result_set.plusPlusAssignOperation (GGS_string ("GPIO")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 131)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTA")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 132)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTB")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 133)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTC")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 134)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTD")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 135)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTE")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 136)) ;
//---
  return result_set ;
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
//Overriding extension method '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'
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
      GGS_string var_s_5845 = GGS_string::makeEmptyString () ;
      UpEnumerator_stringset enumerator_5861 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 159))) ;
      while (enumerator_5861.hasCurrentObject ()) {
        var_s_5845.plusAssignOperation(enumerator_5861.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 160)) ;
        enumerator_5861.gotoNextObject () ;
        if (enumerator_5861.hasCurrentObject ()) {
          var_s_5845.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 161)) ;
        }
      }
      const GGS_baseline_5F_instruction_5F_TRIS temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s_5845, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 163)), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 163)) ;
    }
  }
  GGS_uintlist var_registerAddressList_6107 ;
  GGS_registerProtection var_protection_6136 ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_7 = this ;
  GGS_uint joker_6127_3 ; // Joker input parameter
  GGS_bitSliceTable joker_6127_2 ; // Joker input parameter
  GGS_string joker_6127_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mOperand (), var_registerAddressList_6107, joker_6127_3, joker_6127_2, joker_6127_1, var_protection_6136, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 166)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mOperand (), GGS_bool (true), var_protection_6136, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 167)) ;
  GGS_uint var_opcode_6266 ;
  var_registerAddressList_6107.method_first (var_opcode_6266, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 168)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_9 = this ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_TRIS::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mOperand (), var_opcode_6266, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 170)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'
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
//Overriding extension method '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'
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
  GGS_sint_36__34_ var_immediatValue_8312 ;
  const GGS_baseline_5F_instruction_5F_literalOperation temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue_8312, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 210)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_immediatValue_8312.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_immediatValue_8312.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 212)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_immediatValue_8312.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 213)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 219)), var_immediatValue_8312.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 220)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 217)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_10 = this ;
    const GGS_baseline_5F_instruction_5F_literalOperation temp_11 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mLiteralInstruction (), var_immediatValue_8312.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 225)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 225)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 222)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_FD build_baseline_intermediate_instructionList'
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_9959 ;
  GGS_bitSliceTable var_bitSliceTable_10022 ;
  const GGS_baseline_5F_instruction_5F_FD temp_3 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_9959, var_bitSliceTable_10022, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 247)) ;
  const GGS_baseline_5F_instruction_5F_FD temp_4 = this ;
  const GGS_baseline_5F_instruction_5F_FD temp_5 = this ;
  const GGS_baseline_5F_instruction_5F_FD temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_intermediateRegisterDescription_9959, temp_6.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 254)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_CALL build_baseline_intermediate_instructionList'
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
  GGS_bool var_isNoReturn_11000 ;
  GGS_luint var_targetPage_11023 ;
  const GGS_baseline_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_11000, var_targetPage_11023, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 276)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isNoReturn_11000.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_baseline_5F_instruction_5F_CALL temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 278)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_11023.readProperty_uint ())).boolEnum () ;
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
//Overriding extension method '@baseline_instruction_JSR build_baseline_intermediate_instructionList'
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
  GGS_bool var_isNoReturn_12349 ;
  GGS_luint var_targetPage_12372 ;
  const GGS_baseline_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_12349, var_targetPage_12372, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 310)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isNoReturn_12349.boolEnum () ;
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
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_12372.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 316)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    const GGS_baseline_5F_instruction_5F_JSR temp_7 = this ;
    const GGS_baseline_5F_instruction_5F_JSR temp_8 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), temp_8.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_12372.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 322)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_F build_baseline_intermediate_instructionList'
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_13851 ;
  const GGS_baseline_5F_instruction_5F_F temp_3 = this ;
  GGS_bitSliceTable joker_13887 ; // Joker input parameter
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_13851, joker_13887, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 347)) ;
  const GGS_baseline_5F_instruction_5F_F temp_4 = this ;
  const GGS_baseline_5F_instruction_5F_F temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mFAinstruction (), var_intermediateRegisterDescription_13851, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 354)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_FB build_baseline_intermediate_instructionList'
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_15023 ;
  GGS_bitSliceTable var_bitSliceTable_15079 ;
  const GGS_baseline_5F_instruction_5F_FB temp_3 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_15023, var_bitSliceTable_15079, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 377)) ;
  GGS_uint var_bitNumber_15247 ;
  const GGS_baseline_5F_instruction_5F_FB temp_4 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_4.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_15079, var_bitNumber_15247, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 384)) ;
  const GGS_baseline_5F_instruction_5F_FB temp_5 = this ;
  const GGS_baseline_5F_instruction_5F_FB temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mBitOrientedOp (), var_intermediateRegisterDescription_15023, var_bitNumber_15247, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_GOTO build_baseline_intermediate_instructionList'
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
  GGS_bool var_isNoReturn_16304 ;
  GGS_luint var_targetPage_16327 ;
  const GGS_baseline_5F_instruction_5F_GOTO temp_3 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.readProperty_mTargetLabel (), var_isNoReturn_16304, var_targetPage_16327, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 416)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isNoReturn_16304.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 417)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_GOTO temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 418)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_16327.readProperty_uint ())).boolEnum () ;
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
//Overriding extension method '@baseline_instruction_JUMP build_baseline_intermediate_instructionList'
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
  GGS_bool var_isNoReturn_17629 ;
  GGS_luint var_targetPage_17652 ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_3 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.readProperty_mTargetLabel (), var_isNoReturn_17629, var_targetPage_17652, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 447)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isNoReturn_17629.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 448)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_JUMP temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 449)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_7 = this ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), temp_8.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_17652.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 453)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_BitTest build_baseline_intermediate_instructionList'
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_18748 ;
  GGS_bitSliceTable var_bitSliceTable_18804 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_18748, var_bitSliceTable_18804, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 474)) ;
  GGS_uint var_bitNumber_18966 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18804, var_bitNumber_18966, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 481)) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_intermediateRegisterDescription_18748, var_bitNumber_18966, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 488)) ;
  GGS_bool var_unusedContinuesInSequence_19204 = GGS_bool (true) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_19204, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 495)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_IncDec build_baseline_intermediate_instructionList'
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
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_20235 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_baseCode_20235 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 527)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_baseCode_20235 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 529)) ;
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_20546 ;
  GGS_bitSliceTable var_bitSliceTable_20609 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_20546, var_bitSliceTable_20609, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 532)) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_baseCode_20235, var_intermediateRegisterDescription_20546, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 540)) ;
  GGS_bool var_unusedContinuesInSequence_20857 = GGS_bool (true) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_20857, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 547)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_FOREVER build_baseline_intermediate_instructionList'
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
  GGS_string var_label_30__22221 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 584)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 584)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 585)) ;
  const GGS_baseline_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_30__22221, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 586)) ;
  {
  const GGS_baseline_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 587)) ;
  }
  const GGS_baseline_5F_instruction_5F_FOREVER temp_6 = this ;
  const GGS_baseline_5F_instruction_5F_FOREVER temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_30__22221, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 602)) ;
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_STATIC_REPEAT build_baseline_intermediate_instructionList'
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
  GGS_sint_36__34_ var_lowerBound_23730 ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_23730, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 625)) ;
  GGS_sint_36__34_ var_upperBound_23840 ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_23840, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 626)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_23730.objectCompare (var_upperBound_23840)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_23730.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)).add_operation (var_upperBound_23840.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)), fixItArray4  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 629)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_23840.substract_operation (var_lowerBound_23730, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 630)).objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_23840.substract_operation (var_lowerBound_23730, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)).getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)).add_operation (GGS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 631)) ;
      }
    }
  }
  GGS_constantMap var_tempConstantMap_24228 = constinArgument_inConstantMap ;
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_24228.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_23730, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 635)) ;
  }
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_24228, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 636)) ;
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
  GGS_sint_36__34_ var_idx_24837 = var_lowerBound_23730.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 654)) ;
  if (var_upperBound_23840.substract_operation (var_lowerBound_23730, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).isValid ()) {
    uint32_t variant_24860 = var_upperBound_23840.substract_operation (var_lowerBound_23730, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).uintValue () ;
    bool loop_24860 = true ;
    while (loop_24860) {
      GGS_bool test_13 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_24837.objectCompare (var_upperBound_23840)) ;
      if (GalgasBool::boolTrue == test_13.boolEnum ()) {
        test_13 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_24860 = test_13.isValid () ;
      if (loop_24860) {
        loop_24860 = test_13.boolValue () ;
      }
      if (loop_24860 && (0 == variant_24860)) {
        loop_24860 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 655)) ;
      }
      if (loop_24860) {
        variant_24860 -= 1 ;
        GGS_constantMap var_constantMap_24966 = constinArgument_inConstantMap ;
        {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
        var_constantMap_24966.setter_insertKey (temp_14.readProperty_mConstantName (), var_idx_24837, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 657)) ;
        }
        {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_15 = this ;
        routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_15.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_24966, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 658)) ;
        }
        var_idx_24837.plusAssignOperation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 672)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_do_while build_baseline_intermediate_instructionList'
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
  GGS_string var_labelInstructionBegin_26092 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 691)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 691)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 691)) ;
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_labelInstructionBegin_26092, temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 693)) ;
  {
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 695)) ;
  }
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_2 = this ;
  UpEnumerator_baseline_5F_partList enumerator_26743 (temp_2.readProperty_mWhilePartList ()) ;
  while (enumerator_26743.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_26743.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 711)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_baseline_5F_instruction_5F_do_5F_while temp_4 = this ;
        callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_26743.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_4.readProperty_mInstructionLocation (), var_labelInstructionBegin_26092, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 712)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_nextBranchLabel_27151 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 724)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 724)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 724)) ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_5 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_26743.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_5.readProperty_mInstructionLocation (), var_nextBranchLabel_27151, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 725)) ;
      {
      routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, enumerator_26743.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 736)) ;
      }
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_6 = this ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_7 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_labelInstructionBegin_26092, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 750)) ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_8 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_nextBranchLabel_27151, temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 753)) ;
    }
    enumerator_26743.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_structured_if build_baseline_intermediate_instructionList'
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
  GGS_string var_label_5F_nextCondition_28861 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 773)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 773)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 773)) ;
  GGS_string var_label_5F_endOfIfinstruction_28954 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 774)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 774)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 774)) ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_0 = this ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_0.readProperty_mIfCondition ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_1.readProperty_mInstructionLocation (), var_label_5F_nextCondition_28861, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 776)) ;
  GGS_bool var_thenContinuesInSequence_29600 ;
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_2 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_2.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_thenContinuesInSequence_29600, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 788)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 803)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 803)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 803)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_5 = this ;
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_28954, temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 804)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_28861, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 808)) ;
  GGS_bool var_elseContinuesInSequence_30363 ;
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_8 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_8.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_elseContinuesInSequence_30363, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 809)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 823)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 823)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 823)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_11 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_28954, temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 824)) ;
    }
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_29600.operator_or (var_elseContinuesInSequence_30363 COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 827)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_incDecRegisterInCondition build_intermediate_condition_instructions'
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_32338 ;
  GGS_bitSliceTable var_bitSliceTable_32401 ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_32338, var_bitSliceTable_32401, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 859)) ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (constinArgument_inInstructionLocation, var_intermediateRegisterDescription_32338, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 873)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 867)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_negateCondition build_intermediate_condition_instructions'
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
//Overriding extension method '@baseline_andCondition build_intermediate_condition_instructions'
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
    GGS_string var_label_30__34663 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas3", 937)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 937)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 937)) ;
    const GGS_baseline_5F_andCondition temp_3 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, var_label_30__34663, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 938)) ;
    const GGS_baseline_5F_andCondition temp_4 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 949)) ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_30__34663, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 960)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_bitTest_in_structured_if_condition build_intermediate_condition_instructions'
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_36117 ;
  GGS_bitSliceTable var_bitSliceTable_36173 ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_36117, var_bitSliceTable_36173, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 977)) ;
  GGS_uint var_bitNumber_36335 ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_36173, var_bitNumber_36335, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 984)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_intermediateRegisterDescription_36117, var_bitNumber_36335, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas3", 991)) ;
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
  GGS_string var_sourceFileBaseName_764 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas3", 15)).getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 15)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_764.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 17)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 17)).add_operation (var_sourceFileBaseName_764, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 18)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 18)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 17)) ;
    }
  }
  GGS_string var_listFileContents_1104 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_1234 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_1234, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 22)) ;
  }
  switch (var_piccoloDeviceModel_1234.readProperty_mProcessorType ().enumValue ()) {
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
  GGS_bool var_hasInterrupt_1636 = GGS_bool (false) ;
  UpEnumerator_midrange_5F_interruptDefinitionList enumerator_1689 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
  while (enumerator_1689.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_hasInterrupt_1636.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1689.current_mInterruptLocation (HERE), GGS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 32)) ;
      }
    }
    var_hasInterrupt_1636 = GGS_bool (true) ;
    enumerator_1689.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_2065 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1234.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_1104, var_actualConfigurationMap_2065, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 37)) ;
  }
  GGS_constantMap var_constantMap_2165 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_usedRegisters_2200 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_registerTable var_registerTable_2241 = var_piccoloDeviceModel_1234.readProperty_mRegisterTable () ;
  GGS_lstring var_romSizeString_2327 = GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 48)), inCompiler COMMA_HERE) ;
  {
  var_constantMap_2165.setter_insertKey (var_romSizeString_2327, var_piccoloDeviceModel_1234.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 49)) ;
  }
  UpEnumerator_constantDefinitionList enumerator_2507 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList ()) ;
  while (enumerator_2507.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_2629 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_2507.current_mExpression (HERE).ptr (), var_registerTable_2241, var_constantMap_2165, var_result_2629, var_usedRegisters_2200, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 52)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_registerTable_2241.getter_hasKey (enumerator_2507.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 53)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2507.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_2507.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 54)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 54)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 54)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      var_constantMap_2165.setter_insertKey (enumerator_2507.current_mConstantName (HERE), var_result_2629, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 56)) ;
      }
    }
    enumerator_2507.gotoNextObject () ;
  }
  GGS_ramBankTable var_ramBank_2969 = var_piccoloDeviceModel_1234.readProperty_mRamBankTable () ;
  GGS_declaredByteMap var_declaredByteMap_3261 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_2165, var_usedRegisters_2200, var_ramBank_2969, var_piccoloDeviceModel_1234.readProperty_mRegisterTable (), var_listFileContents_1104, var_registerTable_2241, var_declaredByteMap_3261, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 61)) ;
  }
  GGS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3654 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (var_piccoloDeviceModel_1234.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 74)).divide_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 74)), var_piccoloDeviceModel_1234.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2165, var_piccoloDeviceModel_1234.readProperty_mSharedBankName (), var_registerTable_2241, constinArgument_inPiccoloModel, var_hasInterrupt_1636, var_generatedInstructionList_3654, var_listFileContents_1104, var_usedRegisters_2200, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 73)) ;
  }
  GGS_stringset var_usedRoutineSet_3803 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 86)) ;
  GGS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_3949 = GGS_midrange_5F_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_4033 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_4033.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_3949.setter_insertKey (enumerator_4033.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 92)) ;
    }
    enumerator_4033.gotoNextObject () ;
  }
  GGS_stringset var_unusedRoutineDeclarationUnicity_4199 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_4253 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList ()) ;
  while (enumerator_4253.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_declaredRoutineMap_3949.getter_hasKey (enumerator_4253.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 97)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 97)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4253.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4253.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 98)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 98)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 98)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4199.getter_hasKey (enumerator_4253.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 99)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4253.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4253.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 100)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 100)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 100)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = var_usedRoutineSet_3803.getter_hasKey (enumerator_4253.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 101)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4253.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4253.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 102)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 102)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 102)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4199.plusPlusAssignOperation (enumerator_4253.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 104)) ;
    enumerator_4253.gotoNextObject () ;
  }
  UpEnumerator_midrange_5F_declaredRoutineMap enumerator_4804 (var_declaredRoutineMap_3949) ;
  while (enumerator_4804.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_usedRoutineSet_3803.getter_hasKey (enumerator_4804.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 107)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 107)).operator_and (var_unusedRoutineDeclarationUnicity_4199.getter_hasKey (enumerator_4804.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 107)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 107)) COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4804.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4804.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 108)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 108)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 108)) ;
      }
    }
    enumerator_4804.gotoNextObject () ;
  }
  GGS_stringset var_unusedByteDeclarationUnicity_5125 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_5176 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList ()) ;
  while (enumerator_5176.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_registerTable_2241.getter_hasKey (enumerator_5176.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 114)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 114)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5176.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5176.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 115)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 115)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 115)) ;
      }
    }
    if (GalgasBool::boolFalse == test_16) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5125.getter_hasKey (enumerator_5176.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 116)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5176.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5176.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 117)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 117)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 117)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_usedRegisters_2200.getter_hasKey (enumerator_5176.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 118)).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5176.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5176.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 119)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 119)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 119)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5125.plusPlusAssignOperation (enumerator_5176.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 121)) ;
    enumerator_5176.gotoNextObject () ;
  }
  UpEnumerator_declaredByteMap enumerator_5707 (var_declaredByteMap_3261) ;
  while (enumerator_5707.hasCurrentObject ()) {
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = var_usedRegisters_2200.getter_hasKey (enumerator_5707.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 124)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 124)).operator_and (var_unusedByteDeclarationUnicity_5125.getter_hasKey (enumerator_5707.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 124)).operator_not (SOURCE_FILE ("midrange_semantics.galgas3", 124)) COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5707.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5707.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 125)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 125)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 125)) ;
      }
    }
    enumerator_5707.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas3", 129)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 129)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations_26__26_ (var_generatedInstructionList_3654, var_listFileContents_1104, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 130)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas3", 133)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (var_generatedInstructionList_3654, var_listFileContents_1104, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 134)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas3", 138)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GGS_uint var_usedROMsize_6750 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (var_registerTable_2241, GGS_constantMap::init (inCompiler COMMA_HERE), var_piccoloDeviceModel_1234.readProperty_mBankCount ().readProperty_uint (), var_generatedInstructionList_3654, var_piccoloDeviceModel_1234.readProperty_mRomSize ().readProperty_uint (), var_actualConfigurationMap_2065, var_listFileContents_1104, var_usedROMsize_6750, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 140)) ;
      }
      GGS_string var_contents_6784 ;
      {
      routine_getGeneratedContents_21_ (var_contents_6784, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 151)) ;
      }
      GGS_string var_destinationFile_6848 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 152)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 152)) ;
      GGS_bool joker_6978 ; // Joker input parameter
      var_contents_6784.method_writeToFileWhenDifferentContents (var_destinationFile_6848, joker_6978, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 153)) ;
      GalgasBool test_27 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_27) {
        test_27 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_27) {
          GGS_string var_baseName_7057 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas3", 155)).getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 155)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_7057, var_contents_6784, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 156)) ;
          }
          var_destinationFile_6848 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 157)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 157)) ;
          GGS_bool joker_7317 ; // Joker input parameter
          var_contents_6784.method_writeToFileWhenDifferentContents (var_destinationFile_6848, joker_7317, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 158)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_7057, var_contents_6784, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 159)) ;
          }
          var_destinationFile_6848 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 160)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 160)) ;
          GGS_bool joker_7505 ; // Joker input parameter
          var_contents_6784.method_writeToFileWhenDifferentContents (var_destinationFile_6848, joker_7505, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 161)) ;
        }
      }
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas3", 164)).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GGS_string var_verboseMessage_7612 = GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1234.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 165)).add_operation (GGS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 165)) ;
          var_verboseMessage_7612.plusAssignOperation(GGS_string (" used: ").add_operation (var_usedROMsize_6750.getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 166)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 166)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 166)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 166)) ;
          var_verboseMessage_7612.plusAssignOperation(var_usedROMsize_6750.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)).divide_operation (var_piccoloDeviceModel_1234.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)).getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 167)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 167)) ;
          UpEnumerator_ramBankTable enumerator_7932 (var_ramBank_2969) ;
          while (enumerator_7932.hasCurrentObject ()) {
            GGS_uint var_bankSize_7968 = enumerator_7932.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_7932.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 169)) ;
            GGS_uint var_usedSize_8033 = enumerator_7932.current_mFirstFreeAddress (HERE).substract_operation (enumerator_7932.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 170)) ;
            var_verboseMessage_7612.plusAssignOperation(GGS_string ("  Bank '").add_operation (enumerator_7932.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 171)).add_operation (GGS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 171)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 171)) ;
            var_verboseMessage_7612.plusAssignOperation(var_usedSize_8033.getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 172)).add_operation (GGS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 172)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 172)) ;
            var_verboseMessage_7612.plusAssignOperation(var_bankSize_7968.getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 173)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 173)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 173)) ;
            var_verboseMessage_7612.plusAssignOperation(var_usedSize_8033.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)).divide_operation (var_bankSize_7968, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)).getter_string (SOURCE_FILE ("midrange_semantics.galgas3", 174)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 174)) ;
            enumerator_7932.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_7612, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 176)) ;
          }
        }
      }
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        test_29 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_string var_assemblyCode_8497 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (var_piccoloDeviceModel_1234.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1234.readProperty_mRegisterTable (), var_registerTable_2241, var_generatedInstructionList_3654, var_actualConfigurationMap_2065, var_assemblyCode_8497, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 181)) ;
          }
          GGS_string var_asmDestinationFile_8774 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 189)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 189)) ;
          GGS_bool joker_8916 ; // Joker input parameter
          var_assemblyCode_8497.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8774, joker_8916, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 190)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    GGS_string var_hexDestinationFile_8998 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 193)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 193)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = var_hexDestinationFile_8998.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas3", 194)).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_8998, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 195)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_9180 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 197)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 197)) ;
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_asmDestinationFile_9180.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas3", 198)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_9180, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 199)) ;
        }
      }
    }
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    test_32 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      GGS_string var_listFile_9473 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas3", 204)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 204)) ;
      GGS_bool joker_9598 ; // Joker input parameter
      var_listFileContents_1104.method_writeToFileWhenDifferentContents (var_listFile_9473, joker_9598, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas3", 205)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_NULL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 11)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 18)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 25)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FD print'
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
//Overriding extension method '@midrange_intermediate_instruction_F print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 42)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FB print'
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
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip print'
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
//Overriding extension method '@midrange_intermediate_JUMP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 68)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 75)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 82)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JSR print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 96)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRW print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_NOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETURN print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETFIE print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 125)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_SLEEP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 132)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_MNOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas3", 146)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition print'
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
  GGS_string var_sourceFileBaseName_734 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 18)).getter_deletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 18)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_734.objectCompare (constinArgument_inBootloaderName.readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inBootloaderName.readProperty_location (), GGS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 20)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 20)).add_operation (var_sourceFileBaseName_734, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 21)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 21)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 20)) ;
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
  UpEnumerator_bootloaderReservedRAMmap enumerator_2449 (constinArgument_inBootloaderReservedRAMmap) ;
  while (enumerator_2449.hasCurrentObject ()) {
    GGS_uint var_firstAddress_2535 ;
    GGS_uint var_firstFreeAddress_2553 ;
    GGS_uint var_lastAddressPlusOne_2575 ;
    GGS_uintlist var_mirrorOffsetList_2606 ;
    outArgument_outRamBank.method_searchKey (enumerator_2449.current_lkey (HERE), var_firstAddress_2535, var_firstFreeAddress_2553, var_lastAddressPlusOne_2575, var_mirrorOffsetList_2606, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 46)) ;
    var_firstFreeAddress_2553 = var_firstFreeAddress_2553.add_operation (enumerator_2449.current_mReservedSize (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 47)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterThan, var_firstFreeAddress_2553.objectCompare (var_lastAddressPlusOne_2575)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2449.current_mReservedSize (HERE).readProperty_location (), GGS_string ("reserved size is greater than size of '").add_operation (enumerator_2449.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)).add_operation (GGS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)).add_operation (var_lastAddressPlusOne_2575.substract_operation (var_firstAddress_2535, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 50)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 50)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 49)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2553, enumerator_2449.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 52)) ;
      }
      outArgument_outListFileContents.plusAssignOperation(GGS_string ("'").add_operation (enumerator_2449.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (GGS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (enumerator_2449.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (GGS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (var_firstAddress_2535.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)).add_operation (var_firstFreeAddress_2553.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)).add_operation (GGS_string (").\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 54)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 53)) ;
    }
    enumerator_2449.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 58)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 58)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 58)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BOOTLOADER ROUTINES").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 59)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 60)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 60)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("Routine").getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 61)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 61)) ;
  GGS_stringset var_routineNameSet_3564 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_entryPointAddress_3606 = GGS_uint (uint32_t (4U)) ;
  UpEnumerator_routineDeclarationList enumerator_3656 (constinArgument_inBootloaderRoutineDeclarationList) ;
  while (enumerator_3656.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_routineNameSet_3564.getter_hasKey (enumerator_3656.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 65)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3656.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 66)) ;
      }
    }
    var_routineNameSet_3564.plusPlusAssignOperation (enumerator_3656.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 68)) ;
    outArgument_outListFileContents.plusAssignOperation(enumerator_3656.current_mRoutineName (HERE).readProperty_string ().getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)).add_operation (var_entryPointAddress_3606.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 69)) ;
    var_entryPointAddress_3606 = var_entryPointAddress_3606.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 70)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3606.objectCompare (GGS_uint (uint32_t (8U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        var_entryPointAddress_3606 = GGS_uint (uint32_t (12U)) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3606.objectCompare (GGS_uint (uint32_t (24U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          var_entryPointAddress_3606 = GGS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_3656.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 77)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 79)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 79)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 79)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("USER PROGRAM ROUTINES").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 80)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 81)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 81)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("Routine").getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 82)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 82)) ;
  var_entryPointAddress_3606 = constinArgument_inReservedRomSize.readProperty_uint () ;
  UpEnumerator_routineDeclarationList enumerator_4665 (constinArgument_inUserRoutineDeclarationList) ;
  while (enumerator_4665.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_routineNameSet_3564.getter_hasKey (enumerator_4665.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 85)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4665.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 86)) ;
      }
    }
    var_routineNameSet_3564.plusPlusAssignOperation (enumerator_4665.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 88)) ;
    outArgument_outListFileContents.plusAssignOperation(enumerator_4665.current_mRoutineName (HERE).readProperty_string ().getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)).add_operation (var_entryPointAddress_3606.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 89)) ;
    var_entryPointAddress_3606 = var_entryPointAddress_3606.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 90)) ;
    enumerator_4665.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 92)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GGS_stringset joker_5272 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  {
  GGS_declaredByteMap joker_5397 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GGS_constantMap::init (inCompiler COMMA_HERE), joker_5272, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5397, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas3", 95)) ;
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
  GGS_string var_sourceFileBaseName_558 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas3", 12)).getter_deletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas3", 12)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_558.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 14)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 14)).add_operation (var_sourceFileBaseName_558, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 15)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 15)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 14)) ;
    }
  }
  GGS_string var_listFileContents_898 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_996 ;
  GGS_uint var_accessBankSplitOffset_1027 ;
  GGS_ramBankTable var_ramBank_1069 ;
  GGS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1109 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1207 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1297 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1381 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1472 ;
  GGS_luint var_bootloaderReservedROMsize_1540 ;
  GGS_registerTable var_registerTable_1687 ;
  GGS_string var_piccoloDeviceName_1715 ;
  switch (constinArgument_inPiccoloModel.readProperty_mProgramKind ().enumValue ()) {
  case GGS_programKind::Enumeration::invalid:
    break ;
  case GGS_programKind::Enumeration::enum_regularProgram:
    {
      var_piccoloDeviceName_1715 = constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_string () ;
      {
      routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_996, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 33)) ;
      }
      switch (var_piccoloDeviceModel_996.readProperty_mProcessorType ().enumValue ()) {
      case GGS_processorType::Enumeration::invalid:
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1027 = GGS_uint (uint32_t (96U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1027 = GGS_uint (uint32_t (128U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_midrange:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 37)) ;
          var_accessBankSplitOffset_1027.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_processorType::Enumeration::enum_baseline:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 38)) ;
          var_accessBankSplitOffset_1027.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1069 = var_piccoloDeviceModel_996.readProperty_mRamBankTable () ;
      var_bootloaderReservedRAMmap_1109 = GGS_bootloaderReservedRAMmap::init (inCompiler COMMA_HERE) ;
      var_registerTable_1687 = var_piccoloDeviceModel_996.readProperty_mRegisterTable () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1207 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1297 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1381 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1472 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderReservedROMsize_1540 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 47)), inCompiler COMMA_HERE) ;
    }
    break ;
  case GGS_programKind::Enumeration::enum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1381 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1472 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_piccoloDeviceModel_996.drop () ;
      var_piccoloDeviceName_1715.drop () ;
      var_accessBankSplitOffset_1027.drop () ;
      var_ramBank_1069.drop () ;
      var_registerTable_1687.drop () ;
      var_bootloaderReservedRAMmap_1109.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1207.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1297.drop () ;
      var_bootloaderReservedROMsize_1540.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_996, var_piccoloDeviceName_1715, var_accessBankSplitOffset_1027, var_ramBank_1069, var_registerTable_1687, var_bootloaderReservedRAMmap_1109, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1207, var_userRoutineDeclarationListForBootloaderImplementation_1297, var_bootloaderReservedROMsize_1540  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 51)) ;
      UpEnumerator_ramBankTable enumerator_3678 (var_ramBank_1069) ;
      while (enumerator_3678.hasCurrentObject ()) {
        {
        var_ramBank_1069.setter_setMFirstFreeAddressForKey (enumerator_3678.current_mFirstAddress (HERE), enumerator_3678.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 63)) ;
        }
        enumerator_3678.gotoNextObject () ;
      }
    }
    break ;
  case GGS_programKind::Enumeration::enum_userProgram:
    {
      var_piccoloDeviceModel_996.drop () ;
      var_piccoloDeviceName_1715.drop () ;
      var_accessBankSplitOffset_1027.drop () ;
      var_ramBank_1069.drop () ;
      var_registerTable_1687.drop () ;
      var_bootloaderReservedRAMmap_1109.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1381.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1472.drop () ;
      var_bootloaderReservedROMsize_1540.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_996, var_piccoloDeviceName_1715, var_accessBankSplitOffset_1027, var_ramBank_1069, var_registerTable_1687, var_bootloaderReservedRAMmap_1109, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1381, var_userRoutineDeclarationListForUserProgramImplementation_1472, var_bootloaderReservedROMsize_1540  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 66)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1207 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1297 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
    }
    break ;
  }
  GGS_pic_31__38_MacroMap var_macroMap_4535 = GGS_pic_31__38_MacroMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_MacroDefinitionList enumerator_4586 (constinArgument_inPiccoloModel.readProperty_mMacroDefinitionList ()) ;
  while (enumerator_4586.hasCurrentObject ()) {
    {
    var_macroMap_4535.setter_insertKey (enumerator_4586.current_mMacroName (HERE), enumerator_4586.current_mConstantNameList (HERE), enumerator_4586.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 83)) ;
    }
    enumerator_4586.gotoNextObject () ;
  }
  GGS_stringset var_usedRoutineSet_4805 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), var_macroMap_4535, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1207, var_userRoutineDeclarationListForUserProgramImplementation_1472, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 86)) ;
  GGS_declaredRoutineMap var_declaredRoutineMap_5087 = GGS_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_5222 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_5222.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5087.setter_insertKey (enumerator_5222.current_mRoutineName (HERE), enumerator_5222.current_mRequiredBank (HERE), enumerator_5222.current_mReturnedBank (HERE), enumerator_5222.current_mPreservesBank (HERE), enumerator_5222.current_mIsNoReturn (HERE), enumerator_5222.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 95)) ;
    }
    enumerator_5222.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_5506 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_5553 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList ()) ;
  while (enumerator_5553.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5087.getter_hasKey (enumerator_5553.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 107)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5553.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5553.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 108)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 108)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 108)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5506.getter_hasKey (enumerator_5553.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 109)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5553.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5553.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 110)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 110)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 110)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_usedRoutineSet_4805.getter_hasKey (enumerator_5553.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 111)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5553.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5553.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 112)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 112)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 112)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5506.plusPlusAssignOperation (enumerator_5553.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 114)) ;
    enumerator_5553.gotoNextObject () ;
  }
  UpEnumerator_declaredRoutineMap enumerator_6103 (var_declaredRoutineMap_5087) ;
  while (enumerator_6103.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_usedRoutineSet_4805.getter_hasKey (enumerator_6103.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 117)).operator_and (var_unusedDeclarationUnicity_5506.getter_hasKey (enumerator_6103.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 117)) COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 117)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_6103.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6103.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 118)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 118)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 118)) ;
      }
    }
    enumerator_6103.gotoNextObject () ;
  }
  GGS_stringset var_inlinedRoutineSet_6373 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_6413 (constinArgument_inPiccoloModel.readProperty_mInlinedRoutineList ()) ;
  while (enumerator_6413.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5087.getter_hasKey (enumerator_6413.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 124)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6413.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6413.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 125)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 125)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 125)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = var_usedRoutineSet_4805.getter_hasKey (enumerator_6413.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 126)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6413.current_mValue (HERE).readProperty_location (), GGS_string ("useless declaration, the '").add_operation (enumerator_6413.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 127)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 127)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 127)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        var_inlinedRoutineSet_6373.plusPlusAssignOperation (enumerator_6413.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 129)) ;
      }
    }
    enumerator_6413.gotoNextObject () ;
  }
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6836 = constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList () ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_6936 = constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList () ;
  {
  routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (var_inlinedRoutineSet_6373, var_declaredRoutineMap_5087, var_interruptDefinitionList_6836, var_routineDefinitionList_6936, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 134)) ;
  }
  UpEnumerator_checkpicList enumerator_7224 (constinArgument_inPiccoloModel.readProperty_mCheckpicList ()) ;
  while (enumerator_7224.hasCurrentObject ()) {
    GGS_bool var_found_7286 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_7309 (enumerator_7224.current_mValueList (HERE)) ;
    bool bool_16 = var_found_7286.operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 143)).isValidAndTrue () ;
    if (enumerator_7309.hasCurrentObject () && bool_16) {
      while (enumerator_7309.hasCurrentObject () && bool_16) {
        var_found_7286 = GGS_bool (ComparisonKind::equal, enumerator_7309.current_mValue (HERE).readProperty_string ().objectCompare (var_piccoloDeviceName_1715)) ;
        enumerator_7309.gotoNextObject () ;
        if (enumerator_7309.hasCurrentObject ()) {
          bool_16 = var_found_7286.operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 143)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = var_found_7286.operator_not (SOURCE_FILE ("pic18_semantics.galgas3", 146)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7224.current_mErrorLocation (HERE), GGS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1715, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 147)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 147)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 147)) ;
      }
    }
    enumerator_7224.gotoNextObject () ;
  }
  GGS_bool var_hasHighInterrupt_7595 = GGS_bool (false) ;
  GGS_bool var_highInterruptIsFast_7632 = GGS_bool (false) ;
  GGS_bool var_hasLowInterrupt_7672 = GGS_bool (false) ;
  GGS_bool var_lowInterruptIsFast_7708 = GGS_bool (false) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_7771 (var_interruptDefinitionList_6836) ;
  while (enumerator_7771.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas3", 156)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7771.current_mInterruptName (HERE).readProperty_location (), GGS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 157)) ;
      }
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, enumerator_7771.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("high"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        var_highInterruptIsFast_7632 = enumerator_7771.current_mFastReturn (HERE) ;
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7595.boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GenericArray <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7771.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 162)) ;
          }
        }
        var_hasHighInterrupt_7595 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, enumerator_7771.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("low"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          var_lowInterruptIsFast_7708 = enumerator_7771.current_mFastReturn (HERE) ;
          GalgasBool test_25 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7672.boolEnum () ;
            if (GalgasBool::boolTrue == test_25) {
              GenericArray <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7771.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 168)) ;
            }
          }
          var_hasLowInterrupt_7672 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7771.current_mInterruptName (HERE).readProperty_location (), GGS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 172)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7632.operator_and (var_lowInterruptIsFast_7708 COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 174)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7771.current_mInterruptName (HERE).readProperty_location (), GGS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 175)) ;
      }
    }
    enumerator_7771.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_8791 ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas3", 180)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      UpEnumerator_configDefinitionList enumerator_8910 (constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList ()) ;
      while (enumerator_8910.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8910.current_mDefinitionLocation (HERE), GGS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 182)) ;
        enumerator_8910.gotoNextObject () ;
      }
      var_actualConfigurationMap_8791 = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    {
    routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_996.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_898, var_actualConfigurationMap_8791, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 186)) ;
    }
  }
  GGS_uint var_RAMsize_9362 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ramBankTable enumerator_9407 (var_ramBank_1069) ;
  while (enumerator_9407.hasCurrentObject ()) {
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::greaterThan, enumerator_9407.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9362)).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        var_RAMsize_9362 = enumerator_9407.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9407.gotoNextObject () ;
  }
  GGS_constantMap var_constantMap_9589 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_9589.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 203)), inCompiler COMMA_HERE), var_piccoloDeviceModel_996.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 203)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 203)) ;
  }
  {
  var_constantMap_9589.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("RAM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 204)), inCompiler COMMA_HERE), var_RAMsize_9362.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 204)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 204)) ;
  }
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (ComparisonKind::notEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_semantics.galgas3", 206)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      GGS_lstring var_bootloaderSizeString_9972 = GGS_lstring::init_21__21_ (GGS_string ("BOOTLOADER_RESERVED_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 207)), inCompiler COMMA_HERE) ;
      {
      var_constantMap_9589.setter_insertKey (var_bootloaderSizeString_9972, var_bootloaderReservedROMsize_1540.readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 208)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 208)) ;
      }
    }
  }
  GGS_stringset var_usedRegisters_10183 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_constantDefinitionList enumerator_10234 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList ()) ;
  while (enumerator_10234.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_10376 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_10234.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_996.readProperty_mRegisterTable (), var_constantMap_9589, var_result_10376, var_usedRegisters_10183, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 213)) ;
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_996.readProperty_mRegisterTable ().getter_hasKey (enumerator_10234.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 214)).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        GenericArray <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_10234.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_10234.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 215)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 215)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 215)) ;
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      {
      var_constantMap_9589.setter_insertKey (enumerator_10234.current_mConstantName (HERE), var_result_10376, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 217)) ;
      }
    }
    enumerator_10234.gotoNextObject () ;
  }
  GGS_declaredByteMap var_declaredByteMap_10965 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_9589, var_usedRegisters_10183, var_ramBank_1069, var_piccoloDeviceModel_996.readProperty_mRegisterTable (), var_listFileContents_898, var_registerTable_1687, var_declaredByteMap_10965, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 221)) ;
  }
  GalgasBool test_36 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_36) {
    test_36 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas3", 233)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_36) {
      UpEnumerator_ramBankTable enumerator_11226 (var_ramBank_1069) ;
      while (enumerator_11226.hasCurrentObject ()) {
        GalgasBool test_37 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1109.getter_hasKey (enumerator_11226.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 235)).boolEnum () ;
          if (GalgasBool::boolTrue == test_37) {
            GGS_luint var_bootloaderReservedSize_11323 ;
            var_bootloaderReservedRAMmap_1109.method_searchKey (enumerator_11226.current_lkey (HERE), var_bootloaderReservedSize_11323, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 237)) ;
            GalgasBool test_38 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_38) {
              test_38 = GGS_bool (ComparisonKind::greaterThan, enumerator_11226.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11226.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 238)).objectCompare (var_bootloaderReservedSize_11323.readProperty_uint ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_38) {
                GenericArray <FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)), GGS_string ("for '").add_operation (enumerator_11226.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)).add_operation (enumerator_11226.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11226.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 240)).getter_string (SOURCE_FILE ("pic18_semantics.galgas3", 240)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 240)).add_operation (var_bootloaderReservedSize_11323.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_semantics.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 241)).add_operation (GGS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 242)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 239)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_37) {
          GalgasBool test_40 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_40) {
            test_40 = GGS_bool (ComparisonKind::greaterThan, enumerator_11226.current_mFirstFreeAddress (HERE).objectCompare (enumerator_11226.current_mFirstAddress (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_40) {
              GenericArray <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)), GGS_string ("for '").add_operation (enumerator_11226.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)).add_operation (enumerator_11226.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11226.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 247)).getter_string (SOURCE_FILE ("pic18_semantics.galgas3", 247)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 247)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 246)) ;
            }
          }
        }
        enumerator_11226.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inSourceFileName, var_piccoloDeviceModel_996.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas3", 255)), var_macroMap_4535, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1207, var_userRoutineDeclarationListForBootloaderImplementation_1297, var_bootloaderReservedROMsize_1540, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1381, var_userRoutineDeclarationListForUserProgramImplementation_1472, var_accessBankSplitOffset_1027, var_registerTable_1687, var_declaredByteMap_10965, var_routineDefinitionList_6936, constinArgument_inPiccoloModel.readProperty_mProgramKind (), var_constantMap_9589, var_usedRegisters_10183, constinArgument_inPiccoloModel.readProperty_mDataList (), var_interruptDefinitionList_6836, constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), var_ramBank_1069, var_hasHighInterrupt_7595, var_hasLowInterrupt_7672, var_piccoloDeviceModel_996.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_996.readProperty_mRegisterTable (), var_actualConfigurationMap_8791, constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), var_listFileContents_898, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 253)) ;
  }
  GalgasBool test_42 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_42) {
    test_42 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_42) {
      var_listFileContents_898.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 283)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 283)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 283)) ;
      GGS_string var_listFile_13337 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas3", 284)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 284)) ;
      GGS_bool joker_13462 ; // Joker input parameter
      var_listFileContents_898.method_writeToFileWhenDifferentContents (var_listFile_13337, joker_13462, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas3", 285)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL length'
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
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'
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
//Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'
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
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'
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
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'
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
//Overriding extension getter '@baseline_intermediate_actualInstruction length'
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
//Overriding extension getter '@baseline_intermediate_JUMP length'
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
//Overriding extension getter '@baseline_intermediate_JSR length'
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
//Overriding extension getter '@baseline_intermediate_instruction_MNOP length'
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
//Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'
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
//Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
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
//Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6669 ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_1 = this ;
  GGS_bitSliceTable joker_6697 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 176)), var_IPICregisterDescription_6669, joker_6697, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 171)) ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_3 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), var_IPICregisterDescription_6669, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7603 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_0 = this ;
  GGS_bitSliceTable joker_7631 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_7603, joker_7631, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 201)) ;
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7703 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_1 = this ;
  switch (temp_1.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_7703 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 213)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_7703 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 214)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_code_7703 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 215)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_code_7703 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 216)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_code_7703 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 217)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 219)), GGS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 219)) ;
      var_code_7703.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_pic_31__38_Instruction_5F_FA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_code_7703, var_IPICregisterDescription_7603, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_9003 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mSourceRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_sourceIPICregisterDescription_9003, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 239)) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9268 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_1 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_1.readProperty_mDestinationRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_destinationIPICregisterDescription_9268, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 246)) ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_2 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_sourceIPICregisterDescription_9003, var_destinationIPICregisterDescription_9268, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10163 ;
  GGS_bitSliceTable var_bitSliceTable_10211 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_10163, var_bitSliceTable_10211, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 271)) ;
  GGS_uint var_bitNumber_10379 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10211, var_bitNumber_10379, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 281)) ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_10163, var_bitNumber_10379, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'
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
  GGS_sint_36__34_ var_result_11111 ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11111, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 307)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_11111.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_11111.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 309)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_11111.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)).add_operation (GGS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 310)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_5 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_11111.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 316)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 316)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'
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
  GGS_sint_36__34_ var_result_12040 ;
  const GGS_pic_31__38_Instruction_5F_fnop temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12040, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 331)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_12040.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_12040.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 333)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_fnop temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_12040.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 334)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_fnop temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), var_result_12040.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 339)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'
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
  GGS_sint_36__34_ var_result_13073 ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_5 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13073, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 358)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_result_13073.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_13073.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 360)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_LFSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_13073.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 361)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LFSR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_10 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mFSRindex (), var_result_13073.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 366)), inCompiler COMMA_HERE) ;
}

