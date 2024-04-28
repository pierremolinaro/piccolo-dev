#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLabelValue getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLabelValue::method_getBitNumber (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                    const GGS_constantMap /* constinArgument_inConstantMap */,
                                                    GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                    const GGS_bitSliceTable constinArgument_inBitSliceTable,
                                                    GGS_uint & outArgument_outBitNumber,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_sliceIndex_17087 ;
  GGS_uint var_sliceSize_17103 ;
  const GGS_bitNumberLabelValue temp_0 = this ;
  constinArgument_inBitSliceTable.method_searchKey (temp_0.readProperty_mBitNumberLabelValue (), var_sliceIndex_17087, var_sliceSize_17103, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_bitNumberLabelValue temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mBitNumberIndexValue ().readProperty_uint ().objectCompare (var_sliceSize_17103)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_bitNumberLabelValue temp_3 = this ;
      const GGS_bitNumberLabelValue temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mBitNumberIndexValue ().readProperty_location (), GGS_string ("The ").add_operation (temp_4.readProperty_mBitNumberIndexValue ().readProperty_uint ().getter_string (SOURCE_FILE ("intermediate_generic.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 441)).add_operation (GGS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 441)).add_operation (var_sliceSize_17103.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 441)) ;
    }
  }
  const GGS_bitNumberLabelValue temp_6 = this ;
  outArgument_outBitNumber = var_sliceIndex_17087.add_operation (temp_6.readProperty_mBitNumberIndexValue ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 444)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLiteralExpression getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralExpression::method_getBitNumber (const GGS_registerTable constinArgument_inRegisterTable,
                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                           const GGS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                           GGS_uint & outArgument_outBitNumber,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_17787 ;
  const GGS_bitNumberLiteralExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mBitNumberLiteralExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_17787, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerThan, var_result_17787.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_bitNumberLiteralExpression temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpression (), GGS_string ("bit index is ").add_operation (var_result_17787.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)).add_operation (GGS_string (", but should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)), fixItArray3  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)) ;
      outArgument_outBitNumber.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_result_17787.objectCompare (GGS_sint_36__34_ (int64_t (7LL)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_bitNumberLiteralExpression temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mEndOfExpression (), GGS_string ("bit index is ").add_operation (var_result_17787.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)).add_operation (GGS_string (", but should be <= 7"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)), fixItArray6  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)) ;
        outArgument_outBitNumber.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outBitNumber = var_result_17787.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 462)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'print_constant_definition?&'
//
//--------------------------------------------------------------------------------------------------

void routine_print_5F_constant_5F_definition_3F__26_ (const GGS_constantMap constinArgument_inConstantMap,
                                                      GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inConstantMap.getter_count (SOURCE_FILE ("intermediate_generic.galgas", 485)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("CONSTANTS").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Constant").getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GGS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)) ;
      cEnumerator_constantMap enumerator_19373 (constinArgument_inConstantMap, EnumerationOrder::up) ;
      while (enumerator_19373.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssign_operation(enumerator_19373.current_lkey (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)).add_operation (enumerator_19373.current_mValue (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)) ;
        enumerator_19373.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 493)) ;
    }
  }
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
  GGS_configFieldMap var_configFieldMap_951 = GGS_configFieldMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_configRegisterMap enumerator_1053 (constinArgument_inConfigRegisterMap, EnumerationOrder::up) ;
  while (enumerator_1053.hasCurrentObject ()) {
    GGS_uint var_defaultValue_1097 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).left_shift_operation (enumerator_1053.current_mRegisterWidth (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)) ;
    {
    outArgument_outActualConfigurationMap.setter_insertKey (enumerator_1053.current_lkey (HERE), enumerator_1053.current_mRegisterAddress (HERE).readProperty_uint (), var_defaultValue_1097, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 28)) ;
    }
    GGS_lstring var_registerName_1248 = enumerator_1053.current_lkey (HERE) ;
    cEnumerator_configRegisterMaskMap enumerator_1324 (enumerator_1053.current_mConfigRegisterMaskMap (HERE), EnumerationOrder::up) ;
    while (enumerator_1324.hasCurrentObject ()) {
      {
      var_configFieldMap_951.setter_insertKey (enumerator_1324.current_lkey (HERE), var_registerName_1248, enumerator_1324.current_mMaskValue (HERE), enumerator_1324.current_mDescription (HERE), enumerator_1324.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 31)) ;
      }
      enumerator_1324.gotoNextObject () ;
    }
    enumerator_1053.gotoNextObject () ;
  }
  GGS_stringset var_actualSettingNameSet_1547 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_configDefinitionList enumerator_1592 (constinArgument_inConfigDefinitionList, EnumerationOrder::up) ;
  while (enumerator_1592.hasCurrentObject ()) {
    cEnumerator_configSettingList enumerator_1658 (enumerator_1592.current_mSettingList (HERE), EnumerationOrder::up) ;
    while (enumerator_1658.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_actualSettingNameSet_1547.getter_hasKey (enumerator_1658.current_mSettingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas", 38)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_1658.current_mSettingName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_1658.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
        }
      }
      var_actualSettingNameSet_1547.addAssign_operation (enumerator_1658.current_mSettingName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GGS_lstring var_registerName_1954 ;
      GGS_fieldSettingMap var_fieldSettingMap_1976 ;
      GGS_luint joker_1967_2 ; // Joker input parameter
      GGS_lstring joker_1967_1 ; // Joker input parameter
      var_configFieldMap_951.method_searchKey (enumerator_1658.current_mSettingName (HERE), var_registerName_1954, joker_1967_2, joker_1967_1, var_fieldSettingMap_1976, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 42)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_fieldSettingMap_1976.getter_hasKey (enumerator_1658.current_mSettingValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas", 43)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GGS_uint var_settingValue_2109 ;
          GGS_uint var_settingMask_2127 ;
          var_fieldSettingMap_1976.method_searchKey (enumerator_1658.current_mSettingValue (HERE), var_settingValue_2109, var_settingMask_2127, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 44)) ;
          GGS_uint var_registerValue_2158 ;
          GGS_uint joker_2231 ; // Joker input parameter
          outArgument_outActualConfigurationMap.method_searchKey (var_registerName_1954, joker_2231, var_registerValue_2158, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
          var_registerValue_2158 = var_registerValue_2158.operator_and (var_settingMask_2127.operator_tilde (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).operator_or (var_settingValue_2109 COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)) ;
          {
          outArgument_outActualConfigurationMap.setter_setMRegisterValueForKey (var_registerValue_2158, var_registerName_1954.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 48)) ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::greaterThan, var_fieldSettingMap_1976.getter_count (SOURCE_FILE ("piccolo_config.galgas", 49)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GGS_string var_errorMessage_2476 = GGS_string ("the '").add_operation (enumerator_1658.current_mSettingValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (GGS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (enumerator_1658.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 51)) ;
            GGS_stringlist var_replacementSuggestions_2623 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
            cEnumerator_fieldSettingMap enumerator_2671 (var_fieldSettingMap_1976, EnumerationOrder::up) ;
            while (enumerator_2671.hasCurrentObject ()) {
              var_replacementSuggestions_2623.addAssign_operation (GGS_string ("\"").add_operation (enumerator_2671.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)) ;
              enumerator_2671.gotoNextObject () ;
            }
            TC_Array <FixItDescription> fixItArray4 ;
            appendFixItActions (fixItArray4, kFixItReplace, var_replacementSuggestions_2623) ;
            inCompiler->emitSemanticError (enumerator_1658.current_mSettingValue (HERE).readProperty_location (), var_errorMessage_2476, fixItArray4  COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)) ;
          }
        }
      }
      enumerator_1658.gotoNextObject () ;
    }
    enumerator_1592.gotoNextObject () ;
  }
  GGS_stringset var_notDefinedSetting_2937 = var_configFieldMap_951.getter_keySet (SOURCE_FILE ("piccolo_config.galgas", 61)).substract_operation (var_actualSettingNameSet_1547, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 61)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_notDefinedSetting_2937.getter_count (SOURCE_FILE ("piccolo_config.galgas", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GGS_string var_errorMessage_3060 = GGS_string ("the following configuration settings are not defined:") ;
      cEnumerator_stringset enumerator_3140 (var_notDefinedSetting_2937, EnumerationOrder::up) ;
      while (enumerator_3140.hasCurrentObject ()) {
        var_errorMessage_3060.plusAssign_operation(GGS_string ("\n-  ").add_operation (enumerator_3140.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 65)) ;
        enumerator_3140.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)), var_errorMessage_3060, fixItArray6  COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)) ;
    }
  }
  cEnumerator_actualConfigurationMap enumerator_3338 (outArgument_outActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_3338.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Register '").add_operation (enumerator_3338.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (enumerator_3338.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GGS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (enumerator_3338.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)) ;
    GGS_configRegisterMaskMap var_configRegisterMaskMap_3575 ;
    GGS_luint joker_3564 ; // Joker input parameter
    GGS_luint joker_3567 ; // Joker input parameter
    GGS_illegalMaskList joker_3597 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3338.current_lkey (HERE), joker_3564, joker_3567, var_configRegisterMaskMap_3575, joker_3597, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 72)) ;
    cEnumerator_configRegisterMaskMap enumerator_3642 (var_configRegisterMaskMap_3575, EnumerationOrder::up) ;
    while (enumerator_3642.hasCurrentObject ()) {
      GGS_lstring var_settingName_3715 = enumerator_3642.current_lkey (HERE) ;
      cEnumerator_fieldSettingMap enumerator_3778 (enumerator_3642.current_mFieldSettingMap (HERE), EnumerationOrder::up) ;
      while (enumerator_3778.hasCurrentObject ()) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_3338.current_mRegisterValue (HERE).operator_and (enumerator_3642.current_mMaskValue (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).objectCompare (enumerator_3778.current_mValue (HERE))).boolEnum () ;
          if (kBoolTrue == test_7) {
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  setting '").add_operation (var_settingName_3715.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GGS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3778.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GGS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3778.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)) ;
          }
        }
        enumerator_3778.gotoNextObject () ;
      }
      enumerator_3642.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 81)) ;
    enumerator_3338.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_4138 (outArgument_outActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_4138.hasCurrentObject ()) {
    GGS_illegalMaskList var_illegalMaskList_4242 ;
    GGS_luint joker_4228 ; // Joker input parameter
    GGS_luint joker_4231 ; // Joker input parameter
    GGS_configRegisterMaskMap joker_4234 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4138.current_lkey (HERE), joker_4228, joker_4231, joker_4234, var_illegalMaskList_4242, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 85)) ;
    cEnumerator_illegalMaskList enumerator_4296 (var_illegalMaskList_4242, EnumerationOrder::up) ;
    while (enumerator_4296.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, enumerator_4138.current_mRegisterValue (HERE).operator_and (enumerator_4296.current_mIllegalMask (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas", 87)).objectCompare (enumerator_4296.current_mIllegalValue (HERE).readProperty_uint ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)), GGS_string ("illegal setting for '").add_operation (enumerator_4138.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)).add_operation (GGS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)).add_operation (enumerator_4296.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4138.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)).add_operation (GGS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  message: ").add_operation (enumerator_4296.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)) ;
        }
      }
      enumerator_4296.gotoNextObject () ;
    }
    enumerator_4138.gotoNextObject () ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("MICROCONTROLLER CONFIGURATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inConfigDefinitionList.getter_count (SOURCE_FILE ("piccolo_config.galgas", 108)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_actualBuildConfig_3F__3F__26__21_ (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 109)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outActualConfigurationMap = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("No configuration.\n\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_BitTest addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 12)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 19)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_IncDec addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 26)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 40)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 47)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_STATIC_REPEAT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 61)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_MNOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_MNOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_TRIS addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_TRIS::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_WO_OPERAND addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_F addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_F::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FB addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FB::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_do_while addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 98)) ;
  }
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_baseline_5F_partList enumerator_3261 (temp_1.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_3261.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_3261.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 100)) ;
    }
    enumerator_3261.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 108)) ;
  }
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 109)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FD addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FD::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JSR::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 122)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addBaselineUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (const GGS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_instructionList enumerator_4559 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_4559.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) enumerator_4559.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 137)) ;
    enumerator_4559.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'baseline_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GGS_stringset function_baseline_5F_computeUsedRoutines (const GGS_baseline_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 147)) ;
  GGS_stringset var_s_5003 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas", 150)).isValid ()) {
    uint32_t variant_5022 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas", 150)).uintValue () ;
    bool loop_5022 = true ;
    while (loop_5022) {
      loop_5022 = GGS_bool (ComparisonKind::notEqual, var_s_5003.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_5022) {
        loop_5022 = GGS_bool (ComparisonKind::notEqual, var_s_5003.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_5022 && (0 == variant_5022)) {
        loop_5022 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas", 150)) ;
      }
      if (loop_5022) {
        variant_5022 -- ;
        var_s_5003 = result_outUsedRoutineSet ;
        cEnumerator_baseline_5F_routineDefinitionList enumerator_5164 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
        while (enumerator_5164.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_5164.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_5164.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 155)) ;
              }
            }
          }
          enumerator_5164.gotoNextObject () ;
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

static const C_galgas_type_descriptor * functionArgs_baseline_5F_computeUsedRoutines [2] = {
  & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_baseline_5F_computeUsedRoutines (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GGS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_routineDefinitionList operand0 = GGS_baseline_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  return function_baseline_5F_computeUsedRoutines (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_baseline_5F_computeUsedRoutines ("baseline_computeUsedRoutines",
                                                                                 functionWithGenericHeader_baseline_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 1,
                                                                                 functionArgs_baseline_5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_shouldTerminateWithMOVLW (const GGS_string constinArgument_inErrorMessage,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLiteralInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_compilation.galgas", 25)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 26)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_shouldTerminateWithMOVLW (const GGS_string /* constinArgument_inErrorMessage */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_shouldTerminateWithMOVLW (const GGS_string /* constinArgument_inErrorMessage */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("baseline_compilation.galgas", 41)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("the 'then' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 42)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_baseline_5F_instruction var_lastInstruction_1812 ;
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_4 = this ;
    temp_4.readProperty_mThenInstructionList ().method_last (var_lastInstruction_1812, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 44)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_1812.ptr (), GGS_string ("the 'then' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 45)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_compilation.galgas", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("the 'else' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray8  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 49)) ;
    }
  }
  if (kBoolFalse == test_5) {
    GGS_baseline_5F_instruction var_lastInstruction_2259 ;
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_9 = this ;
    temp_9.readProperty_mElseInstructionList ().method_last (var_lastInstruction_2259, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 51)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_2259.ptr (), GGS_string ("the 'else' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 52)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_shouldNotContinueInSequence (const GGS_string /* constinArgument_inErrorMessage */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_shouldNotContinueInSequence (const GGS_string /* constinArgument_inErrorMessage */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_shouldNotContinueInSequence (const GGS_string /* constinArgument_inErrorMessage */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'baseline_analysis??'
//
//--------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis_3F__3F_ (const GGS_baseline_5F_model constinArgument_inPiccoloModel,
                                           const GGS_string constinArgument_inSourceFileName,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceFileBaseName_4042 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 94)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 94)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_4042.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (var_sourceFileBaseName_4042, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)), fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)) ;
    }
  }
  GGS_string var_listFileContents_4392 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_4522 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_4522, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 101)) ;
  }
  switch (var_piccoloDeviceModel_4522.readProperty_mProcessorType ().enumValue ()) {
  case GGS_processorType::Enumeration::invalid:
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a pic18 device is not accepted here : only a baseline device"), fixItArray2  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 104)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_midrange:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a mid-ranfe device is not accepted here : only a baseline device"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 105)) ;
    }
    break ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_5045 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_4522.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_4392, var_actualConfigurationMap_5045, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 108)) ;
  }
  GGS_constantMap var_constantMap_5144 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_registerTable var_registerTable_5182 = var_piccoloDeviceModel_4522.readProperty_mRegisterTable () ;
  GGS_stringset var_usedRegisters_5441 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_constantDefinitionList enumerator_5481 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_5481.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_5603 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_5481.current_mExpression (HERE).ptr (), var_registerTable_5182, var_constantMap_5144, var_result_5603, var_usedRegisters_5441, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 123)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_registerTable_5182.getter_hasKey (enumerator_5481.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5481.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_5481.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 125)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 125)), fixItArray5  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 125)) ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      var_constantMap_5144.setter_insertKey (enumerator_5481.current_mConstantName (HERE), var_result_5603, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 127)) ;
      }
    }
    enumerator_5481.gotoNextObject () ;
  }
  GGS_ramBankTable var_ramBank_5940 = var_piccoloDeviceModel_4522.readProperty_mRamBankTable () ;
  GGS_declaredByteMap var_declaredByteMap_6232 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_5144, var_usedRegisters_5441, var_ramBank_5940, var_piccoloDeviceModel_4522.readProperty_mRegisterTable (), var_listFileContents_4392, var_registerTable_5182, var_declaredByteMap_6232, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 132)) ;
  }
  GGS_baselineRoutineMap var_routineMap_6310 = GGS_baselineRoutineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_6385 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_6385.hasCurrentObject ()) {
    {
    var_routineMap_6310.setter_insertKey (enumerator_6385.current_mRoutineName (HERE), enumerator_6385.current_mIsNoReturn (HERE), enumerator_6385.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 146)) ;
    }
    enumerator_6385.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (var_constantMap_5144, var_listFileContents_4392, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 150)) ;
      }
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_routineMap_6310.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas", 156)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GGS_bool var_isNoReturn_6889 ;
      GGS_luint var_page_6912 ;
      var_routineMap_6310.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)), inCompiler COMMA_HERE), var_isNoReturn_6889, var_page_6912, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_isNoReturn_6889.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 158)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineMap_6310.getter_locationForKey (GGS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)), GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\""), fixItArray9  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_page_6912.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (var_page_6912.readProperty_location (), GGS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\""), fixItArray11  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 162)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_7) {
    TC_Array <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GGS_string ("the program should declare the \"main\" routine"), fixItArray12  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 165)) ;
  }
  GGS_bool var_needsToSavePCLATH_7421 = GGS_bool (false) ;
  GGS_uint var_totalPageCount_7459 = var_piccoloDeviceModel_4522.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (511U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)).divide_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_7542 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_7542.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_7542.current_mPage (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        var_needsToSavePCLATH_7421 = GGS_bool (true) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_7542.current_mPage (HERE).readProperty_uint ().objectCompare (var_totalPageCount_7459)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_7542.current_mPage (HERE).readProperty_location (), GGS_string ("invalid value (").add_operation (enumerator_7542.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GGS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (var_totalPageCount_7459.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GGS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)), fixItArray15  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)) ;
      }
    }
    enumerator_7542.gotoNextObject () ;
  }
  GGS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList_7913 = GGS_baseline_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_8032 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_8032.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GGS_bool (ComparisonKind::equal, enumerator_8032.current_mRoutineName (HERE).readProperty_string ().objectCompare (GGS_string ("main"))).boolEnum () ;
      if (kBoolTrue == test_16) {
        {
        var_sortedRoutineDefinitionList_7913.setter_insertAtIndex (enumerator_8032.current_mRoutineName (HERE), enumerator_8032.current_mPage (HERE), enumerator_8032.current_mIsNoReturn (HERE), enumerator_8032.current_mInstructionList (HERE), enumerator_8032.current_mEndOfRoutineLocation (HERE), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 182)) ;
        }
      }
    }
    if (kBoolFalse == test_16) {
      var_sortedRoutineDefinitionList_7913.addAssign_operation (enumerator_8032.current_mRoutineName (HERE), enumerator_8032.current_mPage (HERE), enumerator_8032.current_mIsNoReturn (HERE), enumerator_8032.current_mInstructionList (HERE), enumerator_8032.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 191)) ;
    }
    enumerator_8032.gotoNextObject () ;
  }
  GGS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList_8573 = GGS_baseline_5F_intermediate_5F_instructionList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 201)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      GGS_uint var_currentPage_8691 = GGS_uint (uint32_t (0U)) ;
      GGS_uint var_localLabelIndex_8721 = GGS_uint (uint32_t (0U)) ;
      if (var_totalPageCount_7459.isValid ()) {
        uint32_t variant_8745 = var_totalPageCount_7459.uintValue () ;
        bool loop_8745 = true ;
        while (loop_8745) {
          loop_8745 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_8691.objectCompare (var_totalPageCount_7459)).isValid () ;
          if (loop_8745) {
            loop_8745 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_8691.objectCompare (var_totalPageCount_7459)).boolValue () ;
          }
          if (loop_8745 && (0 == variant_8745)) {
            loop_8745 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas", 204)) ;
          }
          if (loop_8745) {
            variant_8745 -- ;
            GGS_bool var_pseudo_5F_PAGE_5F_generated_8821 = GGS_bool (false) ;
            cEnumerator_baseline_5F_routineDefinitionList enumerator_8910 (var_sortedRoutineDefinitionList_7913, EnumerationOrder::up) ;
            while (enumerator_8910.hasCurrentObject ()) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = GGS_bool (ComparisonKind::equal, enumerator_8910.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_8691)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_pseudo_5F_PAGE_5F_generated_8821.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 209)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      var_pseudo_5F_PAGE_5F_generated_8821 = GGS_bool (true) ;
                      var_intermediateInstructionList_8573.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::init_21_ (var_currentPage_8691, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 211)) ;
                    }
                  }
                  GGS_routineKind var_routineKind_9242 ;
                  enumGalgasBool test_20 = kBoolTrue ;
                  if (kBoolTrue == test_20) {
                    test_20 = enumerator_8910.current_mIsNoReturn (HERE).boolEnum () ;
                    if (kBoolTrue == test_20) {
                      var_routineKind_9242 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas", 216)) ;
                      enumGalgasBool test_21 = kBoolTrue ;
                      if (kBoolTrue == test_21) {
                        test_21 = GGS_bool (ComparisonKind::equal, enumerator_8910.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_compilation.galgas", 218)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                        if (kBoolTrue == test_21) {
                          TC_Array <FixItDescription> fixItArray22 ;
                          inCompiler->emitSemanticError (enumerator_8910.current_mRoutineName (HERE).readProperty_location (), GGS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), fixItArray22  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 219)) ;
                        }
                      }
                      if (kBoolFalse == test_21) {
                        GGS_baseline_5F_instruction var_lastInstruction_9622 ;
                        enumerator_8910.current_mInstructionList (HERE).method_last (var_lastInstruction_9622, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 221)) ;
                        callExtensionMethod_shouldNotContinueInSequence ((cPtr_baseline_5F_instruction *) var_lastInstruction_9622.ptr (), GGS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 222)) ;
                      }
                    }
                  }
                  if (kBoolFalse == test_20) {
                    var_routineKind_9242 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas", 225)) ;
                    enumGalgasBool test_23 = kBoolTrue ;
                    if (kBoolTrue == test_23) {
                      test_23 = GGS_bool (ComparisonKind::equal, enumerator_8910.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_compilation.galgas", 227)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                      if (kBoolTrue == test_23) {
                        TC_Array <FixItDescription> fixItArray24 ;
                        inCompiler->emitSemanticError (enumerator_8910.current_mRoutineName (HERE).readProperty_location (), GGS_string ("a baseline routine must end with a MOVLW instruction"), fixItArray24  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 228)) ;
                      }
                    }
                    if (kBoolFalse == test_23) {
                      GGS_baseline_5F_instruction var_lastInstruction_10143 ;
                      enumerator_8910.current_mInstructionList (HERE).method_last (var_lastInstruction_10143, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 230)) ;
                      callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_10143.ptr (), GGS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 231)) ;
                    }
                  }
                  enumGalgasBool test_25 = kBoolTrue ;
                  if (kBoolTrue == test_25) {
                    test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_8910.current_mRoutineName (HERE).readProperty_string ().objectCompare (GGS_string ("main"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      var_intermediateInstructionList_8573.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::init_21__21_ (enumerator_8910.current_mRoutineName (HERE), enumerator_8910.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 236)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 236)) ;
                      var_intermediateInstructionList_8573.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (enumerator_8910.current_mRoutineName (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237)) ;
                    }
                  }
                  GGS_bool var_continuesInSequence_10930 ;
                  {
                  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (var_currentPage_8691, enumerator_8910.current_mInstructionList (HERE), var_routineMap_6310, var_registerTable_5182, var_constantMap_5144, var_localLabelIndex_8721, var_intermediateInstructionList_8573, var_listFileContents_4392, var_continuesInSequence_10930, var_routineKind_9242, enumerator_8910.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 250)), var_usedRegisters_5441, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 239)) ;
                  }
                  var_intermediateInstructionList_8573.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::init_21__21_ (enumerator_8910.current_mRoutineName (HERE), var_currentPage_8691, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 253)) ;
                  enumGalgasBool test_26 = kBoolTrue ;
                  if (kBoolTrue == test_26) {
                    test_26 = enumerator_8910.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_10930 COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254)).boolEnum () ;
                    if (kBoolTrue == test_26) {
                      TC_Array <FixItDescription> fixItArray27 ;
                      inCompiler->emitSemanticError (enumerator_8910.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray27  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255)) ;
                    }
                  }
                }
              }
              enumerator_8910.gotoNextObject () ;
            }
            var_currentPage_8691.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 259)) ;
          }
        }
      }
    }
  }
  GGS_stringset var_usedRoutineSet_11495 = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 263)) ;
  GGS_baseline_5F_declaredRoutineMap var_declaredRoutineMap_11596 = GGS_baseline_5F_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_11674 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_11674.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_11596.setter_insertKey (enumerator_11674.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 268)) ;
    }
    enumerator_11674.gotoNextObject () ;
  }
  GGS_stringset var_unusedRoutineDeclarationUnicity_11839 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_11893 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_11893.hasCurrentObject ()) {
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_declaredRoutineMap_11596.getter_hasKey (enumerator_11893.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 273)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 273)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_11893.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_11893.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)), fixItArray29  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)) ;
      }
    }
    if (kBoolFalse == test_28) {
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        test_30 = var_unusedRoutineDeclarationUnicity_11839.getter_hasKey (enumerator_11893.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticWarning (enumerator_11893.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_11893.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)), fixItArray31  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)) ;
        }
      }
      if (kBoolFalse == test_30) {
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          test_32 = var_usedRoutineSet_11495.getter_hasKey (enumerator_11893.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)).boolEnum () ;
          if (kBoolTrue == test_32) {
            TC_Array <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticWarning (enumerator_11893.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_11893.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)), fixItArray33  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_11839.addAssign_operation (enumerator_11893.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 280)) ;
    enumerator_11893.gotoNextObject () ;
  }
  cEnumerator_baseline_5F_declaredRoutineMap enumerator_12442 (var_declaredRoutineMap_11596, EnumerationOrder::up) ;
  while (enumerator_12442.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_usedRoutineSet_11495.getter_hasKey (enumerator_12442.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_and (var_unusedRoutineDeclarationUnicity_11839.getter_hasKey (enumerator_12442.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticWarning (enumerator_12442.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12442.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)), fixItArray35  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)) ;
      }
    }
    enumerator_12442.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_12762 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_12809 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), EnumerationOrder::up) ;
  while (enumerator_12809.hasCurrentObject ()) {
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      test_36 = var_registerTable_5182.getter_hasKey (enumerator_12809.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 290)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 290)).boolEnum () ;
      if (kBoolTrue == test_36) {
        TC_Array <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_12809.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12809.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)), fixItArray37  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)) ;
      }
    }
    if (kBoolFalse == test_36) {
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = var_unusedDeclarationUnicity_12762.getter_hasKey (enumerator_12809.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)).boolEnum () ;
        if (kBoolTrue == test_38) {
          TC_Array <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticWarning (enumerator_12809.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12809.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)), fixItArray39  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)) ;
        }
      }
      if (kBoolFalse == test_38) {
        enumGalgasBool test_40 = kBoolTrue ;
        if (kBoolTrue == test_40) {
          test_40 = var_usedRegisters_5441.getter_hasKey (enumerator_12809.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)).boolEnum () ;
          if (kBoolTrue == test_40) {
            TC_Array <FixItDescription> fixItArray41 ;
            inCompiler->emitSemanticWarning (enumerator_12809.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12809.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)), fixItArray41  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_12762.addAssign_operation (enumerator_12809.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 297)) ;
    enumerator_12809.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_13330 (var_declaredByteMap_6232, EnumerationOrder::up) ;
  while (enumerator_13330.hasCurrentObject ()) {
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      test_42 = var_usedRegisters_5441.getter_hasKey (enumerator_13330.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_and (var_unusedDeclarationUnicity_12762.getter_hasKey (enumerator_13330.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).boolEnum () ;
      if (kBoolTrue == test_42) {
        TC_Array <FixItDescription> fixItArray43 ;
        inCompiler->emitSemanticWarning (enumerator_13330.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_13330.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)), fixItArray43  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)) ;
      }
    }
    enumerator_13330.gotoNextObject () ;
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 305)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 305)).boolEnum () ;
    if (kBoolTrue == test_44) {
      var_listFileContents_4392.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("INTERMEDIATE INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string (" Line Length Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)) ;
      GGS_uint var_currentAddress_14075 = GGS_uint (uint32_t (0U)) ;
      cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14103 (var_intermediateInstructionList_8573, EnumerationOrder::up) ;
      GGS_uint index_14098 (uint32_t (0)) ;
      while (enumerator_14103.hasCurrentObject ()) {
        var_listFileContents_4392.plusAssign_operation(index_14098.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 313)).getter_stringByLeftPadding (GGS_uint (uint32_t (5U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)) ;
        var_listFileContents_4392.plusAssign_operation(callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14103.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_stringByLeftPadding (GGS_uint (uint32_t (6U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)) ;
        callExtensionMethod_print ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14103.current_mInstruction (HERE).ptr (), var_listFileContents_4392, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)) ;
        var_listFileContents_4392.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)) ;
        callExtensionMethod_setCurrentAddress ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14103.current_mInstruction (HERE).ptr (), var_currentAddress_14075, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 317)) ;
        enumerator_14103.gotoNextObject () ;
        index_14098.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 312)) ;
      }
      var_listFileContents_4392.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 319)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string ("Code size without optimization: ").add_operation (var_currentAddress_14075.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)).add_operation (GGS_string (" words.\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)) ;
    }
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 323)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 323)).boolEnum () ;
    if (kBoolTrue == test_45) {
      {
      routine_perform_5F_baseline_5F_optimizations_26__26_ (var_intermediateInstructionList_8573, var_listFileContents_4392, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 324)) ;
      }
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 327)) ;
  }
  GGS_registerExpression var_sr_14940 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331)), inCompiler COMMA_HERE) ;
  GGS_baseline_5F_intermediate_5F_registerExpression var_statusRegister_15180 ;
  GGS_bitSliceTable var_statusRegisterBitSliceTable_15219 ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) var_sr_14940.ptr (), var_registerTable_5182, var_constantMap_5144, var_statusRegister_15180, var_statusRegisterBitSliceTable_15219, var_usedRegisters_5441, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 333)) ;
  GGS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList_15277 = GGS_baseline_5F_assembly_5F_instructionList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_46 = kBoolTrue ;
  if (kBoolTrue == test_46) {
    test_46 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 341)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_46) {
      {
      routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (var_intermediateInstructionList_8573, var_actualConfigurationMap_5045, var_statusRegister_15180, var_statusRegisterBitSliceTable_15219, var_assemblyInstructionList_15277, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 342)) ;
      }
    }
  }
  enumGalgasBool test_47 = kBoolTrue ;
  if (kBoolTrue == test_47) {
    test_47 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 351)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_47) {
      var_listFileContents_4392.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)) ;
      var_listFileContents_4392.plusAssign_operation(GGS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)) ;
      GGS_uint var_usedROMsize_16106 ;
      {
      routine_build_5F_baseline_5F_binary_5F_code_3F__3F__26__21_ (var_assemblyInstructionList_15277, var_piccoloDeviceModel_4522.readProperty_mRomSize ().readProperty_uint (), var_listFileContents_4392, var_usedROMsize_16106, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)) ;
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = GGS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_48) {
      GGS_string var_listFile_16251 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 365)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 365)) ;
      GGS_bool joker_16386 ; // Joker input parameter
      var_listFileContents_4392.method_writeToFileWhenDifferentContents (var_listFile_16251, joker_16386, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 366)) ;
    }
  }
  enumGalgasBool test_49 = kBoolTrue ;
  if (kBoolTrue == test_49) {
    test_49 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 370)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_49) {
      GGS_string var_contents_16861 ;
      {
      routine_getGeneratedContents_21_ (var_contents_16861, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 381)) ;
      }
      GGS_string var_destinationFile_16887 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 382)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 382)) ;
      GGS_bool joker_17027 ; // Joker input parameter
      var_contents_16861.method_writeToFileWhenDifferentContents (var_destinationFile_16887, joker_17027, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 383)) ;
      enumGalgasBool test_50 = kBoolTrue ;
      if (kBoolTrue == test_50) {
        test_50 = GGS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_50) {
          GGS_string var_baseName_17107 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 385)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 385)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_17107, var_contents_16861, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 386)) ;
          }
          var_destinationFile_16887 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 387)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 387)) ;
          GGS_bool joker_17389 ; // Joker input parameter
          var_contents_16861.method_writeToFileWhenDifferentContents (var_destinationFile_16887, joker_17389, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 388)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_17107, var_contents_16861, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 389)) ;
          }
          var_destinationFile_16887 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 390)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 390)) ;
          GGS_bool joker_17587 ; // Joker input parameter
          var_contents_16861.method_writeToFileWhenDifferentContents (var_destinationFile_16887, joker_17587, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 391)) ;
        }
      }
      enumGalgasBool test_51 = kBoolTrue ;
      if (kBoolTrue == test_51) {
        test_51 = GGS_bool (gOption_piccolo_5F_options_generateAssembly.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_51) {
          GGS_string var_assemblyCode_18585 = GGS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)) ;
          cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_18664 (var_assemblyInstructionList_15277, EnumerationOrder::up) ;
          while (enumerator_18664.hasCurrentObject ()) {
            callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_18664.current_mInstruction (HERE).ptr (), var_assemblyCode_18585, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 412)) ;
            var_assemblyCode_18585.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 413)) ;
            enumerator_18664.gotoNextObject () ;
          }
          var_assemblyCode_18585.plusAssign_operation(GGS_string ("\n;--- Registers\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 415)) ;
          cEnumerator_registerTable enumerator_18878 (var_registerTable_5182, EnumerationOrder::up) ;
          while (enumerator_18878.hasCurrentObject ()) {
            GGS_uint var_address_18949 ;
            enumerator_18878.current_mRegisterAddressList (HERE).method_first (var_address_18949, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 417)) ;
            var_assemblyCode_18585.plusAssign_operation(enumerator_18878.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (var_address_18949.getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)) ;
            enumerator_18878.gotoNextObject () ;
          }
          var_assemblyCode_18585.plusAssign_operation(GGS_string ("W EQU 0\n\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)) ;
          var_assemblyCode_18585.plusAssign_operation(GGS_string (";--- Configuration\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 421)) ;
          cEnumerator_actualConfigurationMap enumerator_19154 (var_actualConfigurationMap_5045, EnumerationOrder::up) ;
          while (enumerator_19154.hasCurrentObject ()) {
            var_assemblyCode_18585.plusAssign_operation(GGS_string ("  __config ").add_operation (enumerator_19154.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (enumerator_19154.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)) ;
            enumerator_19154.gotoNextObject () ;
          }
          var_assemblyCode_18585.plusAssign_operation(GGS_string ("\n  END\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)) ;
          GGS_string var_asmDestinationFile_19380 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 426)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 426)) ;
          GGS_bool joker_19532 ; // Joker input parameter
          var_assemblyCode_18585.method_writeToFileWhenDifferentContents (var_asmDestinationFile_19380, joker_19532, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 427)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_49) {
    GGS_string var_hexDestinationFile_19613 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 430)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 430)) ;
    enumGalgasBool test_52 = kBoolTrue ;
    if (kBoolTrue == test_52) {
      test_52 = var_hexDestinationFile_19613.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 431)).boolEnum () ;
      if (kBoolTrue == test_52) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_19613, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 432)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_19807 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 434)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 434)) ;
    enumGalgasBool test_53 = kBoolTrue ;
    if (kBoolTrue == test_53) {
      test_53 = var_asmDestinationFile_19807.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 435)).boolEnum () ;
      if (kBoolTrue == test_53) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_19807, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 436)) ;
        }
      }
    }
  }
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
  cEnumerator_baseline_5F_instructionList enumerator_2399 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  GGS_uint index_2394 (uint32_t (0)) ;
  while (enumerator_2399.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 74)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2399.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 75)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    GGS_bool temp_2 ;
    const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, index_2394.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)).objectCompare (constinArgument_inInstructionList.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GGS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) enumerator_2399.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 78)) ;
    enumerator_2399.gotoNextObject () ;
    index_2394.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("the last routine instruction should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 124)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::init_21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'acceptableTRISoperand'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_acceptableTRISoperand (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_set ; // Returned variable
  result_set = GGS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_semantic_analysis.galgas", 132)) ;
  result_set.addAssign_operation (GGS_string ("GPIO")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 133)) ;
  result_set.addAssign_operation (GGS_string ("PORTA")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 134)) ;
  result_set.addAssign_operation (GGS_string ("PORTB")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 135)) ;
  result_set.addAssign_operation (GGS_string ("PORTC")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 136)) ;
  result_set.addAssign_operation (GGS_string ("PORTD")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 137)) ;
  result_set.addAssign_operation (GGS_string ("PORTE")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 138)) ;
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

static const C_galgas_type_descriptor * functionArgs_acceptableTRISoperand [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_acceptableTRISoperand (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
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
//
//Overriding extension method '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_TRIS temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction but should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 156)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_baseline_5F_instruction_5F_TRIS temp_4 = this ;
    test_3 = function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).getter_hasKey (temp_4.readProperty_mOperand ().readProperty_string () COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GGS_string var_s_5676 = GGS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_5692 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 161)), EnumerationOrder::up) ;
      while (enumerator_5692.hasCurrentObject ()) {
        var_s_5676.plusAssign_operation(enumerator_5692.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 162)) ;
        if (enumerator_5692.hasNextObject ()) {
          var_s_5676.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 163)) ;
        }
        enumerator_5692.gotoNextObject () ;
      }
      const GGS_baseline_5F_instruction_5F_TRIS temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s_5676, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)) ;
    }
  }
  GGS_uintlist var_registerAddressList_5935 ;
  GGS_registerProtection var_protection_5964 ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_7 = this ;
  GGS_uint joker_5955_3 ; // Joker input parameter
  GGS_bitSliceTable joker_5955_2 ; // Joker input parameter
  GGS_string joker_5955_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mOperand (), var_registerAddressList_5935, joker_5955_3, joker_5955_2, joker_5955_1, var_protection_5964, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 168)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mOperand (), GGS_bool (true), var_protection_5964, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 169)) ;
  GGS_uint var_opcode_6094 ;
  var_registerAddressList_5935.method_first (var_opcode_6094, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 170)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_9 = this ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_TRIS::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mOperand (), var_opcode_6094, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 172)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_MNOP temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 190)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_MNOP temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_MNOP temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 192)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = constinArgument_inLastInstructionShouldReturn.operator_and (GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLiteralInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 210)) ;
    }
  }
  GGS_sint_36__34_ var_immediatValue_8099 ;
  const GGS_baseline_5F_instruction_5F_literalOperation temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue_8099, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_immediatValue_8099.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_immediatValue_8099.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_immediatValue_8099.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 221)), var_immediatValue_8099.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219)) ;
    }
  }
  if (kBoolFalse == test_8) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_10 = this ;
    const GGS_baseline_5F_instruction_5F_literalOperation temp_11 = this ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mLiteralInstruction (), var_immediatValue_8099.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FD build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_FD temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 247)) ;
    }
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_9727 ;
  GGS_bitSliceTable var_bitSliceTable_9790 ;
  const GGS_baseline_5F_instruction_5F_FD temp_3 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_9727, var_bitSliceTable_9790, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 249)) ;
  const GGS_baseline_5F_instruction_5F_FD temp_4 = this ;
  const GGS_baseline_5F_instruction_5F_FD temp_5 = this ;
  const GGS_baseline_5F_instruction_5F_FD temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_intermediateRegisterDescription_9727, temp_6.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL build_baseline_intermediate_instructionList'
//
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
  GGS_bool var_isNoReturn_10749 ;
  GGS_luint var_targetPage_10772 ;
  const GGS_baseline_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_10749, var_targetPage_10772, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 278)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isNoReturn_10749.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_baseline_5F_instruction_5F_CALL temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 280)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_10772.readProperty_uint ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_CALL temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("for an inter-page regular routine call, use a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 283)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GGS_baseline_5F_instruction_5F_CALL temp_8 = this ;
      const GGS_baseline_5F_instruction_5F_CALL temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 287)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GGS_baseline_5F_instruction_5F_CALL temp_10 = this ;
    const GGS_baseline_5F_instruction_5F_CALL temp_11 = this ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_CALL::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 291)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JSR build_baseline_intermediate_instructionList'
//
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
  GGS_bool var_isNoReturn_12079 ;
  GGS_luint var_targetPage_12102 ;
  const GGS_baseline_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_12079, var_targetPage_12102, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 312)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isNoReturn_12079.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_baseline_5F_instruction_5F_JSR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 314)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_JSR temp_5 = this ;
      const GGS_baseline_5F_instruction_5F_JSR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_12102.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 318)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GGS_baseline_5F_instruction_5F_JSR temp_7 = this ;
    const GGS_baseline_5F_instruction_5F_JSR temp_8 = this ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), temp_8.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_12102.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 324)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_F build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_F temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 347)) ;
    }
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_13563 ;
  const GGS_baseline_5F_instruction_5F_F temp_3 = this ;
  GGS_bitSliceTable joker_13599 ; // Joker input parameter
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_13563, joker_13599, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 349)) ;
  const GGS_baseline_5F_instruction_5F_F temp_4 = this ;
  const GGS_baseline_5F_instruction_5F_F temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mFAinstruction (), var_intermediateRegisterDescription_13563, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 356)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FB build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_FB temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 377)) ;
    }
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_14715 ;
  GGS_bitSliceTable var_bitSliceTable_14771 ;
  const GGS_baseline_5F_instruction_5F_FB temp_3 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_14715, var_bitSliceTable_14771, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 379)) ;
  GGS_uint var_bitNumber_14939 ;
  const GGS_baseline_5F_instruction_5F_FB temp_4 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_4.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_14771, var_bitNumber_14939, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 386)) ;
  const GGS_baseline_5F_instruction_5F_FB temp_5 = this ;
  const GGS_baseline_5F_instruction_5F_FB temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mBitOrientedOp (), var_intermediateRegisterDescription_14715, var_bitNumber_14939, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 393)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_GOTO temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 416)) ;
    }
  }
  GGS_bool var_isNoReturn_15976 ;
  GGS_luint var_targetPage_15999 ;
  const GGS_baseline_5F_instruction_5F_GOTO temp_3 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.readProperty_mTargetLabel (), var_isNoReturn_15976, var_targetPage_15999, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 418)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_isNoReturn_15976.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 419)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_GOTO temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 420)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_15999.readProperty_uint ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GGS_baseline_5F_instruction_5F_GOTO temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("for an inter-page noreturn routine call, use a JUMP instruction"), fixItArray9  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 423)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_baseline_5F_instruction_5F_GOTO temp_10 = this ;
  const GGS_baseline_5F_instruction_5F_GOTO temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 427)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP build_baseline_intermediate_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_JUMP temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 447)) ;
    }
  }
  GGS_bool var_isNoReturn_17276 ;
  GGS_luint var_targetPage_17299 ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_3 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.readProperty_mTargetLabel (), var_isNoReturn_17276, var_targetPage_17299, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 449)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_isNoReturn_17276.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_baseline_5F_instruction_5F_JUMP temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 451)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_7 = this ;
  const GGS_baseline_5F_instruction_5F_JUMP temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), temp_8.readProperty_mTargetLabel (), constinArgument_inCurrentPage, var_targetPage_17299.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 455)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_BitTest build_baseline_intermediate_instructionList'
//
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_18374 ;
  GGS_bitSliceTable var_bitSliceTable_18430 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_18374, var_bitSliceTable_18430, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 476)) ;
  GGS_uint var_bitNumber_18592 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18430, var_bitNumber_18592, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 483)) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_intermediateRegisterDescription_18374, var_bitNumber_18592, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 490)) ;
  GGS_bool var_unusedContinuesInSequence_18834 = GGS_bool (true) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_18834, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 497)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_IncDec build_baseline_intermediate_instructionList'
//
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
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_19841 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_19841 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 529)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_baseCode_19841 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 531)) ;
  }
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_20151 ;
  GGS_bitSliceTable var_bitSliceTable_20214 ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_20151, var_bitSliceTable_20214, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 534)) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_baseCode_19841, var_intermediateRegisterDescription_20151, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 542)) ;
  GGS_bool var_unusedContinuesInSequence_20465 = GGS_bool (true) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_20465, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 549)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER build_baseline_intermediate_instructionList'
//
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
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 580)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_baseline_5F_instruction_5F_FOREVER temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 583)) ;
    }
    break ;
  }
  GGS_string var_label_30__21800 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 586)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 587)) ;
  const GGS_baseline_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_30__21800, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 588)) ;
  {
  const GGS_baseline_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 589)) ;
  }
  const GGS_baseline_5F_instruction_5F_FOREVER temp_6 = this ;
  const GGS_baseline_5F_instruction_5F_FOREVER temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_30__21800, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 604)) ;
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_STATIC_REPEAT build_baseline_intermediate_instructionList'
//
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
  GGS_sint_36__34_ var_lowerBound_23304 ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_23304, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 627)) ;
  GGS_sint_36__34_ var_upperBound_23414 ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_23414, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 628)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_23304.objectCompare (var_upperBound_23414)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_23304.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)).add_operation (var_upperBound_23414.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)), fixItArray4  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_23414.substract_operation (var_lowerBound_23304, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)).objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_23414.substract_operation (var_lowerBound_23304, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 633)).getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 633)).add_operation (GGS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 633)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 633)) ;
      }
    }
  }
  GGS_constantMap var_tempConstantMap_23796 = constinArgument_inConstantMap ;
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_23796.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_23304, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 637)) ;
  }
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_23796, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 638)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 652)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list contains an endless loop"), fixItArray12  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 653)) ;
    }
  }
  GGS_sint_36__34_ var_idx_24401 = var_lowerBound_23304.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 656)) ;
  if (var_upperBound_23414.substract_operation (var_lowerBound_23304, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)).isValid ()) {
    uint32_t variant_24424 = var_upperBound_23414.substract_operation (var_lowerBound_23304, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)).uintValue () ;
    bool loop_24424 = true ;
    while (loop_24424) {
      GGS_bool test_13 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_24401.objectCompare (var_upperBound_23414)) ;
      if (kBoolTrue == test_13.boolEnum ()) {
        test_13 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_24424 = test_13.isValid () ;
      if (loop_24424) {
        loop_24424 = test_13.boolValue () ;
      }
      if (loop_24424 && (0 == variant_24424)) {
        loop_24424 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)) ;
      }
      if (loop_24424) {
        variant_24424 -- ;
        GGS_constantMap var_constantMap_24530 = constinArgument_inConstantMap ;
        {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
        var_constantMap_24530.setter_insertKey (temp_14.readProperty_mConstantName (), var_idx_24401, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 659)) ;
        }
        {
        const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_15 = this ;
        routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_15.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_24530, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GGS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 660)) ;
        }
        var_idx_24401.plusAssign_operation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 674)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_do_while build_baseline_intermediate_instructionList'
//
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
  GGS_string var_labelInstructionBegin_25631 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 693)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 693)) ;
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_labelInstructionBegin_25631, temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 695)) ;
  {
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 697)) ;
  }
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_2 = this ;
  cEnumerator_baseline_5F_partList enumerator_26291 (temp_2.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_26291.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_26291.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 713)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GGS_baseline_5F_instruction_5F_do_5F_while temp_4 = this ;
        callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_26291.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_4.readProperty_mInstructionLocation (), var_labelInstructionBegin_25631, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 714)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GGS_string var_nextBranchLabel_26701 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 726)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 726)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 726)) ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_5 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_26291.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_5.readProperty_mInstructionLocation (), var_nextBranchLabel_26701, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)) ;
      {
      routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, enumerator_26291.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 738)) ;
      }
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_6 = this ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_7 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_labelInstructionBegin_25631, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 752)) ;
      const GGS_baseline_5F_instruction_5F_do_5F_while temp_8 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_nextBranchLabel_26701, temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 755)) ;
    }
    enumerator_26291.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if build_baseline_intermediate_instructionList'
//
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
  GGS_string var_label_5F_nextCondition_28412 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 775)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 775)) ;
  GGS_string var_label_5F_endOfIfinstruction_28507 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_0 = this ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_0.readProperty_mIfCondition ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_1.readProperty_mInstructionLocation (), var_label_5F_nextCondition_28412, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 778)) ;
  GGS_bool var_thenContinuesInSequence_29153 ;
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_2 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_2.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_thenContinuesInSequence_29153, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 790)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 805)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 805)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 805)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_5 = this ;
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_28507, temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_28412, temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 810)) ;
  GGS_bool var_elseContinuesInSequence_29937 ;
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_8 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_8.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_elseContinuesInSequence_29937, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811)) ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 825)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 825)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 825)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_11 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_28507, temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)) ;
    }
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_29153.operator_or (var_elseContinuesInSequence_29937 COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 829)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_incDecRegisterInCondition build_intermediate_condition_instructions'
//
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_31836 ;
  GGS_bitSliceTable var_bitSliceTable_31899 ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_31836, var_bitSliceTable_31899, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 861)) ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_baseline_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (constinArgument_inInstructionLocation, var_intermediateRegisterDescription_31836, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 875)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 869)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_negateCondition build_intermediate_condition_instructions'
//
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
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 895)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 890)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_andCondition build_intermediate_condition_instructions'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_andCondition temp_1 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 916)) ;
      const GGS_baseline_5F_andCondition temp_2 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 927)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_label_30__34071 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 939)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 939)) ;
    const GGS_baseline_5F_andCondition temp_3 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, var_label_30__34071, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)) ;
    const GGS_baseline_5F_andCondition temp_4 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 951)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (GGS_lstring::init_21__21_ (var_label_30__34071, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 962)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_bitTest_in_structured_if_condition build_intermediate_condition_instructions'
//
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
  GGS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_35490 ;
  GGS_bitSliceTable var_bitSliceTable_35546 ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_35490, var_bitSliceTable_35546, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 979)) ;
  GGS_uint var_bitNumber_35708 ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_35546, var_bitNumber_35708, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 986)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_intermediateRegisterDescription_35490, var_bitNumber_35708, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 993)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (constinArgument_inInstructionLocation, GGS_lstring::init_21__21_ (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 999)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_NULL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 10)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (GGS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FD print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 42)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_F print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FB print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 62)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)) ;
  }
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_literalOperation print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_MNOP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 110)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 112)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 114)) ;
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 118)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)) ;
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_WO_OPERAND print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_TRIS print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_NULL::getter_length (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_length (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_length (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_actualInstruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_actualInstruction::getter_length (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_JUMP::getter_length (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  result_outLength = GGS_uint (uint32_t (1U)).add_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JSR length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_JSR::getter_length (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  result_outLength = GGS_uint (uint32_t (1U)).add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_MNOP length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::getter_length (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outLength = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_length (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outLength = GGS_uint (uint32_t (2U)) ;
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentWordAdress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioCurrentWordAdress = temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 27)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABEL (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_isLABEL (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_isLABEL (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_NULL::getter_isNULL (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (true) ;
//---
  return result_outIsNULL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_GOTO nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 126)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 143)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 150)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 157)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GGS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GGS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 191)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                  const GGS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                  GGS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GGS_uint var_currentAddress_7916 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_8082 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8098 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8098 = true ;
    while (loop_8098) {
      loop_8098 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7916.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8082.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8098) {
        loop_8098 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7916.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8082.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8098 && (0 == variant_8098)) {
        loop_8098 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8098) {
        variant_8098 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GGS_baseline_5F_intermediate_5F_actualInstruction var_instr_8230 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7916, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) ;
          if (nullptr == var_instr_8230.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8230 ;
            var_found_8082 = GGS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_currentAddress_7916.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 214)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                             const GGS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                             GGS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                             GGS_stringset & outArgument_outReachedLabelSet,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GGS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 226)) ;
  GGS_uint var_currentAddress_8989 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_9155 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid ()) {
    uint32_t variant_9171 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 232)).uintValue () ;
    bool loop_9171 = true ;
    while (loop_9171) {
      loop_9171 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_8989.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9155.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).isValid () ;
      if (loop_9171) {
        loop_9171 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_8989.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9155.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).boolValue () ;
      }
      if (loop_9171 && (0 == variant_9171)) {
        loop_9171 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 232)) ;
      }
      if (loop_9171) {
        variant_9171 -- ;
        GGS_baseline_5F_intermediate_5F_instruction var_instruction_9300 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8989, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 235)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GGS_baseline_5F_intermediate_5F_actualInstruction var_instr_9390 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (var_instruction_9300.ptr ())) ;
          if (nullptr == var_instr_9390.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_9390 ;
            var_found_9155 = GGS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE var_instr_9663 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (var_instruction_9300.ptr ())) ;
            if (nullptr == var_instr_9663.ptr ()) {
              test_1 = kBoolFalse ;
            }
            if (kBoolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_9663 ;
              var_found_9155 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var_instr_9849 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_9300.ptr ())) ;
              if (nullptr == var_instr_9849.ptr ()) {
                test_2 = kBoolFalse ;
              }
              if (kBoolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_9849 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_9849.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 248)) ;
                var_currentAddress_8989.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 249)) ;
              }
            }
            if (kBoolFalse == test_2) {
              var_currentAddress_8989.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 251)) ;
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations_26__26_ (GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)) ;
  GGS_baselineSymbolTableForOptimizations var_symbolTable_21904 = GGS_baselineSymbolTableForOptimizations::init (inCompiler COMMA_HERE) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21964 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
  GGS_uint index_21959 (uint32_t (0)) ;
  while (enumerator_21964.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_21964.current_mInstruction (HERE).ptr (), var_symbolTable_21904, index_21959, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
    enumerator_21964.gotoNextObject () ;
    index_21959.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 538)) ;
  }
  GGS_bool var_optimizationsDone_22155 = GGS_bool (true) ;
  GGS_uint var_iteration_22192 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 544)).isValid ()) {
    uint32_t variant_22208 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 544)).uintValue () ;
    bool loop_22208 = true ;
    while (loop_22208) {
      loop_22208 = var_optimizationsDone_22155.isValid () ;
      if (loop_22208) {
        loop_22208 = var_optimizationsDone_22155.boolValue () ;
      }
      if (loop_22208 && (0 == variant_22208)) {
        loop_22208 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
      }
      if (loop_22208) {
        variant_22208 -- ;
        var_optimizationsDone_22155 = GGS_bool (false) ;
        var_iteration_22192.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Pass ").add_operation (var_iteration_22192.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22427 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GGS_uint index_22422 (uint32_t (0)) ;
        while (enumerator_22427.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE var_inst_22493 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (enumerator_22427.current_mInstruction (HERE).ptr ())) ;
            if (nullptr == var_inst_22493.ptr ()) {
              test_0 = kBoolFalse ;
            }
            if (kBoolTrue == test_0) {
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) var_inst_22493.ptr (), index_22422, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22155, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 555)) ;
            }
          }
          if (kBoolFalse == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              GGS_baseline_5F_intermediate_5F_GOTO var_inst_22782 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (enumerator_22427.current_mInstruction (HERE).ptr ())) ;
              if (nullptr == var_inst_22782.ptr ()) {
                test_1 = kBoolFalse ;
              }
              if (kBoolTrue == test_1) {
                callExtensionMethod_optimizeGOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_inst_22782.ptr (), var_symbolTable_21904, index_22422, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22155, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 558)) ;
              }
            }
            if (kBoolFalse == test_1) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                GGS_baseline_5F_intermediate_5F_JUMP var_inst_23019 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (enumerator_22427.current_mInstruction (HERE).ptr ())) ;
                if (nullptr == var_inst_23019.ptr ()) {
                  test_2 = kBoolFalse ;
                }
                if (kBoolTrue == test_2) {
                  callExtensionMethod_optimizeJUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) var_inst_23019.ptr (), var_symbolTable_21904, index_22422, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22155, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 561)) ;
                }
              }
              if (kBoolFalse == test_2) {
                enumGalgasBool test_3 = kBoolTrue ;
                if (kBoolTrue == test_3) {
                  GGS_baseline_5F_intermediate_5F_CALL var_inst_23256 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_CALL *> (enumerator_22427.current_mInstruction (HERE).ptr ())) ;
                  if (nullptr == var_inst_23256.ptr ()) {
                    test_3 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_3) {
                    callExtensionMethod_optimizeCALL ((cPtr_baseline_5F_intermediate_5F_CALL *) var_inst_23256.ptr (), var_symbolTable_21904, index_22422, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22155, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
                  }
                }
                if (kBoolFalse == test_3) {
                  enumGalgasBool test_4 = kBoolTrue ;
                  if (kBoolTrue == test_4) {
                    GGS_baseline_5F_intermediate_5F_JSR var_inst_23493 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JSR *> (enumerator_22427.current_mInstruction (HERE).ptr ())) ;
                    if (nullptr == var_inst_23493.ptr ()) {
                      test_4 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_4) {
                      callExtensionMethod_optimizeJSR ((cPtr_baseline_5F_intermediate_5F_JSR *) var_inst_23493.ptr (), var_symbolTable_21904, index_22422, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22155, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 567)) ;
                    }
                  }
                  if (kBoolFalse == test_4) {
                    enumGalgasBool test_5 = kBoolTrue ;
                    if (kBoolTrue == test_5) {
                      GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition var_inst_23727 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (enumerator_22427.current_mInstruction (HERE).ptr ())) ;
                      if (nullptr == var_inst_23727.ptr ()) {
                        test_5 = kBoolFalse ;
                      }
                      if (kBoolTrue == test_5) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) var_inst_23727.ptr (), var_symbolTable_21904, index_22422, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22155, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 570)) ;
                      }
                    }
                  }
                }
              }
            }
          }
          enumerator_22427.gotoNextObject () ;
          index_22422.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 551)) ;
        }
        GGS_stringset var_referencedLabels_24070 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24111 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        while (enumerator_24111.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24111.current_mInstruction (HERE).ptr (), var_referencedLabels_24070, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
          enumerator_24111.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_24242 (var_symbolTable_21904, EnumerationOrder::up) ;
        while (enumerator_24242.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_referencedLabels_24070.getter_hasKey (enumerator_24242.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
            if (kBoolTrue == test_6) {
              GGS_uint var_definitionLine_24369 ;
              var_symbolTable_21904.method_searchKey (enumerator_24242.current_lkey (HERE), var_definitionLine_24369, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (var_definitionLine_24369.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GGS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (enumerator_24242.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GGS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), var_definitionLine_24369, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 583)) ;
              }
              {
              GGS_uint joker_24656 ; // Joker input parameter
              var_symbolTable_21904.setter_removeKey (enumerator_24242.current_lkey (HERE), joker_24656, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
              }
            }
          }
          enumerator_24242.gotoNextObject () ;
        }
        GGS_bool var_reachable_24721 = GGS_bool (true) ;
        GGS_bool var_skippingInstruction_24752 = GGS_bool (false) ;
        GGS_bool var_previousWasSkippingInstruction_24794 = GGS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24842 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GGS_uint index_24837 (uint32_t (0)) ;
        while (enumerator_24842.hasCurrentObject ()) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_reachable_24721.operator_or (var_previousWasSkippingInstruction_24794 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 592)).boolEnum () ;
            if (kBoolTrue == test_7) {
              var_reachable_24721 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24842.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 593)) ;
              var_previousWasSkippingInstruction_24794 = var_skippingInstruction_24752 ;
              var_skippingInstruction_24752 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24842.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
            }
          }
          if (kBoolFalse == test_7) {
            GGS_bool var_isLABEL_25177 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24842.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = var_isLABEL_25177.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24842.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).boolEnum () ;
              if (kBoolTrue == test_8) {
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (index_24837.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)).add_operation (GGS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), index_24837, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 600)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_isLABEL_25177.boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_reachable_24721 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24842.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 602)) ;
                  var_previousWasSkippingInstruction_24794 = GGS_bool (false) ;
                  var_skippingInstruction_24752 = GGS_bool (false) ;
                }
              }
            }
          }
          enumerator_24842.gotoNextObject () ;
          index_24837.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_optimizationsDone_22155.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 608)).boolEnum () ;
          if (kBoolTrue == test_10) {
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 609)) ;
            GGS_uint var_currentAddress_25796 = GGS_uint (uint32_t (0U)) ;
            cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_25826 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
            while (enumerator_25826.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_25826.current_mInstruction (HERE).ptr (), var_currentAddress_25796, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 613)) ;
              enumerator_25826.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Minimum code size: ").add_operation (var_currentAddress_25796.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)).add_operation (GGS_string (" words\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_print (GGS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (";  BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (";  END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (GGS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FD print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 36)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 38)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_F print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FB print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  BTFSS "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  BTFSC "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)) ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_GOTO print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_SKIP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  GOTO * + 2"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 74)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_CALL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_literalOperation print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  INCFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 94)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  DECFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 96)) ;
  }
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 100)) ;
    }
  }
  if (kBoolFalse == test_3) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 102)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_WO_OPERAND print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_print (GGS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_TRIS print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ORG length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::getter_length (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_BEGINOFROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::getter_length (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ENDOFROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::getter_length (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_LABEL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::getter_length (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_actualInstruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_actualInstruction::getter_length (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_NULL generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & /* ioArgument_ioAssemblyInstructionList */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::init_21_ (temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::init_21__21_ (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mIsRegular (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                             const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                             GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::init_21__21_ (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mPage (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FD generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_FD::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_F generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                     const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                     GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_F::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FB generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mSkipIfSet (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_WO_OPERAND generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                  const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                  GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_TRIS generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_TRIS temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_TRIS temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_TRIS::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOperand (), temp_2.readProperty_mOpcode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_literalOperation generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                    const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                    GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mLiteralValue (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                    const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                    GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::init_21_ (temp_0.readProperty_mLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_MNOP generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                        const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)) ;
    }
  }
  GGS_uint var_idx_6959 = GGS_uint (uint32_t (0U)) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6969 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6969 = true ;
    while (loop_6969) {
      const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_6969 = GGS_bool (ComparisonKind::lowerThan, var_idx_6959.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6969) {
        loop_6969 = GGS_bool (ComparisonKind::lowerThan, var_idx_6959.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6969 && (0 == variant_6969)) {
        loop_6969 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)) ;
      }
      if (loop_6969) {
        variant_6969 -- ;
        const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_6 = this ;
        ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (SOURCE_FILE ("baseline_build_assembly_code.galgas", 160)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158)) ;
        var_idx_6959.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 161)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_GOTO temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                         const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  GGS_uint var_pageChangeFlags_8029 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 183)) ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_2 = this ;
  GGS_uint var_targetPageFlags_8096 = temp_2.readProperty_mTargetPage () ;
  GGS_uint var_idx_8143 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_8153 = GGS_uint (uint32_t (8U)).uintValue () ;
    bool loop_8153 = true ;
    while (loop_8153) {
      loop_8153 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8029.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_8153) {
        loop_8153 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8029.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_8153 && (0 == variant_8153)) {
        loop_8153 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 186)) ;
      }
      if (loop_8153) {
        variant_8153 -- ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8029.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 187)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GGS_uint var_bitIndex_8247 ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 189)).boolEnum () ;
              if (kBoolTrue == test_4) {
                GGS_uint var_sliceIndex_8447 ;
                GGS_uint var_sliceSize_8479 ;
                const GGS_baseline_5F_intermediate_5F_JUMP temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_8447, var_sliceSize_8479, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 190)) ;
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_idx_8143.objectCompare (var_sliceSize_8479)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    const GGS_baseline_5F_intermediate_5F_JUMP temp_7 = this ;
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("internal error, idx (").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GGS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (var_sliceSize_8479.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)) ;
                  }
                }
                var_bitIndex_8247 = var_sliceIndex_8447.add_operation (var_idx_8143, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 198)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GGS_uint var_sliceIndex_8897 ;
                  GGS_uint var_sliceSize_8929 ;
                  const GGS_baseline_5F_intermediate_5F_JUMP temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_8897, var_sliceSize_8929, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 200)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_sliceSize_8929.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      const GGS_baseline_5F_intermediate_5F_JUMP temp_12 = this ;
                      TC_Array <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize (").add_operation (var_sliceSize_8929.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)).add_operation (GGS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)) ;
                    }
                  }
                  var_bitIndex_8247 = var_sliceIndex_8897 ;
                }
              }
              if (kBoolFalse == test_9) {
                const GGS_baseline_5F_intermediate_5F_JUMP temp_14 = this ;
                TC_Array <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 210)) ;
                var_bitIndex_8247.drop () ; // Release error dropped variable
              }
            }
            const GGS_baseline_5F_intermediate_5F_JUMP temp_16 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const enumGalgasBool test_18 = GGS_bool (ComparisonKind::notEqual, var_targetPageFlags_8096.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }else if (kBoolFalse == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_8247, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212)) ;
          }
        }
        var_pageChangeFlags_8029 = var_pageChangeFlags_8029.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 218)) ;
        var_targetPageFlags_8096 = var_targetPageFlags_8096.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 219)) ;
        var_idx_8143 = var_idx_8143.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 220)) ;
      }
    }
  }
  const GGS_baseline_5F_intermediate_5F_JUMP temp_19 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_20 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_CALL temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_CALL::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  GGS_uint var_pageChangeFlags_10564 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 245)) ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_2 = this ;
  GGS_uint var_targetPageFlags_10631 = temp_2.readProperty_mTargetPage () ;
  GGS_uint var_idx_10678 = GGS_uint (uint32_t (0U)) ;
  GGS_baseline_5F_assembly_5F_instructionList var_pageRestoreInstructions_10692 = GGS_baseline_5F_assembly_5F_instructionList::init (inCompiler COMMA_HERE) ;
  if (GGS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_10757 = GGS_uint (uint32_t (8U)).uintValue () ;
    bool loop_10757 = true ;
    while (loop_10757) {
      loop_10757 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10564.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_10757) {
        loop_10757 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10564.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_10757 && (0 == variant_10757)) {
        loop_10757 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 249)) ;
      }
      if (loop_10757) {
        variant_10757 -- ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10564.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 250)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GGS_uint var_bitIndex_10851 ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_4) {
                GGS_uint var_sliceIndex_11051 ;
                GGS_uint var_sliceSize_11083 ;
                const GGS_baseline_5F_intermediate_5F_JSR temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_11051, var_sliceSize_11083, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 253)) ;
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_idx_10678.objectCompare (var_sliceSize_11083)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    const GGS_baseline_5F_intermediate_5F_JSR temp_7 = this ;
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("internal error, idx (").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GGS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (var_sliceSize_11083.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)) ;
                  }
                }
                var_bitIndex_10851 = var_sliceIndex_11051.add_operation (var_idx_10678, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 261)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GGS_uint var_sliceIndex_11501 ;
                  GGS_uint var_sliceSize_11533 ;
                  const GGS_baseline_5F_intermediate_5F_JSR temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_11501, var_sliceSize_11533, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 263)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_sliceSize_11533.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      const GGS_baseline_5F_intermediate_5F_JSR temp_12 = this ;
                      TC_Array <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize (").add_operation (var_sliceSize_11533.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)).add_operation (GGS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)) ;
                    }
                  }
                  var_bitIndex_10851 = var_sliceIndex_11501 ;
                }
              }
              if (kBoolFalse == test_9) {
                const GGS_baseline_5F_intermediate_5F_JSR temp_14 = this ;
                TC_Array <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 273)) ;
                var_bitIndex_10851.drop () ; // Release error dropped variable
              }
            }
            const GGS_baseline_5F_intermediate_5F_JSR temp_16 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const enumGalgasBool test_18 = GGS_bool (ComparisonKind::notEqual, var_targetPageFlags_10631.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }else if (kBoolFalse == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_10851, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275)) ;
            const GGS_baseline_5F_intermediate_5F_JSR temp_19 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_20 ;
            const enumGalgasBool test_21 = GGS_bool (ComparisonKind::equal, var_targetPageFlags_10631.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              temp_20 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }else if (kBoolFalse == test_21) {
              temp_20 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }
            var_pageRestoreInstructions_10692.addAssign_operation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20, constinArgument_inSTATUSregister, var_bitIndex_10851, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280)) ;
          }
        }
        var_pageChangeFlags_10564 = var_pageChangeFlags_10564.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 286)) ;
        var_targetPageFlags_10631 = var_targetPageFlags_10631.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 287)) ;
        var_idx_10678 = var_idx_10678.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 288)) ;
      }
    }
  }
  const GGS_baseline_5F_intermediate_5F_JSR temp_22 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_23 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_CALL::init_21__21_ (temp_22.readProperty_mInstructionLocation (), temp_23.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290)) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12631 (var_pageRestoreInstructions_10692, EnumerationOrder::up) ;
  while (enumerator_12631.hasCurrentObject ()) {
    ioArgument_ioAssemblyInstructionList.addAssign_operation (enumerator_12631.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 294)) ;
    enumerator_12631.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                              const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                              GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mRegisterDescription (), temp_2.readProperty_mIncrement (), temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
    test_4 = temp_5.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_SKIP::init_21_ (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311)) ;
    }
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_7.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (temp_8.readProperty_mTargetLabel (), temp_9.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (const GGS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                        const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14331 (constinArgument_inGeneratedInstructionList, EnumerationOrder::up) ;
  while (enumerator_14331.hasCurrentObject ()) {
    callExtensionMethod_generateAssemblyCode ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14331.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 333)) ;
    enumerator_14331.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_14580 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_14580.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_14580.current_mRegisterAddress (HERE).add_operation (enumerator_14580.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)) ;
    }
    {
    routine_emitCode_3F_ (enumerator_14580.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 338)) ;
    }
    enumerator_14580.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitBaselineCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (const GGS_uint constinArgument_inCode,
                                                            GGS_uint & ioArgument_ioWordAddress,
                                                            const GGS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 15)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoBaselineCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (const GGS_uint constinArgument_inWordAddress,
                                                          const GGS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                                          GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 25)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 27)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                               GGS_uint & ioArgument_ioWordAddress,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                             GGS_uint & ioArgument_ioWordAddress,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_actualInstruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_actualInstruction::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GGS_uint & ioArgument_ioWordAddress,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_actualInstruction temp_0 = this ;
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_assembly_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_uint & ioArgument_ioWordAddress,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_1 = this ;
    test_0 = temp_1.readProperty_mIsRegular ().operator_and (GGS_bool (ComparisonKind::notEqual, ioArgument_ioWordAddress.operator_and (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GGS_string ("the 8th bit of the routine address is not 0; a regular routine should be begin in the first half of a page"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 91)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_4 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 93)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                                              GGS_uint & ioArgument_ioWordAddress,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, ioArgument_ioWordAddress.objectCompare (temp_1.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)).add_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_2 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_3 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GGS_string ("the routine is too large, it does not lie in page ").add_operation (temp_3.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (ioArgument_ioWordAddress.substract_operation (temp_4.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GGS_string (" word(s) in excess)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), fixItArray5  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_6 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_6, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 105)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                     GGS_uint & ioArgument_ioWordAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_1 = this ;
  routine_setEmitAddress_3F_ (temp_1.readProperty_mOrigin ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)) ;
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_2 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 116)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FD generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_5023 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ADDWF:
    {
      var_code_5023 = GGS_uint (uint32_t (448U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ANDWF:
    {
      var_code_5023 = GGS_uint (uint32_t (320U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_COMF:
    {
      var_code_5023 = GGS_uint (uint32_t (576U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECF:
    {
      var_code_5023 = GGS_uint (uint32_t (192U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_code_5023 = GGS_uint (uint32_t (704U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCF:
    {
      var_code_5023 = GGS_uint (uint32_t (640U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_code_5023 = GGS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_IORWF:
    {
      var_code_5023 = GGS_uint (uint32_t (256U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_MOVF:
    {
      var_code_5023 = GGS_uint (uint32_t (512U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RLF:
    {
      var_code_5023 = GGS_uint (uint32_t (832U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RRF:
    {
      var_code_5023 = GGS_uint (uint32_t (768U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SUBWF:
    {
      var_code_5023 = GGS_uint (uint32_t (128U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SWAPF:
    {
      var_code_5023 = GGS_uint (uint32_t (896U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_XORWF:
    {
      var_code_5023 = GGS_uint (uint32_t (384U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_5023 = var_code_5023.operator_or (GGS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 144)) ;
    }
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
  var_code_5023 = var_code_5023.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_5023, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 147)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_F generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                        GGS_uint & ioArgument_ioWordAddress,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_5986 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_5986 = GGS_uint (uint32_t (96U)) ;
    }
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_5986 = GGS_uint (uint32_t (32U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = this ;
  var_code_5986 = var_code_5986.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_5986, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 162)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FB generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_6528 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      var_code_6528 = GGS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      var_code_6528 = GGS_uint (uint32_t (1280U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = this ;
  var_code_6528 = var_code_6528.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = this ;
  var_code_6528 = var_code_6528.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_3 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_6528, ioArgument_ioWordAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 178)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_uint & ioArgument_ioWordAddress,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_7127 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_7127 = GGS_uint (uint32_t (1792U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_7127 = GGS_uint (uint32_t (1536U)) ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_7127 = var_code_7127.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_7127 = var_code_7127.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_7127, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 196)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_GOTO generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_7744 ;
  const GGS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_7744, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 206)) ;
  {
  const GGS_baseline_5F_assembly_5F_GOTO temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2560U)).operator_or (var_targetAddress_7744.operator_and (GGS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_SKIP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_SKIP temp_0 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2560U)).operator_or (ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)).operator_and (GGS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_CALL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_8582 ;
  const GGS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_8582, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 227)) ;
  {
  const GGS_baseline_5F_assembly_5F_CALL temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2304U)).operator_or (var_targetAddress_8582.operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioWordAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_8988 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_8988 = GGS_uint (uint32_t (960U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_8988 = GGS_uint (uint32_t (704U)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 244)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_8988 = var_code_8988.operator_or (GGS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 245)) ;
    }
  }
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_8988 = var_code_8988.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) ;
  {
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_5 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_8988, ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_WO_OPERAND generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                     GGS_uint & ioArgument_ioWordAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9590 ;
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRW:
    {
      var_code_9590 = GGS_uint (uint32_t (64U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_NOP:
    {
      var_code_9590 = GGS_uint (uint32_t (0U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRWDT:
    {
      var_code_9590 = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_OPTION_5F_:
    {
      var_code_9590 = GGS_uint (uint32_t (2U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_SLEEP:
    {
      var_code_9590 = GGS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  {
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_9590, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 265)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_TRIS generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_TRIS temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (temp_0.readProperty_mOpcode (), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 274)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_literalOperation generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                                       GGS_uint & ioArgument_ioWordAddress,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_10527 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3072U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      var_code_10527 = GGS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3840U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_10527 = var_code_10527.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 291)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_10527, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 292)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                       GGS_uint & ioArgument_ioWordAddress,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_11148 ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_11148, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 301)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_targetAddress_11148.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_2 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (var_targetAddress_11148.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), fixItArray4  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 307)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_binary_code??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_binary_5F_code_3F__3F__26__21_ (const GGS_baseline_5F_assembly_5F_instructionList constinArgument_inAssemblyInstructionList,
                                                                  const GGS_uint constinArgument_inROMsize,
                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                  GGS_uint & outArgument_outUsedROMsize,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GGS_baseline_5F_symbolTable var_symbolTable_12155 = GGS_baseline_5F_symbolTable::init (inCompiler COMMA_HERE) ;
  GGS_uint var_currentWordAddress_12205 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12235 (constinArgument_inAssemblyInstructionList, EnumerationOrder::up) ;
  while (enumerator_12235.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12235.current_mInstruction (HERE).ptr (), var_symbolTable_12155, var_currentWordAddress_12205, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 325)) ;
    enumerator_12235.gotoNextObject () ;
  }
  GGS_uint var_lastAddressForFirstPass_12374 = var_currentWordAddress_12205 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12205 ;
  var_currentWordAddress_12205 = GGS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GGS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 331)) ;
  }
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12574 (constinArgument_inAssemblyInstructionList, EnumerationOrder::up) ;
  while (enumerator_12574.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12574.current_mInstruction (HERE).ptr (), var_symbolTable_12155, ioArgument_ioListFileContents, var_currentWordAddress_12205, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
    {
    routine_checkCurrentEmitAddress_3F_ (var_currentWordAddress_12205.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)) ;
    }
    enumerator_12574.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_12374.objectCompare (var_currentWordAddress_12205)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12205.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (var_lastAddressForFirstPass_12374.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 342)).add_operation (GGS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_12374.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), GGS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12374.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (GGS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 346)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_BitTest addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 12)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_SEMI_COLON addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 19)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_IncDec addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 26)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 40)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 47)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_STATIC_REPEAT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 61)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_MNOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_F addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRW addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRWDT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_SLEEP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FB addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_NOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checkbank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checknobank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel_register addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_do_while addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 134)) ;
  }
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_midrange_5F_partList enumerator_4362 (temp_1.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_4362.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_4362.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 136)) ;
    }
    enumerator_4362.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_nobanksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_savebank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 150)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_structured_5F_if temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 157)) ;
  }
  {
  const GGS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 158)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FD addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_literalOperation addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addMidRangeUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (const GGS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_midrange_5F_instructionList enumerator_6111 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_6111.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) enumerator_6111.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 186)) ;
    enumerator_6111.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'midrange_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GGS_stringset function_midrange_5F_computeUsedRoutines (const GGS_midrange_5F_interruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                        const GGS_midrange_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 197)) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_6657 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
  while (enumerator_6657.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_6657.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 200)) ;
    }
    enumerator_6657.gotoNextObject () ;
  }
  GGS_stringset var_s_6853 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas", 207)).isValid ()) {
    uint32_t variant_6872 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas", 207)).uintValue () ;
    bool loop_6872 = true ;
    while (loop_6872) {
      loop_6872 = GGS_bool (ComparisonKind::notEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6872) {
        loop_6872 = GGS_bool (ComparisonKind::notEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6872 && (0 == variant_6872)) {
        loop_6872 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas", 207)) ;
      }
      if (loop_6872) {
        variant_6872 -- ;
        var_s_6853 = result_outUsedRoutineSet ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_7020 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
        while (enumerator_7020.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_7020.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 211)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_7020.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 212)) ;
              }
            }
          }
          enumerator_7020.gotoNextObject () ;
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

static const C_galgas_type_descriptor * functionArgs_midrange_5F_computeUsedRoutines [3] = {
  & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList,
  & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_midrange_5F_computeUsedRoutines (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GGS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_interruptDefinitionList operand0 = GGS_midrange_5F_interruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                   inCompiler
                                                                                                                   COMMA_THERE) ;
  const GGS_midrange_5F_routineDefinitionList operand1 = GGS_midrange_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  return function_midrange_5F_computeUsedRoutines (operand0,
                                                   operand1,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_midrange_5F_computeUsedRoutines ("midrange_computeUsedRoutines",
                                                                                 functionWithGenericHeader_midrange_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 2,
                                                                                 functionArgs_midrange_5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_NULL::getter_instructionLength (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_instructionLength (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_instructionLength (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_actualInstruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_actualInstruction::getter_instructionLength (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_JUMP::getter_instructionLength (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 36)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 37)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 39)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outLength.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 40)) ;
    }
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JSR instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_JSR::getter_instructionLength (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = result_outLength.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 50)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 52)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outLength = result_outLength.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 53)) ;
    }
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_MNOP instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::getter_instructionLength (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outLength = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_incDecRegisterInCondition instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::getter_instructionLength (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outLength = GGS_uint (uint32_t (2U)) ;
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 11)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 34)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 57)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 59)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 96)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 103)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 125)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 132)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 153)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 157)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 161)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 166)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentAddress,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioCurrentAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP instructionUsesGOTOorCALL'
//
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
  cEnumerator_midrange_5F_instructionList enumerator_2926 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_2926.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 89)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2926.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) enumerator_2926.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 93)) ;
    enumerator_2926.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_nobanksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 126)) ;
    }
  }
  ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 128)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_savebank build_midrange_ipic_instructionList'
//
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
  GGS_registerExpression var_STATUS_5F_register_5003 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 151)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5189 ;
  GGS_bitSliceTable joker_5398 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_5003.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 156)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5189, joker_5398, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 154)) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5520 ;
  const GGS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  GGS_bitSliceTable joker_5724 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 167)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5520, joker_5724, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 165)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 177)), var_STATUS_5F_IPICregisterDescription_5189, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 183)), var_save_5F_IPICregisterDescription_5520, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181)) ;
  GGS_uint var_finalBank_6275 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_savebank temp_3 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_3.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6275, GGS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 187)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_savebank temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mEndOfSaveBankInstruction (), GGS_string ("useless saving: execution does reach the end of \"savebank\" instruction list"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 203)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_savebank temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 208)), var_save_5F_IPICregisterDescription_5520, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 214)), var_STATUS_5F_IPICregisterDescription_5189, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel build_midrange_ipic_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_banksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 234)) ;
    }
  }
  GGS_registerExpression var_STATUS_5F_register_8087 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 240)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8274 ;
  GGS_bitSliceTable var_bitSliceTable_8326 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_8087.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8274, var_bitSliceTable_8326, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 244)) ;
  const GGS_midrange_5F_instruction_5F_banksel temp_3 = this ;
  GGS_lstring var_RP_8549 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_8646 ;
  GGS_uint var_sliceSize_8665 ;
  var_bitSliceTable_8326.method_searchKey (var_RP_8549, var_rpIndex_8646, var_sliceSize_8665, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 254)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_8665.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8665.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GGS_midrange_5F_instruction_5F_banksel temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GGS_midrange_5F_instruction_5F_banksel temp_10 = this ;
        test_9 = temp_10.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_9) {
          const GGS_midrange_5F_instruction_5F_banksel temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticWarning (temp_11.readProperty_mBankIndex ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GGS_midrange_5F_instruction_5F_banksel temp_14 = this ;
      test_13 = GGS_bool (ComparisonKind::greaterOrEqual, temp_14.readProperty_mBankIndex ().readProperty_uint ().objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_banksel temp_15 = this ;
        const GGS_midrange_5F_instruction_5F_banksel temp_16 = this ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mBankIndex ().readProperty_location (), GGS_string ("the bank ").add_operation (temp_16.readProperty_mBankIndex ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GGS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GGS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)) ;
      }
    }
    if (kBoolFalse == test_13) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 265)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GGS_midrange_5F_instruction_5F_banksel temp_19 = this ;
          GGS_uint var_shiftedBank_9409 = temp_19.readProperty_mBankIndex ().readProperty_uint () ;
          GGS_uint var_idx_9458 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_8665.isValid ()) {
            uint32_t variant_9470 = var_sliceSize_8665.uintValue () ;
            bool loop_9470 = true ;
            while (loop_9470) {
              loop_9470 = GGS_bool (ComparisonKind::lowerThan, var_idx_9458.objectCompare (var_sliceSize_8665)).isValid () ;
              if (loop_9470) {
                loop_9470 = GGS_bool (ComparisonKind::lowerThan, var_idx_9458.objectCompare (var_sliceSize_8665)).boolValue () ;
              }
              if (loop_9470 && (0 == variant_9470)) {
                loop_9470 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 268)) ;
              }
              if (loop_9470) {
                variant_9470 -- ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_9548 ;
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::equal, var_shiftedBank_9409.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    var_op_9548 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 271)) ;
                  }
                }
                if (kBoolFalse == test_20) {
                  var_op_9548 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 273)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel temp_21 = this ;
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_21.readProperty_mInstructionLocation (), var_op_9548, var_STATUS_5F_IPICregisterDescription_8274, var_rpIndex_8646.add_operation (var_idx_9458, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 275)) ;
                var_idx_9458.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 280)) ;
                var_shiftedBank_9409 = var_shiftedBank_9409.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)) ;
              }
            }
          }
          const GGS_midrange_5F_instruction_5F_banksel temp_22 = this ;
          ioArgument_ioCurrentBank = temp_22.readProperty_mBankIndex ().readProperty_uint () ;
        }
      }
      if (kBoolFalse == test_18) {
        GGS_bool var_optimize_10020 = GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) ;
        const GGS_midrange_5F_instruction_5F_banksel temp_23 = this ;
        GGS_uint var_shiftedBank_10097 = temp_23.readProperty_mBankIndex ().readProperty_uint () ;
        const GGS_midrange_5F_instruction_5F_banksel temp_24 = this ;
        GGS_uint var_shiftedXorBank_10146 = temp_24.readProperty_mBankIndex ().readProperty_uint ().operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 287)) ;
        GGS_uint var_idx_10214 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_8665.isValid ()) {
          uint32_t variant_10226 = var_sliceSize_8665.uintValue () ;
          bool loop_10226 = true ;
          while (loop_10226) {
            loop_10226 = GGS_bool (ComparisonKind::lowerThan, var_idx_10214.objectCompare (var_sliceSize_8665)).isValid () ;
            if (loop_10226) {
              loop_10226 = GGS_bool (ComparisonKind::lowerThan, var_idx_10214.objectCompare (var_sliceSize_8665)).boolValue () ;
            }
            if (loop_10226 && (0 == variant_10226)) {
              loop_10226 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 289)) ;
            }
            if (loop_10226) {
              variant_10226 -- ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_10304 ;
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_10097.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 291)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_op_10304 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 292)) ;
                }
              }
              if (kBoolFalse == test_25) {
                var_op_10304 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 294)) ;
              }
              enumGalgasBool test_26 = kBoolTrue ;
              if (kBoolTrue == test_26) {
                test_26 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_10146.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_10020.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)).boolEnum () ;
                if (kBoolTrue == test_26) {
                  const GGS_midrange_5F_instruction_5F_banksel temp_27 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_27.readProperty_mInstructionLocation (), var_op_10304, var_STATUS_5F_IPICregisterDescription_8274, var_rpIndex_8646.add_operation (var_idx_10214, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 301)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)) ;
                }
              }
              if (kBoolFalse == test_26) {
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10304, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_8646.add_operation (var_idx_10214, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)) ;
              }
              var_idx_10214.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 307)) ;
              var_shiftedBank_10097 = var_shiftedBank_10097.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)) ;
              var_shiftedXorBank_10146 = var_shiftedXorBank_10146.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)) ;
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
//
//Overriding extension method '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 331)) ;
    }
  }
  GGS_registerExpression var_STATUS_5F_register_11931 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 335)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12243 ;
  GGS_bitSliceTable var_bitSliceTable_12298 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_11931.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12243, var_bitSliceTable_12298, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 339)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_3 = this ;
  GGS_lstring var_RP_12344 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_12441 ;
  GGS_uint var_sliceSize_12460 ;
  var_bitSliceTable_12298.method_searchKey (var_RP_12344, var_rpIndex_12441, var_sliceSize_12460, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 349)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_12460.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12460.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)) ;
    }
  }
  GGS_uintlist var_registerAddressList_12775 ;
  GGS_uint var_size_12810 ;
  GGS_registerProtection var_protection_12832 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_7 = this ;
  GGS_bitSliceTable joker_12819_2 ; // Joker input parameter
  GGS_string joker_12819_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_12775, var_size_12810, joker_12819_2, joker_12819_1, var_protection_12832, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 354)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mRegister ().readProperty_mRegisterName (), GGS_bool (false), var_protection_12832, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 361)) ;
  GGS_uint var_address_12981 ;
  var_registerAddressList_12775.method_first (var_address_12981, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 362)) ;
  GGS_uint var_newBank_13002 = var_address_12981.right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)) ;
  GGS_sint_36__34_ var_offset_13106 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_9 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_9.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_13106, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 365)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::lowerThan, var_offset_13106.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index value (").add_operation (var_offset_13106.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)).add_operation (GGS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)) ;
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_13106.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)).objectCompare (var_size_12810)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("maximum index value is ").add_operation (var_size_12810.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)) ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, var_newBank_13002.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_16) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_18 = this ;
        test_17 = temp_18.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_17) {
          const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticWarning (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), fixItArray20  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_newBank_13002.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_22 = this ;
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("the bank ").add_operation (var_newBank_13002.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GGS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GGS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), fixItArray23  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)) ;
      }
    }
    if (kBoolFalse == test_21) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)))).boolEnum () ;
        if (kBoolTrue == test_24) {
          GGS_uint var_shiftedBank_13884 = var_newBank_13002 ;
          GGS_uint var_idx_13920 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_12460.isValid ()) {
            uint32_t variant_13932 = var_sliceSize_12460.uintValue () ;
            bool loop_13932 = true ;
            while (loop_13932) {
              loop_13932 = GGS_bool (ComparisonKind::lowerThan, var_idx_13920.objectCompare (var_sliceSize_12460)).isValid () ;
              if (loop_13932) {
                loop_13932 = GGS_bool (ComparisonKind::lowerThan, var_idx_13920.objectCompare (var_sliceSize_12460)).boolValue () ;
              }
              if (loop_13932 && (0 == variant_13932)) {
                loop_13932 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 381)) ;
              }
              if (loop_13932) {
                variant_13932 -- ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_14010 ;
                enumGalgasBool test_25 = kBoolTrue ;
                if (kBoolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_13884.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 383)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (kBoolTrue == test_25) {
                    var_op_14010 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 384)) ;
                  }
                }
                if (kBoolFalse == test_25) {
                  var_op_14010 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 386)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_26 = this ;
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_26.readProperty_mInstructionLocation (), var_op_14010, var_STATUS_5F_IPICregisterDescription_12243, var_rpIndex_12441.add_operation (var_idx_13920, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 392)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 388)) ;
                var_idx_13920.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 393)) ;
                var_shiftedBank_13884 = var_shiftedBank_13884.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394)) ;
              }
            }
          }
          ioArgument_ioCurrentBank = var_newBank_13002 ;
        }
      }
      if (kBoolFalse == test_24) {
        GGS_bool var_optimize_14469 = GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) ;
        GGS_uint var_shiftedBank_14546 = var_newBank_13002 ;
        GGS_uint var_shiftedXorBank_14582 = var_newBank_13002.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 400)) ;
        GGS_uint var_idx_14637 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_12460.isValid ()) {
          uint32_t variant_14649 = var_sliceSize_12460.uintValue () ;
          bool loop_14649 = true ;
          while (loop_14649) {
            loop_14649 = GGS_bool (ComparisonKind::lowerThan, var_idx_14637.objectCompare (var_sliceSize_12460)).isValid () ;
            if (loop_14649) {
              loop_14649 = GGS_bool (ComparisonKind::lowerThan, var_idx_14637.objectCompare (var_sliceSize_12460)).boolValue () ;
            }
            if (loop_14649 && (0 == variant_14649)) {
              loop_14649 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 402)) ;
            }
            if (loop_14649) {
              variant_14649 -- ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_14727 ;
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                test_27 = GGS_bool (ComparisonKind::equal, var_shiftedBank_14546.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 404)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_27) {
                  var_op_14727 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 405)) ;
                }
              }
              if (kBoolFalse == test_27) {
                var_op_14727 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 407)) ;
              }
              enumGalgasBool test_28 = kBoolTrue ;
              if (kBoolTrue == test_28) {
                test_28 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_14582.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_14469.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)).boolEnum () ;
                if (kBoolTrue == test_28) {
                  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_29 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_29.readProperty_mInstructionLocation (), var_op_14727, var_STATUS_5F_IPICregisterDescription_12243, var_rpIndex_12441.add_operation (var_idx_14637, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 414)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 410)) ;
                }
              }
              if (kBoolFalse == test_28) {
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14727, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_12441.add_operation (var_idx_14637, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)) ;
              }
              var_idx_14637.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)) ;
              var_shiftedBank_14546 = var_shiftedBank_14546.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 421)) ;
              var_shiftedXorBank_14582 = var_shiftedXorBank_14582.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_13002 ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FD build_midrange_ipic_instructionList'
//
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16341 ;
  const GGS_midrange_5F_instruction_5F_FD temp_0 = this ;
  GGS_bitSliceTable joker_16369 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16341, joker_16369, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 443)) ;
  const GGS_midrange_5F_instruction_5F_FD temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_IPICregisterDescription_16341, temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 452)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_F build_midrange_ipic_instructionList'
//
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17273 ;
  const GGS_midrange_5F_instruction_5F_F temp_0 = this ;
  GGS_bitSliceTable joker_17461 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17273, joker_17461, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 476)) ;
  const GGS_midrange_5F_instruction_5F_F temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mFAinstruction (), var_IPICregisterDescription_17273, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 485)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FB build_midrange_ipic_instructionList'
//
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18418 ;
  GGS_bitSliceTable var_bitSliceTable_18451 ;
  const GGS_midrange_5F_instruction_5F_FB temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18418, var_bitSliceTable_18451, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 508)) ;
  GGS_uint var_bitNumber_18613 ;
  const GGS_midrange_5F_instruction_5F_FB temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18451, var_bitNumber_18613, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 517)) ;
  const GGS_midrange_5F_instruction_5F_FB temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_18418, var_bitNumber_18613, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 524)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR build_midrange_ipic_instructionList'
//
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
  GGS_bool var_isNoReturn_19526 ;
  GGS_uint var_requiredBank_19542 ;
  GGS_uint var_returnedBank_19560 ;
  GGS_bool var_preservesBank_19578 ;
  const GGS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_19526, var_requiredBank_19542, var_returnedBank_19560, var_preservesBank_19578, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 548)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_19542.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 549)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_19542.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 549)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JSR temp_2 = this ;
      GGS_string var_errorMessage_19682 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)).add_operation (var_requiredBank_19542.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)) ;
      var_errorMessage_19682.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 551)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 552)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_19682.plusAssign_operation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 553)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_19682.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)) ;
      }
      const GGS_midrange_5F_instruction_5F_JSR temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_19682, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_19526.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_JSR temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 560)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_19578.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 562)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_19560 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_JSR temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_JSR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 569)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 570)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 566)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrangeInstruction_5F_checkbank temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBankIndex ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_midrangeInstruction_5F_checkbank temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 590)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 591)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_midrangeInstruction_5F_checkbank temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 592)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GGS_midrangeInstruction_5F_checkbank temp_8 = this ;
        test_7 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GGS_midrangeInstruction_5F_checkbank temp_9 = this ;
          const GGS_midrangeInstruction_5F_checkbank temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)).add_operation (GGS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)) ;
        }
      }
    }
  }
  const GGS_midrangeInstruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 615)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_midrangeInstruction_5F_checknobank temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)).add_operation (GGS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 617)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'
//
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
  GGS_bool var_isNoReturn_23121 ;
  GGS_uint var_requiredBank_23137 ;
  GGS_uint var_returnedBank_23155 ;
  GGS_bool var_preservesBank_23173 ;
  const GGS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_23121, var_requiredBank_23137, var_returnedBank_23155, var_preservesBank_23173, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 637)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_23137.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_23137.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_CALL temp_2 = this ;
      GGS_string var_errorMessage_23277 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (var_requiredBank_23137.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)) ;
      var_errorMessage_23277.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 640)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_23277.plusAssign_operation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 642)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_23277.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)) ;
      }
      const GGS_midrange_5F_instruction_5F_CALL temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23277, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 646)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_23121.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_CALL temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 649)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_23173.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23155 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_CALL temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_CALL temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_CALL::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'
//
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
  GGS_bool var_isNoReturn_24695 ;
  GGS_uint var_requiredBank_24711 ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  GGS_uint joker_24724 ; // Joker input parameter
  GGS_bool joker_24727 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_24695, var_requiredBank_24711, joker_24724, joker_24727, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 676)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_24711.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_24711.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JUMP temp_2 = this ;
      GGS_string var_errorMessage_24820 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (var_requiredBank_24711.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)) ;
      var_errorMessage_24820.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 679)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_24820.plusAssign_operation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 681)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_24820.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)) ;
      }
      const GGS_midrange_5F_instruction_5F_JUMP temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_24820, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 685)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_24695.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 687)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_JUMP temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 688)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 695)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 696)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'
//
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
  GGS_bool var_isNoReturn_26279 ;
  GGS_uint var_requiredBank_26295 ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  GGS_uint joker_26308 ; // Joker input parameter
  GGS_bool joker_26311 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26279, var_requiredBank_26295, joker_26308, joker_26311, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 715)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_26295.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_26295.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_GOTO temp_2 = this ;
      GGS_string var_errorMessage_26404 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (var_requiredBank_26295.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)) ;
      var_errorMessage_26404.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 718)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_26404.plusAssign_operation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 720)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_26404.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)) ;
      }
      const GGS_midrange_5F_instruction_5F_GOTO temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26404, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 724)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_26279.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 726)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_GOTO temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 727)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 731)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'
//
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 751)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'
//
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 770)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'
//
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 789)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'
//
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 808)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'
//
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
  GGS_sint_36__34_ var_result_30890 ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30890, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 827)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_30890.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_30890.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 829)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_literalOperation temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_30890.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_literalOperation temp_4 = this ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_30890.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 833)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 856)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_MNOP temp_4 = this ;
  const GGS_midrange_5F_instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 859)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'
//
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
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 881)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 884)) ;
    }
    break ;
  }
  GGS_uint var_finalBank_33194 = ioArgument_ioCurrentBank ;
  GGS_string var_label_30__33234 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 889)) ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__33234, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)) ;
  {
  const GGS_midrange_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33194, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 891)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33194)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GGS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_FOREVER temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_30__33234, temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 910)) ;
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'
//
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
  GGS_sint_36__34_ var_lowerBound_34845 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34845, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 933)) ;
  GGS_sint_36__34_ var_upperBound_34955 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_34955, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 934)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_34845.objectCompare (var_upperBound_34955)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_34845.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (var_upperBound_34955.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_34955.substract_operation (var_lowerBound_34845, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 938)).objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_34955.substract_operation (var_lowerBound_34845, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).add_operation (GGS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)) ;
      }
    }
  }
  GGS_uint var_finalBank_35360 = ioArgument_ioCurrentBank ;
  GGS_constantMap var_tempConstantMap_35392 = constinArgument_inConstantMap ;
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_35392.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_34845, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 944)) ;
  }
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35392, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35360, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 945)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35360)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 961)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 963)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list contains an endless loop"), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 964)) ;
    }
  }
  GGS_sint_36__34_ var_idx_36124 = var_lowerBound_34845.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 967)) ;
  if (var_upperBound_34955.substract_operation (var_lowerBound_34845, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).isValid ()) {
    uint32_t variant_36147 = var_upperBound_34955.substract_operation (var_lowerBound_34845, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).uintValue () ;
    bool loop_36147 = true ;
    while (loop_36147) {
      GGS_bool test_16 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_36124.objectCompare (var_upperBound_34955)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_36147 = test_16.isValid () ;
      if (loop_36147) {
        loop_36147 = test_16.boolValue () ;
      }
      if (loop_36147 && (0 == variant_36147)) {
        loop_36147 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)) ;
      }
      if (loop_36147) {
        variant_36147 -- ;
        GGS_constantMap var_constantMap_36253 = constinArgument_inConstantMap ;
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = this ;
        var_constantMap_36253.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_36124, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)) ;
        }
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = this ;
        routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36253, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 971)) ;
        }
        var_idx_36124.plusAssign_operation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 986)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'
//
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37460 ;
  GGS_bitSliceTable var_bitSliceTable_37493 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37460, var_bitSliceTable_37493, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1005)) ;
  GGS_uint var_bitNumber_37655 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37493, var_bitNumber_37655, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1014)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37460, var_bitNumber_37655, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1021)) ;
  GGS_bool var_unusedContinuesInSequence_37892 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_37892, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1029)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'
//
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39769 ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_0 = this ;
  GGS_bitSliceTable joker_39797 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39769, joker_39797, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1081)) ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (constinArgument_inInstructionLocation, var_IPICregisterDescription_39769, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1097)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1091)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                             GGS_uint & outArgument_outInstructionCount,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1105)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstructionCount = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outInstructionCount = GGS_uint (uint32_t (2U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'
//
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
  callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1132)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                   GGS_uint & outArgument_outInstructionCount,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1147)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1146)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_midrange_5F_andCondition temp_1 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1167)) ;
      const GGS_midrange_5F_andCondition temp_2 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1180)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_label_30__42925 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    const GGS_midrange_5F_andCondition temp_3 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, var_label_30__42925, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1195)) ;
    const GGS_midrange_5F_andCondition temp_4 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1208)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__42925, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                GGS_uint & outArgument_outInstructionCount,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_countLeft_44104 ;
  const GGS_midrange_5F_andCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_44104, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1230)) ;
  GGS_uint var_countRight_44214 ;
  const GGS_midrange_5F_andCondition temp_1 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44214, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1234)) ;
  outArgument_outInstructionCount = var_countLeft_44104.add_operation (var_countRight_44214, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1238)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'
//
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
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_45001 ;
  GGS_bitSliceTable var_bitSliceTable_45034 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_45001, var_bitSliceTable_45034, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1255)) ;
  GGS_uint var_bitNumber_45196 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_45034, var_bitNumber_45196, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1264)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_45001, var_bitNumber_45196, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1271)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (constinArgument_inInstructionLocation, GGS_lstring::init_21__21_ (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1280)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1281)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1277)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_computeInstructionCountForCondition (const GGS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                  GGS_uint & outArgument_outInstructionCount,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GGS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'
//
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
  GGS_bool var_generateComplementaryCondition_46559 = GGS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_uint var_directCount_46709 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GGS_bool (true), var_directCount_46709, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1311)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_3 = this ;
        test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1312)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_directCount_46709.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1313)) ;
        }
      }
      GGS_uint var_complementaryCount_46893 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_4 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GGS_bool (false), var_complementaryCount_46893, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1315)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1316)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_complementaryCount_46893.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1317)) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::lowerThan, var_complementaryCount_46893.objectCompare (var_directCount_46709)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_generateComplementaryCondition_46559 = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GGS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (var_directCount_46709.substract_operation (var_complementaryCount_46893, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GGS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_directCount_46709.substract_operation (var_complementaryCount_46893, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1324)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1326)) ;
        }
      }
    }
  }
  GGS_uint var_elseBranchFinalBank_47527 = ioArgument_ioCurrentBank ;
  GGS_uint var_thenBranchFinalBank_47575 = ioArgument_ioCurrentBank ;
  GGS_bool var_elseContinuesInSequence_47623 ;
  GGS_bool var_thenContinuesInSequence_47659 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_46559.boolEnum () ;
    if (kBoolTrue == test_9) {
      GGS_string var_label_5F_nextCondition_47747 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      GGS_string var_label_5F_endOfIfinstruction_47844 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_10 = this ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_11 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_47747, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_12 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47527, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47623, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1352)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::greaterThan, temp_14.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1368)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_15 = this ;
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_16 = this ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_15.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_47844, temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_47747, temp_17.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_18 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47575, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47659, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1372)) ;
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_20 = this ;
        test_19 = GGS_bool (ComparisonKind::greaterThan, temp_20.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1387)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_21 = this ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_47844, temp_21.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GGS_string var_label_5F_nextCondition_49741 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    GGS_string var_label_5F_endOfIfinstruction_49838 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_22 = this ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_23 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_49741, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_24 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47575, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47659, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1409)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_26 = this ;
      test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1425)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_27 = this ;
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_28 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_27.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_49838, temp_28.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426)) ;
      }
    }
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_29 = this ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_49741, temp_29.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_30 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47527, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47623, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1429)) ;
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_32 = this ;
      test_31 = GGS_bool (ComparisonKind::greaterThan, temp_32.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1444)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_31) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_33 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_49838, temp_33.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445)) ;
      }
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    test_34 = GGS_bool (ComparisonKind::equal, var_elseBranchFinalBank_47527.objectCompare (var_thenBranchFinalBank_47575)).boolEnum () ;
    if (kBoolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_47527 ;
    }
  }
  if (kBoolFalse == test_34) {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_35 = this ;
    TC_Array <FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GGS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451)) ;
    var_elseBranchFinalBank_47527 = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47659.operator_or (var_elseContinuesInSequence_47623 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1455)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'
//
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
  GGS_string var_labelInstructionBegin_52702 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_labelInstructionBegin_52702, temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
  GGS_uint var_finalBank_52993 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_52993, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1479)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_52993)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1495)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_5 = this ;
  cEnumerator_midrange_5F_partList enumerator_53564 (temp_5.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_53564.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_53564.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1499)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GGS_midrange_5F_instruction_5F_do_5F_while temp_7 = this ;
        callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53564.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_52702, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GGS_string var_nextBranchLabel_54037 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_8 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53564.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_54037, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1515)) ;
      GGS_uint var_bank_54480 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_53564.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54480, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1529)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54480)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_53564.current_mEndOfPartLocation (HERE), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1545)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_11 = this ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_12 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_11.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_labelInstructionBegin_52702, temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_nextBranchLabel_54037, temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548)) ;
    }
    enumerator_53564.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'
//
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
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_55998 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_55998 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1571)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_baseCode_55998 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
  }
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_56307 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  GGS_bitSliceTable joker_56335 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_56307, joker_56335, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1576)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_baseCode_55998, var_IPICregisterDescription_56307, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1586)) ;
  GGS_bool var_unusedContinuesInSequence_56570 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56570, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1594)) ;
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
  GGS_string var_generationOptimizationMessages_57479 = GGS_string::makeEmptyString () ;
  GGS_routineMap var_routineMap_57573 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_57679 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_57679.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_57679.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_57679.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_57679.current_mRequiredBank (HERE).readProperty_location (), GGS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1629)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_57679.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_57679.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_57679.current_mReturnedBank (HERE).readProperty_location (), GGS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1632)) ;
      }
    }
    {
    var_routineMap_57573.setter_insertKey (enumerator_57679.current_mRoutineName (HERE), enumerator_57679.current_mIsNoReturn (HERE), enumerator_57679.current_mRequiredBank (HERE).readProperty_uint (), enumerator_57679.current_mReturnedBank (HERE).readProperty_uint (), enumerator_57679.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1634)) ;
    }
    enumerator_57679.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1652)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_routineMap_57573.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GGS_bool var_isNoReturn_59249 ;
      GGS_uint var_requiredBank_59271 ;
      GGS_uint joker_59284 ; // Joker input parameter
      GGS_bool joker_59287 ; // Joker input parameter
      var_routineMap_57573.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), inCompiler COMMA_HERE), var_isNoReturn_59249, var_requiredBank_59271, joker_59284, joker_59287, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
      GGS_location var_mainDeclarationLocation_59309 = var_routineMap_57573.getter_locationForKey (GGS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1660)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_isNoReturn_59249.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59309, GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1662)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_59271.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59309, GGS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_5) {
    TC_Array <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GGS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1668)) ;
  }
  GGS_uint var_localLabelIndex_59892 = GGS_uint (uint32_t (0U)) ;
  {
  routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57573, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57479, var_localLabelIndex_59892, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1672)) ;
  }
  GGS_uint var_currentPage_60322 = GGS_uint (uint32_t (0U)) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_60340 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_60340 = true ;
    while (loop_60340) {
      loop_60340 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_60322.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_60340) {
        loop_60340 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_60322.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_60340 && (0 == variant_60340)) {
        loop_60340 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1689)) ;
      }
      if (loop_60340) {
        variant_60340 -- ;
        GGS_bool var_orgGenerated_60418 = GGS_bool (ComparisonKind::equal, var_currentPage_60322.objectCompare (GGS_uint (uint32_t (0U)))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_60574 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
        while (enumerator_60574.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_60574.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_60322)).boolEnum () ;
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_orgGenerated_60418.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (var_currentPage_60322.multiply_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694)) ;
                  var_orgGenerated_60418 = GGS_bool (true) ;
                }
              }
              GGS_uint var_currentBank_60859 = enumerator_60574.current_mRequiredBank (HERE).readProperty_uint () ;
              GGS_routineKind var_routineKind_60917 ;
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = enumerator_60574.current_mIsNoReturn (HERE).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_routineKind_60917 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1700)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_routineKind_60917 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1702)) ;
              }
              outArgument_outGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (enumerator_60574.current_mRoutineName (HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1704)) ;
              GGS_bool var_continuesInSequence_61539 ;
              {
              routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_60574.current_mInstructionList (HERE), var_routineMap_57573, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_59892, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57479, constinArgument_inTotalBankCount, var_currentBank_60859, enumerator_60574.current_mPreservesBank (HERE), var_continuesInSequence_61539, var_routineKind_60917, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1705)) ;
              }
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = enumerator_60574.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_60574.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GGS_bool (ComparisonKind::notEqual, var_currentBank_60859.objectCompare (enumerator_60574.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_60574.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution will not set bank selection to ").add_operation (enumerator_60574.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)) ;
                }
              }
              enumGalgasBool test_16 = kBoolTrue ;
              if (kBoolTrue == test_16) {
                test_16 = enumerator_60574.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_61539 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_60574.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1724)) ;
                }
              }
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = enumerator_60574.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1727)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (enumerator_60574.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
                }
              }
            }
          }
          enumerator_60574.gotoNextObject () ;
        }
        var_currentPage_60322.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GGS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)) ;
      GGS_uint var_idx_62680 = GGS_uint (uint32_t (0U)) ;
      GGS_uint var_currentAddress_62702 = GGS_uint (uint32_t (0U)) ;
      cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62730 (outArgument_outGeneratedInstructionList, EnumerationOrder::up) ;
      while (enumerator_62730.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62730.current_mInstruction (HERE).ptr (), var_currentAddress_62702, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1743)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_idx_62680.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).getter_stringByLeftPadding (GGS_uint (uint32_t (5U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)) ;
        callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62730.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1745)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)) ;
        var_idx_62680.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
        enumerator_62730.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62702.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)).add_operation (GGS_string (" instructions.\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1761)) ;
  outArgument_outShouldSavePCLATH = GGS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_63565 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_63565.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_63565.current_mPage (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GGS_bool (true) ;
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_63565.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_63565.current_mPage (HERE).readProperty_location (), GGS_string ("invalid value (").add_operation (enumerator_63565.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GGS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GGS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)) ;
      }
    }
    enumerator_63565.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GGS_bool (false) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_64142 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), EnumerationOrder::up) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
      if (enumerator_64142.hasCurrentObject () && bool_5) {
        while (enumerator_64142.hasCurrentObject () && bool_5) {
          cEnumerator_midrange_5F_instructionList enumerator_64233 (enumerator_64142.current_mInstructionList (HERE), EnumerationOrder::up) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
          if (enumerator_64233.hasCurrentObject () && bool_6) {
            while (enumerator_64233.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((cPtr_midrange_5F_instruction *) enumerator_64233.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1780)) ;
              enumerator_64233.gotoNextObject () ;
              if (enumerator_64233.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
              }
            }
          }
          enumerator_64142.gotoNextObject () ;
          if (enumerator_64142.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1784)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1786)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1789)) ;
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
  outArgument_outGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1816)), GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)), inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1818)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1819)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)) ;
      GGS_bool var_shouldSavePCLATH_66495 ;
      {
      routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_66495, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1826)) ;
      }
      outArgument_outGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (GGS_uint (uint32_t (4U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1833)) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_66675 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), EnumerationOrder::up) ;
      while (enumerator_66675.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inSharedRAMBankName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66675.current_mFirstSaveRegister (HERE), enumerator_66675.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66495, enumerator_66675.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66675.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1836)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66675.current_mFirstSaveRegister (HERE), enumerator_66675.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66495, enumerator_66675.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66675.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
          }
        }
        enumerator_66675.gotoNextObject () ;
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
  GGS_uintlist var_registerAddressList_68596 ;
  GGS_uint var_size_68623 ;
  GGS_registerProtection var_firstProtection_68637 ;
  GGS_bitSliceTable joker_68628_2 ; // Joker input parameter
  GGS_string joker_68628_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_68596, var_size_68623, joker_68628_2, joker_68628_1, var_firstProtection_68637, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1889)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_68637, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1890)) ;
  GGS_uint var_bankAccessibility_68755 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_68784 (var_registerAddressList_68596, EnumerationOrder::up) ;
  while (enumerator_68784.hasCurrentObject ()) {
    var_bankAccessibility_68755 = var_bankAccessibility_68755.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).left_shift_operation (enumerator_68784.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) ;
    enumerator_68784.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_bankAccessibility_68755.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)).add_operation (GGS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_size_68623.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (var_size_68623.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)) ;
    }
  }
  GGS_registerProtection var_secondProtection_69410 ;
  GGS_bitSliceTable joker_69401_2 ; // Joker input parameter
  GGS_string joker_69401_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_68596, var_size_68623, joker_69401_2, joker_69401_1, var_secondProtection_69410, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1902)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_69410, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1903)) ;
  var_bankAccessibility_68755 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_69550 (var_registerAddressList_68596, EnumerationOrder::up) ;
  while (enumerator_69550.hasCurrentObject ()) {
    var_bankAccessibility_68755 = var_bankAccessibility_68755.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).left_shift_operation (enumerator_69550.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) ;
    enumerator_69550.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, var_bankAccessibility_68755.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1908)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_68623.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1911)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (var_size_68623.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_68623.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (var_size_68623.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)) ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1917)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GGS_registerExpression var_first_5F_register_70244 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_70514 ;
      GGS_bitSliceTable joker_70550 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_70244.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_70514, joker_70550, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)) ;
      GGS_registerExpression var_second_5F_register_70591 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1935)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_70895 ;
      GGS_bitSliceTable joker_70932 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_second_5F_register_70591.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_70895, joker_70932, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)) ;
      GGS_registerExpression var_STATUS_5F_register_71011 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1950)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_71306 ;
      GGS_bitSliceTable joker_71343 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_71011.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1954)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_71306, joker_71343, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1952)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), var_first_5F_IPICregisterDescription_70514, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), var_STATUS_5F_IPICregisterDescription_71306, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), var_STATUS_5F_IPICregisterDescription_71306, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), var_second_5F_IPICregisterDescription_70895, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_11) {
          GGS_registerExpression var_reg_72104 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1969)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72531 ;
          GGS_bitSliceTable joker_72578 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_72104.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72531, joker_72578, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1972)) ;
          GGS_registerExpression var_PCLATH_5F_register_72665 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_72990 ;
          GGS_bitSliceTable joker_73029 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_72665.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_72990, joker_73029, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1987)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), var_PCLATH_5F_IPICregisterDescription_72990, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72531, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), var_PCLATH_5F_IPICregisterDescription_72990, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)) ;
        }
      }
      GGS_uint var_currentBank_73648 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_74028 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73648, GGS_bool (false), var_continuesInSequence_74028, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2002)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_continuesInSequence_74028.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2017)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2018)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_14) {
          GGS_registerExpression var_reg_74297 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74609 ;
          GGS_bitSliceTable joker_74656 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_74297.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74609, joker_74656, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)) ;
          GGS_registerExpression var_PCLATH_5F_register_74743 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2037)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2039)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_75067 ;
          GGS_bitSliceTable joker_75106 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_74743.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2043)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_75067, joker_75106, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2041)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74609, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), var_PCLATH_5F_IPICregisterDescription_75067, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), var_second_5F_IPICregisterDescription_70895, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), var_STATUS_5F_IPICregisterDescription_71306, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), var_first_5F_IPICregisterDescription_70514, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), var_first_5F_IPICregisterDescription_70514, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)) ;
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
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)) ;
  GGS_uintlist var_registerAddressList_77236 ;
  GGS_uint var_size_77263 ;
  GGS_registerProtection var_firstProtection_77277 ;
  GGS_bitSliceTable joker_77268_2 ; // Joker input parameter
  GGS_string joker_77268_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_77236, var_size_77263, joker_77268_2, joker_77268_1, var_firstProtection_77277, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2082)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_77277, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2083)) ;
  GGS_bool var_accessibleFromBank_30__77395 = GGS_bool (false) ;
  GGS_uint var_offset_77435 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_77465 (var_registerAddressList_77236, EnumerationOrder::up) ;
  bool bool_0 = var_accessibleFromBank_30__77395.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
  if (enumerator_77465.hasCurrentObject () && bool_0) {
    while (enumerator_77465.hasCurrentObject () && bool_0) {
      var_offset_77435 = enumerator_77465.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)) ;
      var_accessibleFromBank_30__77395 = GGS_bool (ComparisonKind::equal, enumerator_77465.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_77465.gotoNextObject () ;
      if (enumerator_77465.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__77395.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__77395.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_77263.objectCompare (GGS_uint (uint32_t (3U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (var_size_77263.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GGS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_77263.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (var_size_77263.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)) ;
      }
    }
  }
  GGS_uintlist var_saveStatusRegisterAddressList_78228 = var_registerAddressList_77236 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2100)) ;
  GGS_registerProtection var_secondProtection_78417 ;
  GGS_bitSliceTable joker_78408_2 ; // Joker input parameter
  GGS_string joker_78408_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_77236, var_size_77263, joker_78408_2, joker_78408_1, var_secondProtection_78417, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2101)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_78417, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2102)) ;
  var_saveStatusRegisterAddressList_78228 = var_saveStatusRegisterAddressList_78228.add_operation (var_registerAddressList_77236, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2103)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_size_77263.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (var_size_77263.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)) ;
    }
  }
  GGS_bool var_accessibleFromBank_31__78825 = GGS_bool (false) ;
  cEnumerator_uintlist enumerator_78860 (var_registerAddressList_77236, EnumerationOrder::up) ;
  bool bool_9 = var_accessibleFromBank_31__78825.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
  if (enumerator_78860.hasCurrentObject () && bool_9) {
    while (enumerator_78860.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78825 = GGS_bool (ComparisonKind::equal, enumerator_78860.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2110)).objectCompare (GGS_uint (uint32_t (128U)))) ;
      enumerator_78860.gotoNextObject () ;
      if (enumerator_78860.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78825.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__78825.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2112)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)).add_operation (GGS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)) ;
    }
  }
  GGS_bool var_offsetOk_79238 = GGS_bool (true) ;
  cEnumerator_uintlist enumerator_79261 (var_registerAddressList_77236, EnumerationOrder::up) ;
  bool bool_12 = var_offsetOk_79238.isValidAndTrue () ;
  if (enumerator_79261.hasCurrentObject () && bool_12) {
    while (enumerator_79261.hasCurrentObject () && bool_12) {
      var_offsetOk_79238 = GGS_bool (ComparisonKind::equal, var_offset_77435.objectCompare (enumerator_79261.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2118)))) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_offsetOk_79238.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GGS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (enumerator_79261.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GGS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GGS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (var_offset_77435.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GGS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)) ;
        }
      }
      enumerator_79261.gotoNextObject () ;
      if (enumerator_79261.hasCurrentObject ()) {
        bool_12 = var_offsetOk_79238.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2126)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_15) {
      GGS_registerExpression var_first_5F_register_79743 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_80013 ;
      GGS_bitSliceTable joker_80049 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_79743.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_80013, joker_80049, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)) ;
      GGS_registerExpression var_first_5F_register_5F_second_5F_byte_80090 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2144)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80393 ;
      GGS_bitSliceTable joker_80445 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_80090.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80393, joker_80445, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)) ;
      GGS_registerExpression var_STATUS_5F_register_80524 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2159)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80837 ;
      GGS_bitSliceTable joker_80874 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_80524.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80837, joker_80874, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2161)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), var_first_5F_IPICregisterDescription_80013, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), var_STATUS_5F_IPICregisterDescription_80837, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), var_STATUS_5F_IPICregisterDescription_80837, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80393, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_16) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_81652 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81972 ;
          GGS_bitSliceTable joker_82025 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81652.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81972, joker_82025, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2180)) ;
          GGS_registerExpression var_PCLATH_5F_register_82112 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_82443 ;
          GGS_bitSliceTable joker_82482 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_82112.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2197)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_82443, joker_82482, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2195)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), var_PCLATH_5F_IPICregisterDescription_82443, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81972, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), var_PCLATH_5F_IPICregisterDescription_82443, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)) ;
        }
      }
      GGS_uint var_currentBank_83107 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_83470 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_83107, GGS_bool (true), var_continuesInSequence_83470, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)) ;
      }
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_continuesInSequence_83470.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2225)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2226)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_19) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_83739 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (2U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2232)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84102 ;
          GGS_bitSliceTable joker_84156 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83739.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84102, joker_84156, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2234)) ;
          GGS_registerExpression var_PCLATH_5F_register_84243 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2247)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_84475 ;
          GGS_bitSliceTable joker_84693 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_84243.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2252)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_84475, joker_84693, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2250)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84102, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), var_PCLATH_5F_IPICregisterDescription_84475, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80393, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), var_STATUS_5F_IPICregisterDescription_80837, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), var_first_5F_IPICregisterDescription_80013, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), var_first_5F_IPICregisterDescription_80013, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_isLABELorORG (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GGS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABELorORG (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GGS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_NULL::getter_isNULL (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (true) ;
//---
  return result_outIsNULL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_GOTO nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 135)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GGS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GGS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_1 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, temp_1.readProperty_mIsDeletable (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                  const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                  GGS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GGS_uint var_currentAddress_6827 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_6993 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 169)).isValid ()) {
    uint32_t variant_7009 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 169)).uintValue () ;
    bool loop_7009 = true ;
    while (loop_7009) {
      loop_7009 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_6827.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6993.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).isValid () ;
      if (loop_7009) {
        loop_7009 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_6827.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6993.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).boolValue () ;
      }
      if (loop_7009 && (0 == variant_7009)) {
        loop_7009 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 169)) ;
      }
      if (loop_7009) {
        variant_7009 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GGS_midrange_5F_intermediate_5F_actualInstruction var_instr_7141 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6827, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) ;
          if (nullptr == var_instr_7141.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_7141 ;
            var_found_6993 = GGS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_currentAddress_6827.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 178)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                             const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                             GGS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                             GGS_stringset & outArgument_outReachedLabelSet,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GGS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 190)) ;
  GGS_uint var_currentAddress_7900 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_8066 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid ()) {
    uint32_t variant_8082 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 196)).uintValue () ;
    bool loop_8082 = true ;
    while (loop_8082) {
      loop_8082 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7900.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8066.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).isValid () ;
      if (loop_8082) {
        loop_8082 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7900.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8066.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).boolValue () ;
      }
      if (loop_8082 && (0 == variant_8082)) {
        loop_8082 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 196)) ;
      }
      if (loop_8082) {
        variant_8082 -- ;
        GGS_midrange_5F_intermediate_5F_instruction var_instruction_8211 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7900, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 199)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GGS_midrange_5F_intermediate_5F_actualInstruction var_instr_8301 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (var_instruction_8211.ptr ())) ;
          if (nullptr == var_instr_8301.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8301 ;
            var_found_8066 = GGS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG var_instr_8574 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (var_instruction_8211.ptr ())) ;
            if (nullptr == var_instr_8574.ptr ()) {
              test_1 = kBoolFalse ;
            }
            if (kBoolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_8574 ;
              var_found_8066 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL var_instr_8758 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_8211.ptr ())) ;
              if (nullptr == var_instr_8758.ptr ()) {
                test_2 = kBoolFalse ;
              }
              if (kBoolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_8758 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_8758.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 212)) ;
                var_currentAddress_7900.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 213)) ;
              }
            }
            if (kBoolFalse == test_2) {
              var_currentAddress_7900.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 215)) ;
            }
          }
        }
      }
    }
  }
}


