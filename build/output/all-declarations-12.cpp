#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                  const GALGAS_string constinArgument_inSourceFileName,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_760 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_760.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_760, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
    }
  }
  GALGAS_string var_listFileContents_1110 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1239 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_1239, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 24)) ;
  }
  switch (var_piccoloDeviceModel_1239.readProperty_mProcessorType ().enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 27)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  }
  GALGAS_bool var_hasInterrupt_1636 = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1689 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_1689.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_hasInterrupt_1636.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1689.current_mInterruptLocation (HERE), GALGAS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 34)) ;
      }
    }
    var_hasInterrupt_1636 = GALGAS_bool (true) ;
    enumerator_1689.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_2062 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_1239.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_1110, var_actualConfigurationMap_2062, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 39)) ;
  }
  GALGAS_constantMap var_constantMap_2161 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 46)) ;
  GALGAS_stringset var_usedRegisters_2195 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 47)) ;
  GALGAS_registerTable var_registerTable_2235 = var_piccoloDeviceModel_1239.readProperty_mRegisterTable () ;
  GALGAS_lstring var_romSizeString_2320 = GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)) ;
  {
  var_constantMap_2161.setter_insertKey (var_romSizeString_2320, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 51)) ;
  }
  cEnumerator_constantDefinitionList enumerator_2500 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_2500.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_2622 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_2500.current_mExpression (HERE).ptr (), var_registerTable_2235, var_constantMap_2161, var_result_2622, var_usedRegisters_2195, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 54)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_registerTable_2235.getter_hasKey (enumerator_2500.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 55)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2500.current_mConstantName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_2500.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      var_constantMap_2161.setter_insertKey (enumerator_2500.current_mConstantName (HERE), var_result_2622, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)) ;
      }
    }
    enumerator_2500.gotoNextObject () ;
  }
  GALGAS_ramBankTable var_ramBank_2959 = var_piccoloDeviceModel_1239.readProperty_mRamBankTable () ;
  GALGAS_declaredByteMap var_declaredByteMap_3251 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_2161, var_usedRegisters_2195, var_ramBank_2959, var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_listFileContents_1110, var_registerTable_2235, var_declaredByteMap_3251, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 63)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3691 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().add_operation (GALGAS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)).divide_operation (GALGAS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2161, var_piccoloDeviceModel_1239.readProperty_mSharedBankName (), var_registerTable_2235, constinArgument_inPiccoloModel, var_hasInterrupt_1636, var_generatedInstructionList_3691, var_listFileContents_1110, var_usedRegisters_2195, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 75)) ;
  }
  GALGAS_stringset var_usedRoutineSet_3839 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)) ;
  GALGAS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_3985 = GALGAS_midrange_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 93)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_4077 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_4077.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_3985.setter_insertKey (enumerator_4077.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)) ;
    }
    enumerator_4077.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_4242 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 98)) ;
  cEnumerator_lstringlist enumerator_4304 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), kENUMERATION_UP) ;
  while (enumerator_4304.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_declaredRoutineMap_3985.getter_hasKey (enumerator_4304.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 100)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 100)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4304.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4304.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4242.getter_hasKey (enumerator_4304.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4304.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4304.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = var_usedRoutineSet_3839.getter_hasKey (enumerator_4304.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4304.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4304.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4242.addAssign_operation (enumerator_4304.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
    enumerator_4304.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4853 (var_declaredRoutineMap_3985, kENUMERATION_UP) ;
  while (enumerator_4853.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_usedRoutineSet_3839.getter_hasKey (enumerator_4853.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_and (var_unusedRoutineDeclarationUnicity_4242.getter_hasKey (enumerator_4853.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4853.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4853.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)) ;
      }
    }
    enumerator_4853.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedByteDeclarationUnicity_5173 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 115)) ;
  cEnumerator_lstringlist enumerator_5232 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), kENUMERATION_UP) ;
  while (enumerator_5232.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_registerTable_2235.getter_hasKey (enumerator_5232.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5232.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5232.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
      }
    }
    if (kBoolFalse == test_16) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5173.getter_hasKey (enumerator_5232.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 119)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5232.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5232.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)) ;
        }
      }
      if (kBoolFalse == test_18) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_usedRegisters_2195.getter_hasKey (enumerator_5232.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 121)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5232.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5232.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5173.addAssign_operation (enumerator_5232.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)) ;
    enumerator_5232.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5761 (var_declaredByteMap_3251, kENUMERATION_UP) ;
  while (enumerator_5761.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_usedRegisters_2195.getter_hasKey (enumerator_5761.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_and (var_unusedByteDeclarationUnicity_5173.getter_hasKey (enumerator_5761.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5761.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5761.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)) ;
      }
    }
    enumerator_5761.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 132)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations (var_generatedInstructionList_3691, var_listFileContents_1110, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 133)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 136)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP (var_generatedInstructionList_3691, var_listFileContents_1110, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 137)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 141)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_26) {
      GALGAS_uint var_usedROMsize_6799 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (var_registerTable_2235, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 145)), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_generatedInstructionList_3691, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), var_actualConfigurationMap_2062, var_listFileContents_1110, var_usedROMsize_6799, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 143)) ;
      }
      GALGAS_string var_contents_6833 ;
      {
      routine_getGeneratedContents (var_contents_6833, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)) ;
      }
      GALGAS_string var_destinationFile_6897 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 155)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)) ;
      GALGAS_bool joker_7037 ; // Joker input parameter
      var_contents_6833.method_writeToFileWhenDifferentContents (var_destinationFile_6897, joker_7037, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)) ;
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_27) {
          GALGAS_string var_baseName_7117 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 158)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation (var_baseName_7117, var_contents_6833, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
          }
          var_destinationFile_6897 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 160)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)) ;
          GALGAS_bool joker_7399 ; // Joker input parameter
          var_contents_6833.method_writeToFileWhenDifferentContents (var_destinationFile_6897, joker_7399, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
          {
          routine_get_5F_C_5F_ArrayHeader (var_baseName_7117, var_contents_6833, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
          }
          var_destinationFile_6897 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
          GALGAS_bool joker_7597 ; // Joker input parameter
          var_contents_6833.method_writeToFileWhenDifferentContents (var_destinationFile_6897, joker_7597, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 164)) ;
        }
      }
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 167)).boolEnum () ;
        if (kBoolTrue == test_28) {
          GALGAS_string var_verboseMessage_7703 = GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_semantics.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)).add_operation (GALGAS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)) ;
          var_verboseMessage_7703.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_6799.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)) ;
          var_verboseMessage_7703.plusAssign_operation(var_usedROMsize_6799.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).divide_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 170)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
          cEnumerator_ramBankTable enumerator_8027 (var_ramBank_2959, kENUMERATION_UP) ;
          while (enumerator_8027.hasCurrentObject ()) {
            GALGAS_uint var_bankSize_8063 = enumerator_8027.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_8027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)) ;
            GALGAS_uint var_usedSize_8128 = enumerator_8027.current_mFirstFreeAddress (HERE).substract_operation (enumerator_8027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)) ;
            var_verboseMessage_7703.plusAssign_operation(GALGAS_string ("  Bank '").add_operation (enumerator_8027.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)).add_operation (GALGAS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)) ;
            var_verboseMessage_7703.plusAssign_operation(var_usedSize_8128.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 175)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)) ;
            var_verboseMessage_7703.plusAssign_operation(var_bankSize_8063.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 176)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)) ;
            var_verboseMessage_7703.plusAssign_operation(var_usedSize_8128.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).divide_operation (var_bankSize_8063, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 177)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)) ;
            enumerator_8027.gotoNextObject () ;
          }
          {
          routine_print (var_verboseMessage_7703, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
          }
        }
      }
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        test_29 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_29) {
          GALGAS_string var_assemblyCode_8596 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code (var_piccoloDeviceModel_1239.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_registerTable_2235, var_generatedInstructionList_3691, var_actualConfigurationMap_2062, var_assemblyCode_8596, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
          }
          GALGAS_string var_asmDestinationFile_8873 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 192)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 192)) ;
          GALGAS_bool joker_9025 ; // Joker input parameter
          var_assemblyCode_8596.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8873, joker_9025, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_26) {
    GALGAS_string var_hexDestinationFile_9106 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 196)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 196)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = var_hexDestinationFile_9106.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 197)).boolEnum () ;
      if (kBoolTrue == test_30) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_9106, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 198)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_9300 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 200)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 200)) ;
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_asmDestinationFile_9300.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 201)).boolEnum () ;
      if (kBoolTrue == test_31) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_9300, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 202)) ;
        }
      }
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    test_32 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_string var_listFile_9605 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 207)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 207)) ;
      GALGAS_bool joker_9740 ; // Joker input parameter
      var_listFileContents_1110.method_writeToFileWhenDifferentContents (var_listFile_9605, joker_9740, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 208)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze (const GALGAS_pic_31__38_AST constinArgument_inPiccoloModel,
                                     const GALGAS_string constinArgument_inSourceFileName,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_554 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_554.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_554, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
    }
  }
  GALGAS_string var_listFileContents_904 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1001 ;
  GALGAS_uint var_accessBankSplitOffset_1032 ;
  GALGAS_ramBankTable var_ramBank_1074 ;
  GALGAS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1114 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1301 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1476 ;
  GALGAS_luint var_bootloaderReservedROMsize_1544 ;
  GALGAS_registerTable var_registerTable_1690 ;
  GALGAS_string var_piccoloDeviceName_1718 ;
  switch (constinArgument_inPiccoloModel.readProperty_mProgramKind ().enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
    {
      var_piccoloDeviceName_1718 = constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_string () ;
      {
      routine_parseDeviceDefinition (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel_1001.readProperty_mProcessorType ().enumValue ()) {
      case GALGAS_processorType::kNotBuilt:
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1032 = GALGAS_uint (uint32_t (96U)) ;
        }
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1032 = GALGAS_uint (uint32_t (128U)) ;
        }
        break ;
      case GALGAS_processorType::kEnum_midrange:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1032.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_processorType::kEnum_baseline:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset_1032.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1074 = var_piccoloDeviceModel_1001.readProperty_mRamBankTable () ;
      var_bootloaderReservedRAMmap_1114 = GALGAS_bootloaderReservedRAMmap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 43)) ;
      var_registerTable_1690 = var_piccoloDeviceModel_1001.readProperty_mRegisterTable () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 45)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 46)) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 47)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 48)) ;
      var_bootloaderReservedROMsize_1544 = GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)) ;
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 51)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 52)) ;
      var_piccoloDeviceModel_1001.drop () ;
      var_piccoloDeviceName_1718.drop () ;
      var_accessBankSplitOffset_1032.drop () ;
      var_ramBank_1074.drop () ;
      var_registerTable_1690.drop () ;
      var_bootloaderReservedRAMmap_1114.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, var_piccoloDeviceName_1718, var_accessBankSplitOffset_1032, var_ramBank_1074, var_registerTable_1690, var_bootloaderReservedRAMmap_1114, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      cEnumerator_ramBankTable enumerator_3729 (var_ramBank_1074, kENUMERATION_UP) ;
      while (enumerator_3729.hasCurrentObject ()) {
        {
        var_ramBank_1074.setter_setMFirstFreeAddressForKey (enumerator_3729.current_mFirstAddress (HERE), enumerator_3729.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 65)) ;
        }
        enumerator_3729.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_userProgram:
    {
      var_piccoloDeviceModel_1001.drop () ;
      var_piccoloDeviceName_1718.drop () ;
      var_accessBankSplitOffset_1032.drop () ;
      var_ramBank_1074.drop () ;
      var_registerTable_1690.drop () ;
      var_bootloaderReservedRAMmap_1114.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, var_piccoloDeviceName_1718, var_accessBankSplitOffset_1032, var_ramBank_1074, var_registerTable_1690, var_bootloaderReservedRAMmap_1114, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 68)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 79)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 80)) ;
    }
    break ;
  }
  GALGAS_pic_31__38_MacroMap var_macroMap_4600 = GALGAS_pic_31__38_MacroMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 83)) ;
  cEnumerator_pic_31__38_MacroDefinitionList enumerator_4650 (constinArgument_inPiccoloModel.readProperty_mMacroDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_4650.hasCurrentObject ()) {
    {
    var_macroMap_4600.setter_insertKey (enumerator_4650.current_mMacroName (HERE), enumerator_4650.current_mConstantNameList (HERE), enumerator_4650.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 85)) ;
    }
    enumerator_4650.gotoNextObject () ;
  }
  GALGAS_stringset var_usedRoutineSet_4868 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), var_macroMap_4600, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForUserProgramImplementation_1476, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 88)) ;
  GALGAS_declaredRoutineMap var_declaredRoutineMap_5150 = GALGAS_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 95)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_5293 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_5293.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5150.setter_insertKey (enumerator_5293.current_mRoutineName (HERE), enumerator_5293.current_mRequiredBank (HERE), enumerator_5293.current_mReturnedBank (HERE), enumerator_5293.current_mPreservesBank (HERE), enumerator_5293.current_mIsNoReturn (HERE), enumerator_5293.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 97)) ;
    }
    enumerator_5293.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_5576 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 107)) ;
  cEnumerator_lstringlist enumerator_5631 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), kENUMERATION_UP) ;
  while (enumerator_5631.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5150.getter_hasKey (enumerator_5631.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5631.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5631.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5576.getter_hasKey (enumerator_5631.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5631.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5631.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_usedRoutineSet_4868.getter_hasKey (enumerator_5631.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 113)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5631.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5631.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5576.addAssign_operation (enumerator_5631.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 116)) ;
    enumerator_5631.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_6179 (var_declaredRoutineMap_5150, kENUMERATION_UP) ;
  while (enumerator_6179.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_usedRoutineSet_4868.getter_hasKey (enumerator_6179.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_and (var_unusedDeclarationUnicity_5576.getter_hasKey (enumerator_6179.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_6179.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6179.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)) ;
      }
    }
    enumerator_6179.gotoNextObject () ;
  }
  GALGAS_stringset var_inlinedRoutineSet_6448 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 124)) ;
  cEnumerator_lstringlist enumerator_6496 (constinArgument_inPiccoloModel.readProperty_mInlinedRoutineList (), kENUMERATION_UP) ;
  while (enumerator_6496.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5150.getter_hasKey (enumerator_6496.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6496.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6496.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_usedRoutineSet_4868.getter_hasKey (enumerator_6496.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 128)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6496.current_mValue (HERE).readProperty_location (), GALGAS_string ("useless declaration, the '").add_operation (enumerator_6496.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
        }
      }
      if (kBoolFalse == test_14) {
        var_inlinedRoutineSet_6448.addAssign_operation (enumerator_6496.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 131)) ;
      }
    }
    enumerator_6496.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6917 = constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList () ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_7017 = constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList () ;
  {
  routine_pic_31__38_PerformRoutineInline (var_inlinedRoutineSet_6448, var_declaredRoutineMap_5150, var_interruptDefinitionList_6917, var_routineDefinitionList_7017, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 136)) ;
  }
  cEnumerator_checkpicList enumerator_7304 (constinArgument_inPiccoloModel.readProperty_mCheckpicList (), kENUMERATION_UP) ;
  while (enumerator_7304.hasCurrentObject ()) {
    GALGAS_bool var_found_7366 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7389 (enumerator_7304.current_mValueList (HERE), kENUMERATION_UP) ;
    bool bool_16 = var_found_7366.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
    if (enumerator_7389.hasCurrentObject () && bool_16) {
      while (enumerator_7389.hasCurrentObject () && bool_16) {
        var_found_7366 = GALGAS_bool (kIsEqual, enumerator_7389.current_mValue (HERE).readProperty_string ().objectCompare (var_piccoloDeviceName_1718)) ;
        enumerator_7389.gotoNextObject () ;
        if (enumerator_7389.hasCurrentObject ()) {
          bool_16 = var_found_7366.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_found_7366.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 148)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7304.current_mErrorLocation (HERE), GALGAS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1718, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)) ;
      }
    }
    enumerator_7304.gotoNextObject () ;
  }
  GALGAS_bool var_hasHighInterrupt_7672 = GALGAS_bool (false) ;
  GALGAS_bool var_highInterruptIsFast_7709 = GALGAS_bool (false) ;
  GALGAS_bool var_hasLowInterrupt_7749 = GALGAS_bool (false) ;
  GALGAS_bool var_lowInterruptIsFast_7785 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7848 (var_interruptDefinitionList_6917, kENUMERATION_UP) ;
  while (enumerator_7848.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 158)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 159)) ;
      }
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsEqual, enumerator_7848.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        var_highInterruptIsFast_7709 = enumerator_7848.current_mFastReturn (HERE) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7672.boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 164)) ;
          }
        }
        var_hasHighInterrupt_7672 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_21) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_7848.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("low"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_lowInterruptIsFast_7785 = enumerator_7848.current_mFastReturn (HERE) ;
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7749.boolEnum () ;
            if (kBoolTrue == test_25) {
              TC_Array <C_FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 170)) ;
            }
          }
          var_hasLowInterrupt_7749 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_24) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7709.operator_and (var_lowInterruptIsFast_7785 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 176)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7848.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 177)) ;
      }
    }
    enumerator_7848.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_8857 ;
  enumGalgasBool test_30 = kBoolTrue ;
  if (kBoolTrue == test_30) {
    test_30 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 182)))).boolEnum () ;
    if (kBoolTrue == test_30) {
      cEnumerator_configDefinitionList enumerator_8976 (constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), kENUMERATION_UP) ;
      while (enumerator_8976.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8976.current_mDefinitionLocation (HERE), GALGAS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
        enumerator_8976.gotoNextObject () ;
      }
      var_actualConfigurationMap_8857 = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 186)) ;
    }
  }
  if (kBoolFalse == test_30) {
    {
    routine_buildConfig (var_piccoloDeviceModel_1001.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_904, var_actualConfigurationMap_8857, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 188)) ;
    }
  }
  GALGAS_uint var_RAMsize_9432 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_ramBankTable enumerator_9477 (var_ramBank_1074, kENUMERATION_UP) ;
  while (enumerator_9477.hasCurrentObject ()) {
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      test_32 = GALGAS_bool (kIsStrictSup, enumerator_9477.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9432)).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_RAMsize_9432 = enumerator_9477.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9477.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_9658 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 203)) ;
  {
  var_constantMap_9658.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)), var_piccoloDeviceModel_1001.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)) ;
  }
  {
  var_constantMap_9658.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("RAM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)), var_RAMsize_9432.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)) ;
  }
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (kIsNotEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("pic18_semantics.galgas", 208)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      GALGAS_lstring var_bootloaderSizeString_10052 = GALGAS_lstring::constructor_new (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)) ;
      {
      var_constantMap_9658.setter_insertKey (var_bootloaderSizeString_10052, var_bootloaderReservedROMsize_1544.readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
      }
    }
  }
  GALGAS_stringset var_usedRegisters_10267 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 213)) ;
  cEnumerator_constantDefinitionList enumerator_10326 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), kENUMERATION_UP) ;
  while (enumerator_10326.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_10468 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_10326.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_constantMap_9658, var_result_10468, var_usedRegisters_10267, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)) ;
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_1001.readProperty_mRegisterTable ().getter_hasKey (enumerator_10326.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 216)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_10326.current_mConstantName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10326.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_constantMap_9658.setter_insertKey (enumerator_10326.current_mConstantName (HERE), var_result_10468, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 219)) ;
      }
    }
    enumerator_10326.gotoNextObject () ;
  }
  GALGAS_declaredByteMap var_declaredByteMap_11054 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_9658, var_usedRegisters_10267, var_ramBank_1074, var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_listFileContents_904, var_registerTable_1690, var_declaredByteMap_11054, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 223)) ;
  }
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    test_36 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 235)))).boolEnum () ;
    if (kBoolTrue == test_36) {
      cEnumerator_ramBankTable enumerator_11314 (var_ramBank_1074, kENUMERATION_UP) ;
      while (enumerator_11314.hasCurrentObject ()) {
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1114.getter_hasKey (enumerator_11314.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 237)).boolEnum () ;
          if (kBoolTrue == test_37) {
            GALGAS_luint var_bootloaderReservedSize_11411 ;
            var_bootloaderReservedRAMmap_1114.method_searchKey (enumerator_11314.current_lkey (HERE), var_bootloaderReservedSize_11411, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)) ;
            enumGalgasBool test_38 = kBoolTrue ;
            if (kBoolTrue == test_38) {
              test_38 = GALGAS_bool (kIsStrictSup, enumerator_11314.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11314.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 240)).objectCompare (var_bootloaderReservedSize_11411.readProperty_uint ())).boolEnum () ;
              if (kBoolTrue == test_38) {
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)), GALGAS_string ("for '").add_operation (enumerator_11314.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (enumerator_11314.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11314.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).add_operation (var_bootloaderReservedSize_11411.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_semantics.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 243)).add_operation (GALGAS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 244)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_37) {
          enumGalgasBool test_40 = kBoolTrue ;
          if (kBoolTrue == test_40) {
            test_40 = GALGAS_bool (kIsStrictSup, enumerator_11314.current_mFirstFreeAddress (HERE).objectCompare (enumerator_11314.current_mFirstAddress (HERE))).boolEnum () ;
            if (kBoolTrue == test_40) {
              TC_Array <C_FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)), GALGAS_string ("for '").add_operation (enumerator_11314.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (enumerator_11314.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11314.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)) ;
            }
          }
        }
        enumerator_11314.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (constinArgument_inSourceFileName, var_piccoloDeviceModel_1001.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 257)), var_macroMap_4600, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_accessBankSplitOffset_1032, var_registerTable_1690, var_declaredByteMap_11054, var_routineDefinitionList_7017, constinArgument_inPiccoloModel.readProperty_mProgramKind (), var_constantMap_9658, var_usedRegisters_10267, constinArgument_inPiccoloModel.readProperty_mDataList (), var_interruptDefinitionList_6917, constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), var_ramBank_1074, var_hasHighInterrupt_7672, var_hasLowInterrupt_7749, var_piccoloDeviceModel_1001.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_actualConfigurationMap_8857, constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), var_listFileContents_904, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 255)) ;
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_42) {
      var_listFileContents_904.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)) ;
      GALGAS_string var_listFile_13430 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 286)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 286)) ;
      GALGAS_bool joker_13565 ; // Joker input parameter
      var_listFileContents_904.method_writeToFileWhenDifferentContents (var_listFile_13430, joker_13565, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 287)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18BootloaderSpecificationAnalysis'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis (const GALGAS_string constinArgument_inSourceFileName,
                                                         const GALGAS_lstring constinArgument_inBootloaderName,
                                                         const GALGAS_lstring constinArgument_inDeviceName,
                                                         const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationList,
                                                         const GALGAS_bootloaderReservedRAMmap constinArgument_inBootloaderReservedRAMmap,
                                                         const GALGAS_luint constinArgument_inReservedRomSize,
                                                         const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationList,
                                                         const GALGAS_ramDefinitionList constinArgument_inSharedRamDefinitionList,
                                                         GALGAS_string & outArgument_outListFileContents,
                                                         GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                         GALGAS_uint & outArgument_outAccessBankSplitOffset,
                                                         GALGAS_ramBankTable & outArgument_outRamBank,
                                                         GALGAS_registerTable & outArgument_outRegisterTable,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outListFileContents.drop () ; // Release 'out' argument
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  GALGAS_string var_sourceFileBaseName_734 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_734.objectCompare (constinArgument_inBootloaderName.readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inBootloaderName.readProperty_location (), GALGAS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName_734, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
    }
  }
  outArgument_outListFileContents = GALGAS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 27)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.readProperty_mProcessorType ().enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint (uint32_t (96U)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint (uint32_t (128U)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsSupOrEqual, constinArgument_inReservedRomSize.readProperty_uint ().objectCompare (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReservedRomSize.readProperty_location (), GALGAS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GALGAS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GALGAS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GALGAS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
    }
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GALGAS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.readProperty_mRamBankTable () ;
  cEnumerator_bootloaderReservedRAMmap enumerator_2473 (constinArgument_inBootloaderReservedRAMmap, kENUMERATION_UP) ;
  while (enumerator_2473.hasCurrentObject ()) {
    GALGAS_uint var_firstAddress_2559 ;
    GALGAS_uint var_firstFreeAddress_2577 ;
    GALGAS_uint var_lastAddressPlusOne_2599 ;
    GALGAS_uintlist var_mirrorOffsetList_2630 ;
    outArgument_outRamBank.method_searchKey (enumerator_2473.current_lkey (HERE), var_firstAddress_2559, var_firstFreeAddress_2577, var_lastAddressPlusOne_2599, var_mirrorOffsetList_2630, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 48)) ;
    var_firstFreeAddress_2577 = var_firstFreeAddress_2577.add_operation (enumerator_2473.current_mReservedSize (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 49)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress_2577.objectCompare (var_lastAddressPlusOne_2599)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2473.current_mReservedSize (HERE).readProperty_location (), GALGAS_string ("reserved size is greater than size of '").add_operation (enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GALGAS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (var_lastAddressPlusOne_2599.substract_operation (var_firstAddress_2559, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2577, enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 54)) ;
      }
      outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (enumerator_2473.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_firstAddress_2559.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (var_firstFreeAddress_2577.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (GALGAS_string (").\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }
    enumerator_2473.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)) ;
  GALGAS_stringset var_routineNameSet_3621 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)) ;
  GALGAS_uint var_entryPointAddress_3671 = GALGAS_uint (uint32_t (4U)) ;
  cEnumerator_routineDeclarationList enumerator_3721 (constinArgument_inBootloaderRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3721.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_routineNameSet_3621.getter_hasKey (enumerator_3721.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3721.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
      }
    }
    var_routineNameSet_3621.addAssign_operation (enumerator_3721.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 70)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3721.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (var_entryPointAddress_3671.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) ;
    var_entryPointAddress_3671 = var_entryPointAddress_3671.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsEqual, var_entryPointAddress_3671.objectCompare (GALGAS_uint (uint32_t (8U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_entryPointAddress_3671 = GALGAS_uint (uint32_t (12U)) ;
      }
    }
    if (kBoolFalse == test_10) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsEqual, var_entryPointAddress_3671.objectCompare (GALGAS_uint (uint32_t (24U)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          var_entryPointAddress_3671 = GALGAS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_3721.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 79)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)) ;
  var_entryPointAddress_3671 = constinArgument_inReservedRomSize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_4769 (constinArgument_inUserRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_4769.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_routineNameSet_3621.getter_hasKey (enumerator_4769.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4769.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
      }
    }
    var_routineNameSet_3621.addAssign_operation (enumerator_4769.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 90)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_4769.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (var_entryPointAddress_3671.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) ;
    var_entryPointAddress_3671 = var_entryPointAddress_3671.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    enumerator_4769.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GALGAS_stringset joker_5382 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 101)) ;
  {
  GALGAS_declaredByteMap joker_5498 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 100)), joker_5382, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5498, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 97)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                            GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GALGAS_routineMap constinArgument_inRoutineMap,
                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                            const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                            GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GALGAS_lstring & ioArgument_ioBlockLabel,
                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                                            const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_caseConstantMap var_caseConstantMap_2431 = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18-switch-instruction.galgas", 61)) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  GALGAS_lstring var_exitLabel_2494 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), temp_0.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 64)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_2646 = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  GALGAS_bool var_continuesInSequence_2727 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_2766 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_2813 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 71)) ;
  GALGAS_bool var_finalBankSettingDefined_2855 = GALGAS_bool (false) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2932 (temp_1.readProperty_mCaseList (), kENUMERATION_UP) ;
  while (enumerator_2932.hasCurrentObject ()) {
    const GALGAS_pic_31__38_Instruction_5F_switch temp_2 = this ;
    GALGAS_lstring var_conditionTrueLabel_2993 = GALGAS_lstring::constructor_new (GALGAS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), temp_2.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_3140 (enumerator_2932.current_mCaseExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3140.hasCurrentObject ()) {
      GALGAS_string var_conditionLabel_3187 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 79)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 80)) ;
      callExtensionMethod_analyzeCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) enumerator_3140.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_2993, var_conditionLabel_3187, ioArgument_ioUsedRegisters, var_caseConstantMap_2431, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2646, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 81)) ;
      enumerator_3140.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_3631 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_2993 ;
    GALGAS_uint var_branchFinalBank_3718 = var_initialBankSetting_2766 ;
    {
    routine_analyzeInstructionList (enumerator_2932.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3718, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 98)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_continuesInSequence_2727 = GALGAS_bool (true) ;
        const GALGAS_pic_31__38_Instruction_5F_switch temp_4 = this ;
        ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), var_exitLabel_2494, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 122))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 122)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 123)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118)) ;
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2855.boolEnum () ;
      if (kBoolTrue == test_5) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2813.objectCompare (var_branchFinalBank_3718)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_branchFinalBank_3718.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = var_branchFinalBank_3718.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)) ;
            }
            GALGAS_string temp_9 ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_finalBankSetting_2813.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              temp_9 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_10) {
              temp_9 = var_finalBankSetting_2813.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)) ;
            }
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_2932.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 131)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)), fixItArray11  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_5) {
      var_finalBankSettingDefined_2855 = GALGAS_bool (true) ;
      var_finalBankSetting_2813 = var_branchFinalBank_3718 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 139)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3631 ;
    enumerator_2932.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_5267 = var_initialBankSetting_2766 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_12 = this ;
  routine_analyzeInstructionList (temp_12.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5267, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 144)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_5712 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5712.boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_14 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_14.readProperty_mInstructionLocation (), var_exitLabel_2494, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 168))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 168)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 169)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 173)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2813.objectCompare (var_branchFinalBank_5267)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_16 = this ;
      GALGAS_string temp_17 ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, var_branchFinalBank_5267.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_18) {
        temp_17 = var_branchFinalBank_5267.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)) ;
      }
      GALGAS_string temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, var_finalBankSetting_2813.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_20) {
        temp_19 = var_finalBankSetting_2813.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)) ;
      }
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mElseBranchStartLocation (), GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 178)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)), fixItArray21  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)) ;
    }
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_2813 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_continuesInSequence_2727.boolEnum () ;
    if (kBoolTrue == test_22) {
      ioArgument_ioBlockLabel = var_exitLabel_2494 ;
    }
  }
  if (kBoolFalse == test_22) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18-switch-instruction.galgas", 187)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::method_analyzeCaseItem (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GALGAS_string constinArgument_inIndexForLabels,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                     GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_8094 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mCaseExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_8094, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 225)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_8094.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_result_8094.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 227)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCaseExpressionLocation (), GALGAS_string ("case value is evaluated as ").add_operation (var_result_8094.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_8094.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (var_result_8094.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)) ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_8094.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), GALGAS_string ("the '").add_operation (var_result_8094.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_pic_31__38_SimpleConstantCaseItem temp_8 = this ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (var_result_8094.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), temp_8.readProperty_mCaseExpressionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)) ;
    }
  }
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_9 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_8094, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 243)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_8094 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_10 = this ;
  GALGAS_lstring var_conditionFalseLabel_9032 = GALGAS_lstring::constructor_new (GALGAS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)), temp_10.readProperty_mCaseExpressionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)) ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_11 = this ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_9230 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_11.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas", 252)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 254)), var_conditionFalseLabel_9032, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 256))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 250)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9230, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 263)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 266)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_9032 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::method_analyzeCaseItem (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                               const GALGAS_string constinArgument_inIndexForLabels,
                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                               GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               GALGAS_lstring & ioArgument_ioBlockLabel,
                                                               GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_minBound_10329 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mMinExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10329, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 284)) ;
  GALGAS_sint_36__34_ var_maxBound_10430 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mMaxExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10430, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 285)) ;
  GALGAS_bool var_ok_10469 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_minBound_10329.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound_10329.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 288)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mCaseExpressionLocation (), GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_10329.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)) ;
      var_ok_10469 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictSup, var_maxBound_10430.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound_10430.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_10430.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)) ;
      var_ok_10469 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsInfOrEqual, var_maxBound_10430.objectCompare (var_minBound_10329)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound (").add_operation (var_maxBound_10430.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (var_minBound_10329.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)) ;
      var_ok_10469 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (kIsEqual, var_maxBound_10430.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_and (GALGAS_bool (kIsEqual, var_minBound_10329.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 299)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_IntervalCaseItem temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mCaseExpressionLocation (), GALGAS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 300)) ;
        var_ok_10469 = GALGAS_bool (false) ;
      }
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_ok_10469.boolEnum () ;
    if (kBoolTrue == test_14) {
      cEnumerator_range enumerator_11261 (GALGAS_range::constructor_new (var_minBound_10329.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), var_maxBound_10430.substract_operation (var_minBound_10329, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), kENUMERATION_UP) ;
      while (enumerator_11261.hasCurrentObject ()) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_pic_31__38_IntervalCaseItem temp_16 = this ;
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)) ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), GALGAS_string ("the '").add_operation (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)) ;
          }
        }
        if (kBoolFalse == test_15) {
          {
          const GALGAS_pic_31__38_IntervalCaseItem temp_19 = this ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_11261.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), temp_19.readProperty_mCaseExpressionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)) ;
          }
        }
        enumerator_11261.gotoNextObject () ;
      }
      const GALGAS_pic_31__38_IntervalCaseItem temp_20 = this ;
      GALGAS_lstring var_firstConditionAcceptedLabel_11683 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)), temp_20.readProperty_mCaseExpressionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_21 = this ;
      GALGAS_lstring var_firstConditionRejectedLabel_11809 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)), temp_21.readProperty_mCaseExpressionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_22 = this ;
      GALGAS_lstring var_intervalRejectedLabel_11935 = GALGAS_lstring::constructor_new (GALGAS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)), temp_22.readProperty_mCaseExpressionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_23 = this ;
      GALGAS_ipic_31__38_SequentialInstruction var_secondTestInstruction_12121 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_23.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 320)), var_maxBound_10430.substract_operation (var_minBound_10329, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 318)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_24.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 326)), ioArgument_ioLastComparisonValue.add_operation (GALGAS_sint_36__34_ (int64_t (255LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).substract_operation (var_maxBound_10430, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 329)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_25 = this ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_12664 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_25.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 334)), var_firstConditionAcceptedLabel_11683, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 336)), var_firstConditionRejectedLabel_11809, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 338))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 332)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12664, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 346)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_26 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      temp_26.addAssign_operation (var_secondTestInstruction_12121, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_27 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 351)), var_firstConditionRejectedLabel_11809, temp_26, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_27.readProperty_mCaseExpressionLocation (), var_intervalRejectedLabel_11935, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 354))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 354)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 355)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_28 = this ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__13463 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_28.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 361)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 363)), var_intervalRejectedLabel_11935, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 365))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 359)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_29 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      temp_29.addAssign_operation (var_secondTestInstruction_12121, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 369)), var_firstConditionAcceptedLabel_11683, temp_29, var_t_32__13463, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 373)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368)) ;
      ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 377)) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11935 ;
      ioArgument_ioLastComparisonValue = var_minBound_10329 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14296 (temp_0.readProperty_mCaseList (), kENUMERATION_UP) ;
  while (enumerator_14296.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_14296.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 391)) ;
    }
    enumerator_14296.gotoNextObject () ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 393)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBCC'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool function_pic_31__38__5F_checkBCC (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                              const GALGAS_lstring & constinArgument_inTargetLabel,
                                              const GALGAS_uint & constinArgument_inCurrentAddress,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress_16478 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_16478, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)) ;
  GALGAS_sint var_displacement_16505 = var_targetAddress_16478.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_16505.objectCompare (GALGAS_sint (int32_t (127L)))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_16505.objectCompare (GALGAS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBCC [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBCC (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_checkBCC (operand0,
                                           operand1,
                                           operand2,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBCC ("pic18_checkBCC",
                                                                         functionWithGenericHeader_pic_31__38__5F_checkBCC,
                                                                         & kTypeDescriptor_GALGAS_bool,
                                                                         3,
                                                                         functionArgs_pic_31__38__5F_checkBCC) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBRA_RCALL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                       const GALGAS_lstring & constinArgument_inTargetLabel,
                                                       const GALGAS_uint & constinArgument_inCurrentAddress,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress_16998 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_16998, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)) ;
  GALGAS_sint var_displacement_17025 = var_targetAddress_16998.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_17025.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_17025.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBRA_5F_RCALL [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_checkBRA_5F_RCALL (operand0,
                                                    operand1,
                                                    operand2,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBRA_5F_RCALL ("pic18_checkBRA_RCALL",
                                                                                  functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL,
                                                                                  & kTypeDescriptor_GALGAS_bool,
                                                                                  3,
                                                                                  functionArgs_pic_31__38__5F_checkBRA_5F_RCALL) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_RCALL_displacement'
//
//--------------------------------------------------------------------------------------------------

GALGAS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                                  const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                  const GALGAS_uint & constinArgument_inCurrentAddress,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_outDisplacement ; // Returned variable
  GALGAS_uint var_targetAddress_17485 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_17485, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)) ;
  result_outDisplacement = var_targetAddress_17485.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)) ;
//---
  return result_outDisplacement ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (Compiler * inCompiler,
                                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                                            const GALGAS_location & /* inErrorLocation */
                                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_RCALL_5F_displacement ("pic18_BRA_RCALL_displacement",
                                                                                             functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement,
                                                                                             & kTypeDescriptor_GALGAS_sint,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_Bcc_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inConditionalBranchInstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    const GALGAS_conditional_5F_branch & constinArgument_inConditionalBranch,
                                                                    const GALGAS_bool & constinArgument_inComplemented,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_18028 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_18028.objectCompare (GALGAS_sint (int32_t (127L)))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_18028.objectCompare (GALGAS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 521)) ;
    }
  }
  GALGAS_conditional_5F_branch var_conditionalBranch_18319 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inComplemented.boolEnum () ;
    if (kBoolTrue == test_2) {
      switch (constinArgument_inConditionalBranch.enumValue ()) {
      case GALGAS_conditional_5F_branch::kNotBuilt:
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bz:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 527)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnz:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bn:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnn:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bc:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 531)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnc:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 532)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bov:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 533)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnov:
        {
          var_conditionalBranch_18319 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 534)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    var_conditionalBranch_18319 = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode_18957 ;
  GALGAS_string var_mnemonic_18980 ;
  switch (var_conditionalBranch_18319.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (57344U)) ;
      var_mnemonic_18980 = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (57600U)) ;
      var_mnemonic_18980 = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (58880U)) ;
      var_mnemonic_18980 = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (59136U)) ;
      var_mnemonic_18980 = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (57856U)) ;
      var_mnemonic_18980 = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (58112U)) ;
      var_mnemonic_18980 = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (58368U)) ;
      var_mnemonic_18980 = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode_18957 = GALGAS_uint (uint32_t (58624U)) ;
      var_mnemonic_18980 = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic_18980, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)), GALGAS_uintlist::constructor_listWithValue (var_baseCode_18957.operator_or (var_displacement_18028.operator_and (GALGAS_sint (int32_t (255L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code [6] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_conditional_5F_branch,
  & kTypeDescriptor_GALGAS_bool,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_conditional_5F_branch operand3 = GALGAS_conditional_5F_branch::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  const GALGAS_bool operand4 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_Bcc_5F_instruction_5F_code (operand0,
                                                             operand1,
                                                             operand2,
                                                             operand3,
                                                             operand4,
                                                             inCompiler
                                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_Bcc_5F_instruction_5F_code ("pic18_Bcc_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           5,
                                                                                           functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_RCALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                      const GALGAS_uint & constinArgument_inTargetAddress,
                                                                      const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_19837 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_19837.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_19837.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_19837.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (55296U)).operator_or (var_displacement_19837.operator_and (GALGAS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 569)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                                            const GALGAS_location & /* inErrorLocation */
                                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_RCALL_5F_instruction_5F_code (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_RCALL_5F_instruction_5F_code ("pic18_RCALL_instruction_code",
                                                                                             functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code,
                                                                                             & kTypeDescriptor_GALGAS_codeList,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_20571 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_20571.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_20571.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_20571.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (53248U)).operator_or (var_displacement_20571.operator_and (GALGAS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 586)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_instruction_5F_code (operand0,
                                                             operand1,
                                                             operand2,
                                                             inCompiler
                                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_instruction_5F_code ("pic18_BRA_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           3,
                                                                                           functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_CALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode_21257 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 597)) ;
  var_binaryCode_21257.addAssign_operation (GALGAS_uint (uint32_t (60416U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) ;
  var_binaryCode_21257.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 601)), var_binaryCode_21257  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 600)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_CALL_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_CALL_5F_instruction_5F_code ("pic18_CALL_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_GOTO_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode_21691 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 611)) ;
  var_binaryCode_21691.addAssign_operation (GALGAS_uint (uint32_t (61184U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) ;
  var_binaryCode_21691.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 615)), var_binaryCode_21691  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 614)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_GOTO_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_GOTO_5F_instruction_5F_code ("pic18_GOTO_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_definition_label'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_definition_5F_label (const GALGAS_lstring & constinArgument_inTargetLabel,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  result_outCode = GALGAS_codeList::constructor_listWithValue (constinArgument_inTargetLabel.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 625)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 624)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_definition_5F_label [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_definition_5F_label (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_definition_5F_label (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_definition_5F_label ("pic18_definition_label",
                                                                                    functionWithGenericHeader_pic_31__38__5F_definition_5F_label,
                                                                                    & kTypeDescriptor_GALGAS_codeList,
                                                                                    1,
                                                                                    functionArgs_pic_31__38__5F_definition_5F_label) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ReturnTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETURN") ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ReturnTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                       const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RETURN"), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (18U))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ReturnTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_RetfieTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETFIE") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_RetfieTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mFastReturn ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_RetfieTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                       const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GALGAS_string constinArgument_inNextBlockLabel,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_1 = this ;
  GALGAS_bigint temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mFastReturn ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_bigint ("17", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GALGAS_uintlist::constructor_listWithValue (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetfieTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_RetlwTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = this ;
  result_outResult = GALGAS_string ("RETLW ").add_operation (temp_0.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_RetlwTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                      const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                      const GALGAS_string constinArgument_inNextBlockLabel,
                                                                      GALGAS_codeList & outArgument_outCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_1 = this ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (3072U)).operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetlwTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                          Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_RetlwTerminator var_t_4553 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_4553.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_RetlwTerminator temp_1 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_1.readProperty_mLiteralValue ().objectCompare (var_t_4553.readProperty_mLiteralValue ())) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_JumpTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (0U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    switch (temp_2.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        result_outSize = GALGAS_uint (uint32_t (2U)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        result_outSize = GALGAS_uint (uint32_t (4U)) ;
      }
      break ;
    }
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 185)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 185)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_5.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 186)) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute:
        {
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                        GALGAS_uint & ioArgument_ioConversionCount,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      switch (temp_3.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
        {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
            if (kBoolTrue == test_4) {
              ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_6 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_6.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_8 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_9 = this ;
              outArgument_outModifiedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mLabel (), GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 210))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 210)) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            const GALGAS_ipic_31__38_JumpTerminator temp_11 = this ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 213)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 213)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const GALGAS_ipic_31__38_JumpTerminator temp_12 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_13 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_14 = this ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_13.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)).add_operation (GALGAS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (temp_14.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute:
        {
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_JumpTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string var_name_7313 ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      var_name_7313 = GALGAS_string ("JUMP ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_name_7313 = GALGAS_string ("BRA ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_name_7313 = GALGAS_string ("GOTO ") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      result_outResult = GALGAS_string ("(").add_operation (var_name_7313, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
    result_outResult = var_name_7313.add_operation (temp_4.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 237)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                     GALGAS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_terminators.galgas", 249)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_targetAddress_8026 ;
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mLabel (), var_targetAddress_8026, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 251)) ;
    const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
    switch (temp_3.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8026, temp_4.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 254)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8026, temp_5.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 256)) ;
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_JumpTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                         Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_JumpTerminator var_t_8755 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_8755.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (var_t_8755.readProperty_mLabel ().readProperty_string ())).operator_and (GALGAS_bool (kIsEqual, temp_2.readProperty_mKind ().objectCompare (var_t_8755.readProperty_mKind ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 273)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_AbstractConditionTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 288)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                            GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 301)) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 308)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 326)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 336)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      result_outResult.plusAssign_operation(GALGAS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 339)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      result_outResult.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 341)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      result_outResult.plusAssign_operation(GALGAS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 343)) ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" W \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 345)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 347)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                     const GALGAS_string constinArgument_inBlockLabel,
                                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                     GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_11796 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_12075 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_12075, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 362)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12363 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12363, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 371)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_11796)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_12075.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_12075.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_12075.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_12075.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 385)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12363.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12363.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12363.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12363.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 386)) ;
      }
    }
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mComparison ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 383)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                  const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                  GALGAS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_13086 ;
  GALGAS_string var_assemblyCode_13108 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  switch (temp_0.readProperty_mComparison ().enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      var_binCode_13086 = GALGAS_uint (uint32_t (25088U)) ;
      var_assemblyCode_13108 = GALGAS_string ("    CPFSEQ") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      var_binCode_13086 = GALGAS_uint (uint32_t (25600U)) ;
      var_assemblyCode_13108 = GALGAS_string ("    CPFSGT") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      var_binCode_13086 = GALGAS_uint (uint32_t (24576U)) ;
      var_assemblyCode_13108 = GALGAS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  var_assemblyCode_13108.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  var_binCode_13086 = var_binCode_13086.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_3) {
      var_binCode_13086 = var_binCode_13086.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 416)) ;
      var_assemblyCode_13108.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_13108, GALGAS_uintlist::constructor_listWithValue (var_binCode_13086  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 421))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 419)) ;
  GALGAS_codeList var_falseTerminatorCode_13895 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_13895, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 423)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_13895, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 429)) ;
  GALGAS_codeList var_trueTerminatorCode_14181 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_14181, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 430)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_14181, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 436)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_RegisterComparisonTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_RegisterComparisonTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 446)) ;
        }
      }
      GALGAS_pic_31__38_RegisterComparisonTerminator var_t_14599 = temp_1 ;
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_14599.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 447)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_14599.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 449)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mComparison ().objectCompare (var_t_14599.readProperty_mComparison ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_14599.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 455)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 469)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString () ;
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 480)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 482)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_16600 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16879 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16879, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 497)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_17167 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_17167, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 506)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_16600)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16879.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16879.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16879.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16879.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 520)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_17167.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_17167.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_17167.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_17167.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 521)) ;
      }
    }
    const GALGAS_pic_31__38_TestRegisterTerminator temp_7 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 518)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                            GALGAS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_17854 = GALGAS_uint (uint32_t (26112U)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  GALGAS_string var_assemblyCode_17885 = GALGAS_string ("    TSTFSZ ").add_operation (temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 534)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  var_binCode_17854 = var_binCode_17854.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_binCode_17854 = var_binCode_17854.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 537)) ;
      var_assemblyCode_17885.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_17885, GALGAS_uintlist::constructor_listWithValue (var_binCode_17854  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 542))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 540)) ;
  GALGAS_codeList var_falseTerminatorCode_18458 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_18458, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 544)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_18458, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 550)) ;
  GALGAS_codeList var_trueTerminatorCode_18744 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_5 = this ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18744, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 551)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_18744, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 557)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_TestRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_TestRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_TestRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 567)) ;
        }
      }
      GALGAS_pic_31__38_TestRegisterTerminator var_t_19144 = temp_1 ;
      const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_19144.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 568)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_19144.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 570)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.readProperty_mRegisterDescription (), var_t_19144.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 573)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_BitTestTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (temp_1.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 589)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_20693 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_20972 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_20972, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 604)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21260 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21260, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 613)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_20693)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_20972.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_20972.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_20972.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_20972.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 627)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21260.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21260.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21260.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21260.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 628)) ;
      }
    }
    const GALGAS_pic_31__38_BitTestTerminator temp_7 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 625)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                       const GALGAS_string constinArgument_inNextBlockLabel,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 642)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_binCode_22119 = GALGAS_uint (uint32_t (45056U)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
      GALGAS_string var_assemblyCode_22152 = GALGAS_string ("    BTFSC ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
      var_binCode_22119 = var_binCode_22119.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_5 = this ;
      var_binCode_22119 = var_binCode_22119.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_BitTestTerminator temp_7 = this ;
        test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_6) {
          var_binCode_22119 = var_binCode_22119.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
          var_assemblyCode_22152.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22152, GALGAS_uintlist::constructor_listWithValue (var_binCode_22119  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 654))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 652)) ;
      GALGAS_codeList var_falseTerminatorCode_22768 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 656)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22768, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_22768, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_binCode_22922 = GALGAS_uint (uint32_t (40960U)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_9 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_10 = this ;
    GALGAS_string var_assemblyCode_22955 = GALGAS_string ("    BTFSS ").add_operation (temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (temp_10.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_11 = this ;
    var_binCode_22922 = var_binCode_22922.operator_or (temp_11.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_12 = this ;
    var_binCode_22922 = var_binCode_22922.operator_or (temp_12.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_BitTestTerminator temp_14 = this ;
      test_13 = temp_14.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_13) {
        var_binCode_22922 = var_binCode_22922.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
        var_assemblyCode_22955.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22955, GALGAS_uintlist::constructor_listWithValue (var_binCode_22922  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 674))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 672)) ;
    GALGAS_codeList var_trueTerminatorCode_23556 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_15 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_23556, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 675)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_23556, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 681)) ;
    GALGAS_codeList var_falseTerminatorCode_23868 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_16 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_17 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23868, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 682)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_23868, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 688)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_BitTestTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_BitTestTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 699)) ;
        }
      }
      GALGAS_pic_31__38_BitTestTerminator var_t_24265 = temp_1 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_24265.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 700)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_24265.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 702)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_BitTestTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mBitNumber ().objectCompare (var_t_24265.readProperty_mBitNumber ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_24265.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 708)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_IncDecRegisterTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult = GALGAS_string ("INCF ") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_string ("DECF ") ;
  }
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 727)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_3) {
    result_outResult.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 731)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 733)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 735)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_26075 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26354 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26354, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 750)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26642 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26642, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 759)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_26075)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26354.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26354.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26354.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26354.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 773)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26642.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26642.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26642.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26642.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 774)) ;
      }
    }
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 771)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 788)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      GALGAS_bigint temp_3 ;
      const enumGalgasBool test_4 = temp_2.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_bigint ("15360", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790)) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_bigint ("11264", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790)) ;
      }
      GALGAS_uint var_binCode_27547 = temp_3.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = temp_5.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("    INCFSZ") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string ("    DECFSZ") ;
      }
      GALGAS_string var_assemblyCode_27629 = temp_6 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
      var_assemblyCode_27629.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
      var_binCode_27547 = var_binCode_27547.operator_or (temp_9.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_10) {
          var_assemblyCode_27629.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
        }
      }
      if (kBoolFalse == test_10) {
        var_binCode_27547 = var_binCode_27547.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 797)) ;
        var_assemblyCode_27629.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 798)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_13 = this ;
        test_12 = temp_13.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_12) {
          var_binCode_27547 = var_binCode_27547.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
          var_assemblyCode_27629.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_27629, GALGAS_uintlist::constructor_listWithValue (var_binCode_27547  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 806))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 804)) ;
      GALGAS_codeList var_falseTerminatorCode_28384 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_14 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 808)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28384, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_28384, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_15 = this ;
    GALGAS_bigint temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_bigint ("18432", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816)) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_bigint ("19456", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816)) ;
    }
    GALGAS_uint var_binCode_28538 = temp_16.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_18 = this ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string ("    INFSNZ") ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string ("    DCFSNZ") ;
    }
    GALGAS_string var_assemblyCode_28620 = temp_19 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_21 = this ;
    var_assemblyCode_28620.plusAssign_operation(GALGAS_string (" ").add_operation (temp_21.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_22 = this ;
    var_binCode_28538 = var_binCode_28538.operator_or (temp_22.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_24 = this ;
      test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
      if (kBoolTrue == test_23) {
        var_assemblyCode_28620.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
      }
    }
    if (kBoolFalse == test_23) {
      var_binCode_28538 = var_binCode_28538.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 823)) ;
      var_assemblyCode_28620.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_26 = this ;
      test_25 = temp_26.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_25) {
        var_binCode_28538 = var_binCode_28538.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
        var_assemblyCode_28620.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_28620, GALGAS_uintlist::constructor_listWithValue (var_binCode_28538  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 832))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 830)) ;
    GALGAS_codeList var_trueTerminatorCode_29360 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_27 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_29360, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 833)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_29360, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 839)) ;
    GALGAS_codeList var_falseTerminatorCode_29672 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_28 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_29 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29672, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 840)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_29672, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 846)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 857)) ;
        }
      }
      GALGAS_ipic_31__38_IncDecRegisterTerminator var_t_30093 = temp_1 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_30093.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 858)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_30093.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 860)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mIncrement ().objectCompare (var_t_30093.readProperty_mIncrement ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_8.readProperty_m_5F_W_5F_isDestination ().objectCompare (var_t_30093.readProperty_m_5F_W_5F_isDestination ())) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.readProperty_mRegisterDescription (), var_t_30093.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 869)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED RETLW") ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  cEnumerator_uintlist enumerator_31453 (temp_0.readProperty_mLiteralValues (), kENUMERATION_UP) ;
  while (enumerator_31453.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31453.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)) ;
    enumerator_31453.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 914)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 914)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 914)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 915)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)) ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_4 = this ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralValues (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 917)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 931)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 931)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 931)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 932)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                              const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_32_label_33240 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 944)) ;
  GALGAS_uint var_targetAddress_33332 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_33240, var_targetAddress_33332, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 945)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33332, var_goto_32_label_33240, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 947)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33332, var_goto_32_label_33240, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 949)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  cEnumerator_uintlist enumerator_33547 (temp_2.readProperty_mLiteralValues (), kENUMERATION_UP) ;
  while (enumerator_33547.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GALGAS_string ("    RETLW ").add_operation (enumerator_33547.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 953)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint (uint32_t (3072U)).operator_or (enumerator_33547.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 952)) ;
    enumerator_33547.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 965)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedRETLWTerminator var_t_34045 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 966)).objectCompare (var_t_34045.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 966)))) ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_3 = this ;
      cEnumerator_uintlist enumerator_34182 (temp_3.readProperty_mLiteralValues (), kENUMERATION_UP) ;
      cEnumerator_uintlist enumerator_34216 (var_t_34045.readProperty_mLiteralValues (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_34182.hasCurrentObject () && enumerator_34216.hasCurrentObject () && bool_4) {
        while (enumerator_34182.hasCurrentObject () && enumerator_34216.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_34182.current_mValue (HERE).objectCompare (enumerator_34216.current_mValue (HERE))) ;
          enumerator_34182.gotoNextObject () ;
          enumerator_34216.gotoNextObject () ;
          if (enumerator_34182.hasCurrentObject () && enumerator_34216.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED GOTO ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 984)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult.plusAssign_operation(GALGAS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 986)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_34793 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_34793.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_34793.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)) ;
    enumerator_34793.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1018)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1018)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1018)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1019)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)).add_operation (GALGAS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)) ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_4 = this ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mTargetLabels (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1021)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                       const GALGAS_string constinArgument_inBlockLabel,
                                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1035)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1035)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1035)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1036)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                             GALGAS_codeList & outArgument_outCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_34_label_36890 = GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1048)) ;
  GALGAS_uint var_targetAddress_36982 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36890, var_targetAddress_36982, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1049)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36982, var_goto_34_label_36890, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36982, var_goto_34_label_36890, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1053)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_37197 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_37197.hasCurrentObject ()) {
    GALGAS_uint var_targetLabelAddress_37279 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_37197.current_mValue (HERE), var_targetLabelAddress_37279, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1056)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37279, enumerator_37197.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)) ;
    enumerator_37197.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1068)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedGotoTerminator var_t_37724 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1069)).objectCompare (var_t_37724.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1069)))) ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_37858 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_37891 (var_t_37724.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37858.hasCurrentObject () && enumerator_37891.hasCurrentObject () && bool_4) {
        while (enumerator_37858.hasCurrentObject () && enumerator_37891.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_37858.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_37891.current_mValue (HERE).readProperty_string ())) ;
          enumerator_37858.gotoNextObject () ;
          enumerator_37891.gotoNextObject () ;
          if (enumerator_37858.hasCurrentObject () && enumerator_37891.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED BRA") ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_38701 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_38701.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_38701.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)) ;
    enumerator_38701.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_39211 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_39211.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_39211.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1115)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1115)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_39211.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)).add_operation (GALGAS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (enumerator_39211.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1118)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)) ;
      }
    }
    enumerator_39211.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_4 = this ;
  outArgument_outModifiedTerminator = temp_4 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1123)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1123)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1123)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1124)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)) ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_8 = this ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_9 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabels (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1126)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_40321 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1141)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1141)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1141)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1142)) ;
        }
      }
      var_address_40321 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1144)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_address_40321 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1146)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
  cEnumerator_lstringlist enumerator_40593 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_40593.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40593.current_mValue (HERE), var_address_40321, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1149)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1149)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, enumerator_40593.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1150)) ;
      }
    }
    var_address_40321 = var_address_40321.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1152)) ;
    enumerator_40593.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                            GALGAS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_32_label_41097 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1163)) ;
  GALGAS_uint var_targetAddress_41189 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_41097, var_targetAddress_41189, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
  GALGAS_uint var_address_41216 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_41189, var_goto_32_label_41097, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1167)) ;
      var_address_41216 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1168)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_41189, var_goto_32_label_41097, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1170)) ;
    var_address_41216 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1171)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_41480 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_41480.hasCurrentObject ()) {
    GALGAS_uint var_labelAddress_41562 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41480.current_mValue (HERE), var_labelAddress_41562, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1174)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_41216, var_labelAddress_41562, enumerator_41480.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)) ;
    var_address_41216 = var_address_41216.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1176)) ;
    enumerator_41480.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedBraTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1187)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedBraTerminator var_t_42026 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1188)).objectCompare (var_t_42026.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1188)))) ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_42159 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_42192 (var_t_42026.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_42159.hasCurrentObject () && enumerator_42192.hasCurrentObject () && bool_4) {
        while (enumerator_42159.hasCurrentObject () && enumerator_42192.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_42159.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_42192.current_mValue (HERE).readProperty_string ())) ;
          enumerator_42159.gotoNextObject () ;
          enumerator_42192.gotoNextObject () ;
          if (enumerator_42159.hasCurrentObject () && enumerator_42192.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mConditionalBranch ().enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      result_outResult = GALGAS_string ("Z") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      result_outResult = GALGAS_string ("N") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      result_outResult = GALGAS_string ("C") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      result_outResult = GALGAS_string ("OV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      result_outResult = GALGAS_string ("NZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      result_outResult = GALGAS_string ("NN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      result_outResult = GALGAS_string ("NC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      result_outResult = GALGAS_string ("NOV") ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1300)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    result_outResult.plusAssign_operation(temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1304)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1306)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    result_outResult.plusAssign_operation(temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1310)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                   GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  GALGAS_conditionalBranchMode var_branchModeOnFalseLabel_48053 = temp_0.readProperty_mBranchModeOnFalseLabel () ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  GALGAS_conditionalBranchMode var_branchModeOnTrueLabel_48136 = temp_1.readProperty_mBranchModeOnTrueLabel () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      switch (temp_4.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1329)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_branchModeOnFalseLabel_48053 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1330)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1334)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_branchModeOnFalseLabel_48053 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1335)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_12 = this ;
      test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
        switch (temp_13.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1343)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1343)).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_branchModeOnTrueLabel_48136 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (temp_16.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1348)).boolEnum () ;
              if (kBoolTrue == test_17) {
                var_branchModeOnTrueLabel_48136 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1349)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (temp_19.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1350)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
      switch (temp_20.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
          switch (temp_21.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1359)).boolEnum () ;
                if (kBoolTrue == test_22) {
                  var_branchModeOnFalseLabel_48053 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1360)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (temp_24.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)) ;
                }
              }
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1363)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_branchModeOnTrueLabel_48136 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1364)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (temp_27.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
          switch (temp_28.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_29 = kBoolTrue ;
              if (kBoolTrue == test_29) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1372)).boolEnum () ;
                if (kBoolTrue == test_29) {
                  var_branchModeOnTrueLabel_48136 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1373)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (temp_31.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)) ;
                }
              }
              enumGalgasBool test_32 = kBoolTrue ;
              if (kBoolTrue == test_32) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1376)).boolEnum () ;
                if (kBoolTrue == test_32) {
                  var_branchModeOnFalseLabel_48053 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1377)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (temp_34.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1381)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_branchModeOnFalseLabel_48053 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1382)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (temp_37.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)) ;
                }
              }
              enumGalgasBool test_38 = kBoolTrue ;
              if (kBoolTrue == test_38) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1385)).boolEnum () ;
                if (kBoolTrue == test_38) {
                  var_branchModeOnTrueLabel_48136 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1386)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (temp_40.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1390)).boolEnum () ;
                if (kBoolTrue == test_41) {
                  var_branchModeOnFalseLabel_48053 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1391)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (temp_43.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
          switch (temp_44.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_45 = kBoolTrue ;
              if (kBoolTrue == test_45) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1398)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1398)).boolEnum () ;
                if (kBoolTrue == test_45) {
                  var_branchModeOnTrueLabel_48136 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1399)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (temp_47.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_48 = kBoolTrue ;
              if (kBoolTrue == test_48) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_49 = this ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1403)).boolEnum () ;
                if (kBoolTrue == test_48) {
                  var_branchModeOnTrueLabel_48136 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1404)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_50 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (temp_50.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
            }
            break ;
          }
        }
        break ;
      }
    }
  }
  enumGalgasBool test_51 = kBoolTrue ;
  if (kBoolTrue == test_51) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_52 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_53 = this ;
    test_51 = GALGAS_bool (kIsEqual, var_branchModeOnFalseLabel_48053.objectCompare (temp_52.readProperty_mBranchModeOnFalseLabel ())).operator_and (GALGAS_bool (kIsEqual, var_branchModeOnTrueLabel_48136.objectCompare (temp_53.readProperty_mBranchModeOnTrueLabel ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1411)).boolEnum () ;
    if (kBoolTrue == test_51) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_54 = this ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (kBoolFalse == test_51) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_55 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_56 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_57 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_58 = this ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_55.readProperty_mInstructionLocation (), temp_56.readProperty_mConditionalBranch (), temp_57.readProperty_mTargetLabelWhenTrue (), var_branchModeOnTrueLabel_48136, temp_58.readProperty_mTargetLabelWhenFalse (), var_branchModeOnFalseLabel_48053  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1414)) ;
    ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1421)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_4.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1436)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1436)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1437)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
            test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_7.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1440)).boolEnum () ;
            if (kBoolTrue == test_6) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1441)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GALGAS_bool (kIsEqual, temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        switch (temp_11.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
              test_12 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_13.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1448)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1448)).boolEnum () ;
              if (kBoolTrue == test_12) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1449)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
              test_15 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_16.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1452)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1452)).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_17.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1453)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_9) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      switch (temp_18.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
          switch (temp_19.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_20 = kBoolTrue ;
              if (kBoolTrue == test_20) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
                test_20 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_21.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1462)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1462)).boolEnum () ;
                if (kBoolTrue == test_20) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1463)) ;
                }
              }
              enumGalgasBool test_23 = kBoolTrue ;
              if (kBoolTrue == test_23) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                test_23 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_24.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1465)).boolEnum () ;
                if (kBoolTrue == test_23) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_25.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1466)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
          switch (temp_26.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
                test_27 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_28.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1473)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1473)).boolEnum () ;
                if (kBoolTrue == test_27) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_29.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)) ;
                }
              }
              enumGalgasBool test_30 = kBoolTrue ;
              if (kBoolTrue == test_30) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                test_30 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_31.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1476)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1476)).boolEnum () ;
                if (kBoolTrue == test_30) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_32.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_33 = kBoolTrue ;
              if (kBoolTrue == test_33) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                test_33 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_34.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1480)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1480)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1480)).boolEnum () ;
                if (kBoolTrue == test_33) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_35.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)) ;
                }
              }
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                test_36 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_37.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1483)).boolEnum () ;
                if (kBoolTrue == test_36) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_38.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1484)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_39 = kBoolTrue ;
              if (kBoolTrue == test_39) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                test_39 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_40.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1487)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1487)).boolEnum () ;
                if (kBoolTrue == test_39) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_41.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1488)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
          switch (temp_42.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_43 = kBoolTrue ;
              if (kBoolTrue == test_43) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
                test_43 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_44.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1494)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1494)).boolEnum () ;
                if (kBoolTrue == test_43) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_45.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1495)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_46 = kBoolTrue ;
              if (kBoolTrue == test_46) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                test_46 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_47.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1498)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1498)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1498)).boolEnum () ;
                if (kBoolTrue == test_46) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_48.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1499)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
            }
            break ;
          }
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          result_outSize = GALGAS_uint (uint32_t (2U)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          result_outSize = GALGAS_uint (uint32_t (4U)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          result_outSize = GALGAS_uint (uint32_t (6U)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
        switch (temp_5.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            result_outSize = GALGAS_uint (uint32_t (2U)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            result_outSize = GALGAS_uint (uint32_t (4U)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            result_outSize = GALGAS_uint (uint32_t (6U)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      switch (temp_6.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          switch (temp_7.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint (uint32_t (4U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint (uint32_t (6U)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          switch (temp_8.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint (uint32_t (4U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint (uint32_t (6U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint (uint32_t (8U)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          switch (temp_9.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint (uint32_t (6U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint (uint32_t (8U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint (uint32_t (10U)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_trueTargetAddress_59079 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabelWhenTrue (), var_trueTargetAddress_59079, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1554)) ;
  GALGAS_uint var_falseTargetAddress_59164 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabelWhenFalse (), var_falseTargetAddress_59164, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1555)) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  GALGAS_lstring var_Zlabel_59190 = GALGAS_lstring::constructor_new (GALGAS_string ("_Bcc_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1556)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)), temp_2.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      switch (temp_5.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59164, temp_6.readProperty_mTargetLabelWhenFalse (), temp_7.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)), var_Zlabel_59190, temp_8.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), var_falseTargetAddress_59164, temp_9.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1566)), var_Zlabel_59190, temp_10.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1566)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59164, temp_11.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
      test_12 = GALGAS_bool (kIsEqual, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
        switch (temp_14.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59079, temp_15.readProperty_mTargetLabelWhenTrue (), temp_16.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)), var_Zlabel_59190, temp_17.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), var_trueTargetAddress_59079, temp_18.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1579)), var_Zlabel_59190, temp_19.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1579)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59079, temp_20.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1581)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1581)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
      switch (temp_21.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
          switch (temp_22.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59164, temp_23.readProperty_mTargetLabelWhenFalse (), temp_24.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), var_trueTargetAddress_59079, temp_25.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59164, temp_26.readProperty_mTargetLabelWhenFalse (), temp_27.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1591)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59079, temp_28.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
          switch (temp_29.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59079, temp_30.readProperty_mTargetLabelWhenTrue (), temp_31.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), var_falseTargetAddress_59164, temp_32.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)), var_Zlabel_59190, temp_33.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), var_falseTargetAddress_59164, temp_34.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59079, temp_35.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)), var_Zlabel_59190, temp_36.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)), var_falseTargetAddress_59164, temp_37.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59079, temp_38.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
          switch (temp_39.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59079, temp_40.readProperty_mTargetLabelWhenTrue (), temp_41.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59164, temp_42.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1616)), var_Zlabel_59190, temp_43.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1616)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59164, temp_44.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), var_trueTargetAddress_59079, temp_45.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1621)), var_Zlabel_59190, temp_46.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1621)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59164, temp_47.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1622)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1622)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1623)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1623)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59079, temp_48.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1624)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1624)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1637)) ;
        }
      }
      GALGAS_ipic_31__38_ConditionalJumpTerminator var_t_64439 = temp_1 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mConditionalBranch ().objectCompare (var_t_64439.readProperty_mConditionalBranch ())) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_t_64439.readProperty_mTargetLabelWhenTrue ().readProperty_string ())) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mBranchModeOnTrueLabel ().objectCompare (var_t_64439.readProperty_mBranchModeOnTrueLabel ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_t_64439.readProperty_mTargetLabelWhenFalse ().readProperty_string ())) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          result_outResult = GALGAS_bool (kIsEqual, temp_10.readProperty_mBranchModeOnFalseLabel ().objectCompare (var_t_64439.readProperty_mBranchModeOnFalseLabel ())) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_condition_skip_instruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::getter_instructionSize (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_instructionRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 45)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 44)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18InstructionWithNoOperand instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38_InstructionWithNoOperand::getter_instructionDisplay (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (extensionGetter_mnemonic (temp_0.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18InstructionWithNoOperand generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_InstructionWithNoOperand::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                     GALGAS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_c_2918 ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      var_c_2918 = GALGAS_uint (uint32_t (4U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      var_c_2918 = GALGAS_uint (uint32_t (7U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      var_c_2918 = GALGAS_uint (uint32_t (0U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      var_c_2918 = GALGAS_uint (uint32_t (6U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      var_c_2918 = GALGAS_uint (uint32_t (5U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      var_c_2918 = GALGAS_uint (uint32_t (255U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      var_c_2918 = GALGAS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  temp_2.addAssign_operation (var_c_2918  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (extensionGetter_mnemonic (temp_1.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_3566 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_s_3566 = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_s_3566 = GALGAS_string ("ADDWFC") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_s_3566 = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_s_3566 = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_s_3566 = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_s_3566 = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_s_3566 = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_s_3566 = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_s_3566 = GALGAS_string ("RLCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_s_3566 = GALGAS_string ("RLNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_s_3566 = GALGAS_string ("RRCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_s_3566 = GALGAS_string ("RRNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_s_3566 = GALGAS_string ("SUBFWB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_s_3566 = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_s_3566 = GALGAS_string ("SUBWFB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_s_3566 = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_s_3566 = GALGAS_string ("XORWF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_1 = this ;
  var_s_3566.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_3 = this ;
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_and (temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_3566.plusAssign_operation(GALGAS_string (", W, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 146)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
      test_5 = temp_6.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_5) {
        var_s_3566.plusAssign_operation(GALGAS_string (", F, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 148)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_8 = this ;
        test_7 = temp_8.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_7) {
          var_s_3566.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 150)) ;
        }
      }
      if (kBoolFalse == test_7) {
        var_s_3566.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 152)) ;
      }
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_3566  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 154)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FDA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                   const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GALGAS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_4787 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (9216U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_code_4787 = GALGAS_uint (uint32_t (8192U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (5120U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (7168U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (10240U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (4096U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (20480U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (13312U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (17408U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (12288U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (16384U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_code_4787 = GALGAS_uint (uint32_t (21504U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (23552U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_code_4787 = GALGAS_uint (uint32_t (22528U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (14336U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_code_4787 = GALGAS_uint (uint32_t (6144U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_4787 = var_code_4787.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 186)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 188)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_code_4787 = var_code_4787.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_5 = this ;
  var_code_4787 = var_code_4787.operator_or (temp_5.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
  GALGAS_uintlist temp_7 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  temp_7.addAssign_operation (var_code_4787  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), temp_7  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_5982 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_s_5982 = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_s_5982 = GALGAS_string ("MOVWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_s_5982 = GALGAS_string ("MULWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_s_5982 = GALGAS_string ("NEGF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_s_5982 = GALGAS_string ("SETF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = this ;
  var_s_5982.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_5982  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 214)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                  const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                  GALGAS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_6588 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_6588 = GALGAS_uint (uint32_t (27136U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_6588 = GALGAS_uint (uint32_t (28160U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_6588 = GALGAS_uint (uint32_t (512U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_6588 = GALGAS_uint (uint32_t (27648U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_6588 = GALGAS_uint (uint32_t (26624U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_6588 = var_code_6588.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 234)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_3 = this ;
  var_code_6588 = var_code_6588.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_4 = this ;
  GALGAS_uintlist temp_5 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  temp_5.addAssign_operation (var_code_6588  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), temp_5  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 237)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionSize (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  GALGAS_string var_s_7556 = GALGAS_string ("MOVFF ").add_operation (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_7556  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 258)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_code_8056 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 268)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  var_code_8056.addAssign_operation (GALGAS_uint (uint32_t (49152U)).operator_or (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  var_code_8056.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_2 = this ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), var_code_8056  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_literalOperation instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GALGAS_string var_s_8690 = extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (temp_2.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)) ;
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
  temp_3.addAssign_operation (var_s_8690  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
  result_outResult = temp_3 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_literalOperation generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_9160 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mLiteralInstruction ().enumValue ()) {
  case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      var_code_9160 = GALGAS_uint (uint32_t (3840U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_9160 = GALGAS_uint (uint32_t (2816U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_9160 = GALGAS_uint (uint32_t (2304U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_9160 = GALGAS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW:
    {
      var_code_9160 = GALGAS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      var_code_9160 = GALGAS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_9160 = GALGAS_uint (uint32_t (2560U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_9160 = var_code_9160.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 304)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  temp_3.addAssign_operation (var_code_9160  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionSize (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  GALGAS_string var_s_10073 = GALGAS_string ("LFSR ").add_operation (temp_0.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (temp_1.readProperty_mValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_10073  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 325)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_LFSR generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                    const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_code_10521 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  var_code_10521.addAssign_operation (GALGAS_uint (uint32_t (60928U)).operator_or (temp_0.readProperty_mFSRindex ().readProperty_uint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).operator_or (temp_1.readProperty_mValue ().right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_2 = this ;
  var_code_10521.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (temp_2.readProperty_mValue ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_3 = this ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_3.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), var_code_10521  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FBA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
  GALGAS_string var_s_11094 = extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_11094  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 351)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FBA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                   const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GALGAS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_11590 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  switch (temp_0.readProperty_mBitOrientedOp ().enumValue ()) {
  case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_11590 = GALGAS_uint (uint32_t (36864U)) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_11590 = GALGAS_uint (uint32_t (32768U)) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG:
    {
      var_code_11590 = GALGAS_uint (uint32_t (28672U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_11590 = var_code_11590.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 368)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_3 = this ;
  var_code_11590 = var_code_11590.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_4 = this ;
  var_code_11590 = var_code_11590.operator_or (temp_4.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_5 = this ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  temp_6.addAssign_operation (var_code_11590  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVLB instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GALGAS_string var_s_12338 = GALGAS_string ("MOVLB ").add_operation (temp_0.readProperty_mBankIndex ().readProperty_uint ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_12338  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 385)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVLB generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GALGAS_uint var_code_12765 = GALGAS_uint (uint32_t (256U)).operator_or (temp_0.readProperty_mBankIndex ().readProperty_uint () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  temp_2.addAssign_operation (var_code_12765  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 396)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLRD instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  GALGAS_string var_s_13246 = GALGAS_string ("TBLRD ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_13246  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 409)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_13664 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_13664 = GALGAS_uint (uint32_t (8U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_13664 = GALGAS_uint (uint32_t (9U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_13664 = GALGAS_uint (uint32_t (10U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_13664 = GALGAS_uint (uint32_t (11U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  temp_2.addAssign_operation (var_code_13664  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 426)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLWT instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  GALGAS_string var_s_14289 = GALGAS_string ("TBLWT ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_14289  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 439)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_14707 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_14707 = GALGAS_uint (uint32_t (12U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_14707 = GALGAS_uint (uint32_t (13U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_14707 = GALGAS_uint (uint32_t (14U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_14707 = GALGAS_uint (uint32_t (15U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  temp_2.addAssign_operation (var_code_14707  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 456)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionSize (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 470)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  GALGAS_string var_s_15540 = GALGAS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_15540  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 477)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MNOP generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                    const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 488)) ;
  GALGAS_uint var_idx_15993 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_16003 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_16003 = true ;
    while (loop_16003) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
      loop_16003 = GALGAS_bool (kIsStrictInf, var_idx_15993.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_16003) {
        loop_16003 = GALGAS_bool (kIsStrictInf, var_idx_15993.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_16003 && (0 == variant_16003)) {
        loop_16003 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)) ;
      }
      if (loop_16003) {
        variant_16003 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        temp_2.addAssign_operation (GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    NOP"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        var_idx_15993.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 494)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionSize (Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 506)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  GALGAS_string var_s_16687 = GALGAS_string ("NOPBRA ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)) ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  temp_1.addAssign_operation (var_s_16687  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                      const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                      const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 524)) ;
  GALGAS_uint var_idx_17099 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_17109 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_17109 = true ;
    while (loop_17109) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
      loop_17109 = GALGAS_bool (kIsStrictInf, var_idx_17099.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_17109) {
        loop_17109 = GALGAS_bool (kIsStrictInf, var_idx_17099.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_17109 && (0 == variant_17109)) {
        loop_17109 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)) ;
      }
      if (loop_17109) {
        variant_17109 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        temp_2.addAssign_operation (GALGAS_uint (uint32_t (53248U))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    BRA $+2"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        var_idx_17099.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 530)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GALGAS_string var_s_17571 = GALGAS_string ("MOVLW ((").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (temp_1.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (temp_2.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_17571  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 542)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_MOV_LABEL_W generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                  const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                  GALGAS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_18073 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  constinArgument_inDataAddressMap.method_searchKey (temp_0.readProperty_mLabel (), var_address_18073, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 552)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GALGAS_uint var_code_18094 = var_address_18073.add_operation (temp_1.readProperty_mOffset (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).right_shift_operation (temp_2.readProperty_mRightShift (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)) ;
  GALGAS_uint var_code_5F_MOVLW_18167 = GALGAS_uint (uint32_t (3584U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_3 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_4 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_5 = this ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  temp_6.addAssign_operation (var_code_18094.operator_or (var_code_5F_MOVLW_18167 COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    MOVLW ((_data_").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (temp_4.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (temp_5.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 555)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_BLANK instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GALGAS_string var_s_18678 = GALGAS_string ("BLANK ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_18678  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 568)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_BLANK generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GALGAS_uint var_code_19101 = GALGAS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 578)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  temp_1.addAssign_operation (var_code_19101  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_19101.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 579)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GALGAS_string var_s_19551 = GALGAS_string ("FNOP ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_19551  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 592)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FNOP generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                    const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GALGAS_uint var_code_19972 = GALGAS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 602)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  temp_1.addAssign_operation (var_code_19972  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_19972.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 603)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_compare_register instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_instructionDisplay (Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GALGAS_string var_s_20430 = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  switch (temp_1.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_20430.plusAssign_operation(GALGAS_string ("!= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 617)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_20430.plusAssign_operation(GALGAS_string ("<= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 618)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_20430.plusAssign_operation(GALGAS_string (">= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 619)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_20430.plusAssign_operation(GALGAS_string ("!= 0"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 620)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
  var_s_20430.plusAssign_operation(GALGAS_string (" \? ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_20430  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 623)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_21076 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  switch (temp_0.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_code_21076 = GALGAS_uint (uint32_t (25088U)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_code_21076 = GALGAS_uint (uint32_t (25600U)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_code_21076 = GALGAS_uint (uint32_t (24576U)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_code_21076 = GALGAS_uint (uint32_t (26112U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_21076 = var_code_21076.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 642)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
  var_code_21076 = var_code_21076.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) ;
  GALGAS_string var_s_21421 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
  switch (temp_4.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_21421.plusAssign_operation(GALGAS_string ("CPFSEQ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 648)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_21421.plusAssign_operation(GALGAS_string ("CPFSGT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 649)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_21421.plusAssign_operation(GALGAS_string ("CPFSLT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 650)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_21421.plusAssign_operation(GALGAS_string ("TSTFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 651)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
  var_s_21421.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_7 = this ;
    test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_21421.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 655)) ;
    }
  }
  GALGAS_uintlist temp_8 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  temp_8.addAssign_operation (var_code_21076  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s_21421, temp_8  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 658)) ;
  GALGAS_codeList var_c_21909 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_9 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_9.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 662)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_21909, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 661)) ;
  outArgument_outCode.plusAssign_operation(var_c_21909, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 667)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_22381 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_22618 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 682)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_22618, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 681)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_22381.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_22618, temp_4.readProperty_mCompareInstruction (), temp_5.readProperty_mRegisterDescription ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 690)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_BitTestSkip instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_23238 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_23238.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 707)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_s_23238.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  GALGAS_stringlist var_x_23400 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 711)) ;
  var_s_23238.plusAssign_operation(var_x_23400.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_23238  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 713)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                   const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                   GALGAS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_23835 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_23835 = GALGAS_uint (uint32_t (40960U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_23835 = GALGAS_uint (uint32_t (45056U)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_23835 = var_code_23835.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 730)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  var_code_23835 = var_code_23835.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
  var_code_23835 = var_code_23835.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) ;
  GALGAS_string var_s_24149 = GALGAS_string ("    ") ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_7 = this ;
    test_6 = temp_7.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_24149.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 737)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_s_24149.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 739)) ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_8 = this ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_9 = this ;
  var_s_24149.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (temp_9.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)) ;
  GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  temp_10.addAssign_operation (var_code_23835  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s_24149, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) ;
  GALGAS_codeList var_c_24508 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 747)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_24508, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 746)) ;
  outArgument_outCode.plusAssign_operation(var_c_24508, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                 GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                 GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_24975 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_25212 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 767)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_25212, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 766)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_24975.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_25212, temp_4.readProperty_mSkipIfSet (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 775)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_25825 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_s_25825 = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_s_25825 = GALGAS_string ("DCFSNZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_s_25825 = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_s_25825 = GALGAS_string ("INFSNZ") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  var_s_25825.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_25825.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 800)) ;
    }
  }
  var_s_25825.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 802)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  GALGAS_stringlist var_x_26130 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 803)) ;
  var_s_25825.plusAssign_operation(var_x_26130.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_25825  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 805)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                           GALGAS_codeList & outArgument_outCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_26557 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_binCode_26557 = GALGAS_uint (uint32_t (11264U)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_binCode_26557 = GALGAS_uint (uint32_t (19456U)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_binCode_26557 = GALGAS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_binCode_26557 = GALGAS_uint (uint32_t (18432U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_binCode_26557 = var_binCode_26557.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 823)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
  var_binCode_26557 = var_binCode_26557.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) ;
  GALGAS_string var_assemblyCode_26935 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  switch (temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_assemblyCode_26935.plusAssign_operation(GALGAS_string ("DECFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 829)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_assemblyCode_26935.plusAssign_operation(GALGAS_string ("DCFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 830)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_assemblyCode_26935.plusAssign_operation(GALGAS_string ("INCFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 831)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_assemblyCode_26935.plusAssign_operation(GALGAS_string ("INFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 832)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
  var_assemblyCode_26935.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_7 = this ;
    test_6 = temp_7.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_assemblyCode_26935.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 836)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_binCode_26557 = var_binCode_26557.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 838)) ;
    var_assemblyCode_26935.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 839)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_9 = this ;
    test_8 = temp_9.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_8) {
      var_binCode_26557 = var_binCode_26557.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)) ;
      var_assemblyCode_26935.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 843)) ;
    }
  }
  GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  temp_10.addAssign_operation (var_binCode_26557  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_26935, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)) ;
  GALGAS_codeList var_c_27681 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 850)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_27681, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 849)) ;
  outArgument_outCode.plusAssign_operation(var_c_27681, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 855)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_28140 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_28377 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 870)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_28377, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 869)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_28140.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_28377, temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 878)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionSize (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      result_outSize = GALGAS_uint (uint32_t (4U)) ;
    }
    break ;
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_instructionRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
        test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_2.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_3.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)) ;
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_3.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 932)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_5 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (temp_5.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_6 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (temp_6.readProperty_mInstructionLocation (), temp_7.readProperty_mTargetLabel (), GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 934))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 934)) ;
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_9 = this ;
        test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_11 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_11.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)).add_operation (GALGAS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).add_operation (temp_12.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)) ;
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_31048 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
      var_s_31048 = GALGAS_string ("JSR ").add_operation (temp_1.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      var_s_31048 = GALGAS_string ("RCALL ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      var_s_31048 = GALGAS_string ("CALL ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)) ;
    }
    break ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_31048  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 955)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                    GALGAS_codeList & outArgument_outCode,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_31642 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_31642, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 965)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_31642, temp_2.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 968)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_31642, temp_3.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 970)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionSize (Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)).substract_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_32570 = GALGAS_string ("COMPUTED ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 994)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_32570.plusAssign_operation(GALGAS_string ("(uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 995)) ;
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_32570  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32714 (temp_2.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_32714.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_32758 (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32714.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 999)), kENUMERATION_UP) ;
    while (enumerator_32758.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GALGAS_string ("   ").add_operation (enumerator_32758.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000)) ;
      enumerator_32758.gotoNextObject () ;
    }
    enumerator_32714.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_instructionRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GALGAS_bigint temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mUsesRCALL ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1012)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1012)) ;
  }
  GALGAS_uint var_address_33195 = constinArgument_inAddress.add_operation (temp_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1012)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1012)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_33276 (temp_3.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_33276.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_33276.current_mInstruction (HERE).ptr (), var_address_33195, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
    var_address_33195 = var_address_33195.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1020)) ;
    enumerator_33276.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
    test_4 = temp_5.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).boolEnum () ;
        if (kBoolTrue == test_6) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1024)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                               GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_unusedConversionCount_34128 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_unusedListing_34168 = GALGAS_string::makeEmptyString () ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
  GALGAS_bigint temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
  }
  GALGAS_uint var_address_34199 = constinArgument_inAddress.add_operation (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34280 (temp_4.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_34280.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction joker_34536 ; // Joker input parameter
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_34280.current_mInstruction (HERE).ptr (), var_address_34199, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount_34128, var_unusedListing_34168, joker_34536, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1044)) ;
    var_address_34199 = var_address_34199.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
    enumerator_34280.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)).add_operation (GALGAS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetInstructions (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1058)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GALGAS_lstring var_target_35387 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_goto_4"), temp_0.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1073)) ;
  GALGAS_uint var_computetedGoto_34_Address_35506 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_35387, var_computetedGoto_34_Address_35506, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1075)) ;
  GALGAS_uint var_currentInstructionAddress_35543 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_currentInstructionAddress_35543 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1079)) ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_35506, var_target_35387, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1080)) ;
    }
  }
  if (kBoolFalse == test_1) {
    var_currentInstructionAddress_35543 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1082)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_35506, var_target_35387, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1083)) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  GALGAS_uint var_instructionFollowingComputedRcallAddress_35876 = var_currentInstructionAddress_35543.add_operation (temp_3.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).multiply_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  GALGAS_lstring var_nextInstructionLabel_35995 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), temp_4.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)) ;
  GALGAS_uint var_idx_36109 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_36139 (temp_5.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_36139.hasCurrentObject ()) {
    var_idx_36109.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1089)) ;
    GALGAS_codeList var_instructionCode_36317 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_36139.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_35543, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_36317, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
    outArgument_outCode.plusAssign_operation(var_instructionCode_36317, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)) ;
    var_currentInstructionAddress_35543 = var_currentInstructionAddress_35543.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_7 = this ;
      test_6 = GALGAS_bool (kIsStrictInf, var_idx_36109.objectCompare (temp_7.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1098)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_35543, var_instructionFollowingComputedRcallAddress_35876, var_nextInstructionLabel_35995, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)) ;
        var_currentInstructionAddress_35543 = var_currentInstructionAddress_35543.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
      }
    }
    enumerator_36139.gotoNextObject () ;
  }
  outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_35995, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                          GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  cEnumerator_lstringlist enumerator_4391 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_4391.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4391.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 151)) ;
    enumerator_4391.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  cEnumerator_lstringlist enumerator_4693 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_4693.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4693.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 162)) ;
    enumerator_4693.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_lstringlist enumerator_4996 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_4996.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4996.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 173)) ;
    enumerator_4996.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 191)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5636 (temp_1.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_5636.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_5636.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 193)) ;
    }
    enumerator_5636.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 211)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mThenInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 220)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 221)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_macro addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_instructionList_6956 ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  GALGAS_lstringlist joker_6948 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), joker_6948, var_instructionList_6956, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 230)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (var_instructionList_6956, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 231)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 264)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9728 (temp_0.readProperty_mBlockList (), kENUMERATION_UP) ;
  while (enumerator_9728.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_9728.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 330)) ;
    }
    enumerator_9728.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList'
//
//--------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10100 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_10100.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_10100.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 342)) ;
    enumerator_10100.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const GALGAS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                              const GALGAS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                              const GALGAS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                              const GALGAS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 356)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_10859 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_10859.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_10859.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 359)) ;
    }
    enumerator_10859.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11083 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_11083.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11083.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 367)) ;
    enumerator_11083.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11261 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_11261.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11261.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    enumerator_11261.gotoNextObject () ;
  }
  GALGAS_stringset var_s_11427 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 374)) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).isValid ()) {
    uint32_t variant_11454 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).uintValue () ;
    bool loop_11454 = true ;
    while (loop_11454) {
      loop_11454 = GALGAS_bool (kIsNotEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11454) {
        loop_11454 = GALGAS_bool (kIsNotEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11454 && (0 == variant_11454)) {
        loop_11454 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 375)) ;
      }
      if (loop_11454) {
        variant_11454 -- ;
        var_s_11427 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11601 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_11601.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11601.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11601.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 380)) ;
              }
            }
          }
          enumerator_11601.gotoNextObject () ;
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

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_pic_31__38_InterruptDefinitionList operand0 = GALGAS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                       inCompiler
                                                                                                                       COMMA_THERE) ;
  const GALGAS_pic_31__38_RoutineDefinitionList operand1 = GALGAS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                   inCompiler
                                                                                                                   COMMA_THERE) ;
  const GALGAS_pic_31__38_MacroMap operand2 = GALGAS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand3 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand4 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
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
//
//Overriding extension method '@pic18Instruction_block performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1147 = GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 33)) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1241 (temp_0.readProperty_mBlockList (), kENUMERATION_UP) ;
  while (enumerator_1241.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_1463 ;
    {
    routine_performInlineFromInstructionList (enumerator_1241.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1463, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1147.addAssign_operation (enumerator_1241.current_mBlockName (HERE), var_instructionList_1463, enumerator_1241.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1241.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1241.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_block::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mStartBlockName (), var_inlinedBlockList_1147, temp_3.readProperty_mEndOfBlockInstruction ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                     const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                     const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                     GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_instructionList_2289 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2289, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_1 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (temp_1.readProperty_mInstructionLocation (), var_instructionList_2289, temp_2.readProperty_mEndOfInstructionList ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                         const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                         const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                         GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_2959 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2959, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList_2993 = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 91)) ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_3077 (temp_1.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_3077.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_3311 ;
    {
    routine_performInlineFromInstructionList (enumerator_3077.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3311, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_2993.addAssign_operation (enumerator_3077.current_mCondition (HERE), var_instructionList_3311, enumerator_3077.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_3077.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (temp_2.readProperty_mInstructionLocation (), var_repeatedInstructionList_2959, temp_3.readProperty_mEndOfRepeatedInstructionList (), var_whilePartList_2993  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                      const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                      const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                      GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_instructionList_4087 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_4087, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mRegister (), var_instructionList_4087, temp_3.readProperty_mEndOfSaveBankInstruction ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                              const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                              GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_4783 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mThenInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4783, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_4991 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_performInlineFromInstructionList (temp_1.readProperty_mElseInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4991, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mIfCondition (), var_thenInstructionList_4783, var_elseInstructionList_4991, temp_4.readProperty_mEndOfElsePartLocation ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                 const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                 const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                 GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_inlineDone_5623 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_1 = this ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_3 = this ;
    test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (temp_2.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (temp_3.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_luint var_requiredBank_5912 ;
      GALGAS_bool var_isNoReturn_6006 ;
      GALGAS_pic_31__38_InstructionList var_instructionList_6050 ;
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      GALGAS_luint joker_5931 ; // Joker input parameter
      GALGAS_bool joker_5963 ; // Joker input parameter
      constinArgument_inDeclaredRoutineMap.method_searchKey (temp_4.readProperty_mTargetLabel (), var_requiredBank_5912, joker_5931, joker_5963, var_isNoReturn_6006, var_instructionList_6050, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isNoReturn_6006.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray7  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
          var_inlineDone_5623.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_5912.readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const GALGAS_pic_31__38_Instruction_5F_JSR temp_9 = this ;
            ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (temp_9.readProperty_mInstructionLocation (), var_requiredBank_5912.readProperty_uint ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
          }
        }
        GALGAS_stringset var_currentlyInlinedRoutineSet_6380 = constinArgument_inCurrentlyInlinedRoutineSet ;
        const GALGAS_pic_31__38_Instruction_5F_JSR temp_10 = this ;
        var_currentlyInlinedRoutineSet_6380.addAssign_operation (temp_10.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
        cEnumerator_pic_31__38_InstructionList enumerator_6557 (var_instructionList_6050, kENUMERATION_UP) ;
        while (enumerator_6557.hasCurrentObject ()) {
          callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_6557.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6380, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
          enumerator_6557.gotoNextObject () ;
        }
        var_inlineDone_5623 = GALGAS_bool (true) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    var_inlineDone_5623 = GALGAS_bool (false) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_inlineDone_5623.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_12 = this ;
      ioArgument_ioInstructionList.addAssign_operation (temp_12  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList'
//
//--------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                               GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 213)) ;
  cEnumerator_pic_31__38_InstructionList enumerator_7323 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_7323.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_7323.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_7323.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                              GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                              GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7872 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 233)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7990 (ioArgument_ioInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_7990.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8227 ;
    {
    routine_performInlineFromInstructionList (enumerator_7990.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_8227, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7872.addAssign_operation (enumerator_7990.current_mInterruptName (HERE), enumerator_7990.current_mFastReturn (HERE), var_instructionList_8227, enumerator_7990.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7990.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7872 ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_8463 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 250)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8618 (ioArgument_ioRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_8618.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8851 ;
    {
    routine_performInlineFromInstructionList (enumerator_8618.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8851, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_8463.addAssign_operation (enumerator_8618.current_mRoutineName (HERE), enumerator_8618.current_mRequiredBank (HERE), enumerator_8618.current_mReturnedBank (HERE), enumerator_8618.current_mPreservesBank (HERE), enumerator_8618.current_mIsNoReturn (HERE), var_instructionList_8851, enumerator_8618.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8618.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_8463 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList'
//
//--------------------------------------------------------------------------------------------------

void routine_displayBlockList (const GALGAS_string constinArgument_inTitle,
                               GALGAS_string & ioArgument_ioListFileContents,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1388 (constinArgument_inGeneratedBlockList, kENUMERATION_UP) ;
  GALGAS_uint index_1383 ((uint32_t) 0) ;
  while (enumerator_1388.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1452 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, index_1383.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_1452 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1383.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_1452 = GALGAS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1388.current_mBlock (HERE), var_nextBlockLabel_1452, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1388.gotoNextObject () ;
    index_1383.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                    const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                    GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_1 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 155)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_analyzeSimpleInstruction (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6677 ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_1 = this ;
  GALGAS_bitSliceTable joker_6705 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 178)), var_IPICregisterDescription_6677, joker_6705, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 173)) ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_3 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_4 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), var_IPICregisterDescription_6677, temp_4.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 183)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_analyzeSimpleInstruction (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                         const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7615 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_0 = this ;
  GALGAS_bitSliceTable joker_7643 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_7615, joker_7643, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 203)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7715 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_1 = this ;
  switch (temp_1.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_7715 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_7715 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_7715 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_7715 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_7715 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 219)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)), GALGAS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)) ;
      var_code_7715.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FA temp_3 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_3.readProperty_mInstructionLocation (), var_code_7715, var_IPICregisterDescription_7615  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 223)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_9013 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mSourceRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_sourceIPICregisterDescription_9013, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 241)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9278 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_1 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_1.readProperty_mDestinationRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_destinationIPICregisterDescription_9278, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 248)) ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_2 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_2.readProperty_mInstructionLocation (), var_sourceIPICregisterDescription_9013, var_destinationIPICregisterDescription_9278  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 255)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_analyzeSimpleInstruction (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10177 ;
  GALGAS_bitSliceTable var_bitSliceTable_10225 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_10177, var_bitSliceTable_10225, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 273)) ;
  GALGAS_uint var_bitNumber_10393 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10225, var_bitNumber_10393, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 283)) ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_3 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_10177, var_bitNumber_10393  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 290)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                       const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                       const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                       GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                       const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                       GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_11129 ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11129, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 309)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_11129.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_result_11129.objectCompare (GALGAS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_11129.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_4 = this ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_5 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_11129.operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                           const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                           GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_12062 ;
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12062, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 333)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_12062.objectCompare (GALGAS_sint_36__34_ (int64_t (4095LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_result_12062.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_fnop temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_12062.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_4 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (temp_4.readProperty_mInstructionLocation (), var_result_12062.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 341))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 339)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                           const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                           GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_LFSR temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFSRindex ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_2 = this ;
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFSRindex ().readProperty_location (), GALGAS_string ("the LFSR register idx (").add_operation (temp_3.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)) ;
    }
  }
  GALGAS_sint_36__34_ var_result_13100 ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_5 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13100, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictSup, var_result_13100.objectCompare (GALGAS_sint_36__34_ (int64_t (4095LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_result_13100.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_13100.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_9 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_10 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mFSRindex (), var_result_13100.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 365)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                          const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_13985 ;
  GALGAS_uint var_requiredBank_14007 ;
  GALGAS_uint var_returnedBank_14031 ;
  GALGAS_bool var_preservesBank_14055 ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_13985, var_requiredBank_14007, var_returnedBank_14031, var_preservesBank_14055, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_14007.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_14007.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
      GALGAS_string var_errorMessage_14159 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (var_requiredBank_14007.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)) ;
      var_errorMessage_14159.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_14159.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_14159.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_14159, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_13985.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_14055.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 398)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_14031 ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = constinArgument_inShouldPreserveBSR.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_11 = this ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("the routine call should preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_13 = this ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_14 = this ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_15 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (temp_13.readProperty_mInstructionLocation (), temp_14.readProperty_mTargetLabel (), temp_15.readProperty_mKind ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 405)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                               GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                               const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GALGAS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                               GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                               const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                               GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_checkbank temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mBankIndex ().objectCompare (GALGAS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checkbank temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 455)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_8 = this ;
        test_7 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_9 = this ;
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_10 = this ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                 GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                 const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                 const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                 GALGAS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                 GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                 GALGAS_uint & ioArgument_ioCurrentBank,
                                                                 const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checknobank temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 484)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18PiccoloSimpleInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_PiccoloSimpleInstruction::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                               GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GALGAS_routineMap constinArgument_inRoutineMap,
                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                               const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                               const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstruction var_instruction_18791 ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction temp_0 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18791, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 506)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction_18791, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                             GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                             const GALGAS_routineMap constinArgument_inRoutineMap,
                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                             const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                             GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                             GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GALGAS_lstring & ioArgument_ioBlockLabel,
                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                             const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                             const GALGAS_routineKind constinArgument_inRoutineKind,
                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 540)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 543)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_19820 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_4 = this ;
  GALGAS_lstring var_loopLabel_19872 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), temp_4.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_5 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 551)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_5.readProperty_mInstructionLocation (), var_loopLabel_19872, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 554)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 555)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 559)) ;
  ioArgument_ioBlockLabel = var_loopLabel_19872 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_6 = this ;
  routine_analyzeInstructionList (temp_6.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 561)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfInstructionList (), GALGAS_string ("\"forever\" instruction list execution is endless"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_10 = this ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_10.readProperty_mInstructionLocation (), var_loopLabel_19872, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 587)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 588)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19820)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfInstructionList (), GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 594)) ;
    }
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 597)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                               GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                               const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GALGAS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                               GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                               const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                               GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_nobanksel temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
    }
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 621)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                              GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                              const GALGAS_routineMap constinArgument_inRoutineMap,
                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                              const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                              const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                              GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                              GALGAS_lstring & ioArgument_ioBlockLabel,
                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                              GALGAS_uint & ioArgument_ioCurrentBank,
                                                              const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                              const GALGAS_routineKind constinArgument_inRoutineKind,
                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerExpression var_BSRregister_23151 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23470 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) var_BSRregister_23151.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_BSR_5F_IPICregisterDescription_23470, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 650)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23763 ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_save_5F_IPICregisterDescription_23763, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_1.readProperty_mInstructionLocation (), var_BSR_5F_IPICregisterDescription_23470, var_save_5F_IPICregisterDescription_23763  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 671)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)) ;
  GALGAS_uint var_finalBank_24113 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  routine_analyzeInstructionList (temp_2.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24113, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 675)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_savebank temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfSaveBankInstruction (), GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 694)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_6.readProperty_mInstructionLocation (), var_save_5F_IPICregisterDescription_23763, var_BSR_5F_IPICregisterDescription_23470  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                        GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                        const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                        const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                        GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                        GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                        GALGAS_uint & ioArgument_ioCurrentBank,
                                                                        const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                        const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_lowerBound_25717 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25717, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  GALGAS_sint_36__34_ var_upperBound_25827 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25827, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 726)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_lowerBound_25717.objectCompare (var_upperBound_25827)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_25717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (var_upperBound_25827.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_upperBound_25827.substract_operation (var_lowerBound_25717, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).objectCompare (GALGAS_sint_36__34_ (int64_t (16777215LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_25827.substract_operation (var_lowerBound_25717, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_26266 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_26298 = constinArgument_inConstantMap ;
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = this ;
  var_tempConstantMap_26298.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_25717, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = this ;
  routine_analyzeInstructionList (temp_9.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26298, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26266, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 756)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_finalBank_26266.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = this ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 759)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_27128 = var_lowerBound_25717.add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  if (var_upperBound_25827.substract_operation (var_lowerBound_25717, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).isValid ()) {
    uint32_t variant_27151 = var_upperBound_25827.substract_operation (var_lowerBound_25717, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).uintValue () ;
    bool loop_27151 = true ;
    while (loop_27151) {
      GALGAS_bool test_16 = GALGAS_bool (kIsInfOrEqual, var_idx_27128.objectCompare (var_upperBound_25827)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      }
      loop_27151 = test_16.isValid () ;
      if (loop_27151) {
        loop_27151 = test_16.boolValue () ;
      }
      if (loop_27151 && (0 == variant_27151)) {
        loop_27151 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
      }
      if (loop_27151) {
        variant_27151 -- ;
        GALGAS_constantMap var_constantMap_27257 = constinArgument_inConstantMap ;
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = this ;
        var_constantMap_27257.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_27128, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = this ;
        routine_analyzeInstructionList (temp_18.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27257, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 766)) ;
        }
        var_idx_27128.plusAssign_operation(GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                             GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                             const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                             const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                             GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 807)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_Instruction_5F_banksel temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBankIndex ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("selected bank idx should be lower or equal to 15"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 811)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_8 = this ;
      test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_9 = this ;
        ioArgument_ioCurrentBank = temp_9.readProperty_mBankIndex ().readProperty_uint () ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_10 = this ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_11 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mBankIndex ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_13 = this ;
        test_12 = temp_13.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_pic_31__38_Instruction_5F_banksel temp_14 = this ;
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (temp_14.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                         const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
    }
  }
  GALGAS_uint var_registerAddress_30241 ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = this ;
  callExtensionMethod_getRegisterAddress ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30241, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 842)) ;
  GALGAS_uint var_newBank_30362 = var_registerAddress_30241.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30362)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30362 ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = this ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (temp_5.readProperty_mInstructionLocation (), GALGAS_luint::constructor_new (var_newBank_30362, temp_6.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 855))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 857)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_8 = this ;
      test_7 = temp_8.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (temp_9.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_30362.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_1 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 877)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_1 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 895)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                          GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                          GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                          GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                          GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_MNOP temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_4 = this ;
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 927)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                            GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                            GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                            const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_4 = this ;
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 958)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                             GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                             const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                             const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_34885 ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34885, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_34885.objectCompare (GALGAS_sint_36__34_ (int64_t (16777215LL)))).operator_or (GALGAS_bool (kIsStrictInf, var_result_34885.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_34885.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
    }
  }
  GALGAS_uint var_address_35110 = var_result_34885.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = this ;
  GALGAS_registerExpression var_TBLPTRU_35156 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_4.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35508 ;
  GALGAS_bitSliceTable joker_35539 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_35156.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35508, joker_35539, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)) ;
  GALGAS_uint var_upper_35580 = var_address_35110.right_shift_operation (GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsEqual, var_upper_35580.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_6.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1006)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsEqual, var_upper_35580.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_8.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1022)), var_upper_35580  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_10.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1029)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = this ;
  GALGAS_registerExpression var_TBLPTRH_36568 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_11.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1036)) ;
  GALGAS_bitSliceTable joker_36907 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_36568.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35508, joker_36907, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1041)) ;
  GALGAS_uint var_high_36948 = var_address_35110.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_high_36948.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_13.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  if (kBoolFalse == test_12) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsEqual, var_high_36948.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_15.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)) ;
      }
    }
    if (kBoolFalse == test_14) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_16.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)), var_high_36948  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = this ;
  GALGAS_registerExpression var_TBLPTRL_37939 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1085)) ;
  GALGAS_bitSliceTable joker_38277 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_37939.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35508, joker_38277, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  GALGAS_uint var_low_38318 = var_address_35110.operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsEqual, var_low_38318.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_20.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1104)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1107)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsEqual, var_low_38318.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1112)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1115)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)) ;
      }
    }
    if (kBoolFalse == test_21) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_23.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1120)), var_low_38318  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_24.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)), var_outIPICregisterDescription_35508  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_data_40021 ;
  GALGAS_bool var_isData_38__40031 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_40021, var_isData_38__40031, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1154)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__40031.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GALGAS_string ("this data is a byte array; use ldata8ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_5 = this ;
    test_4 = GALGAS_bool (kIsSupOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_40021.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GALGAS_string ("index should be < ").add_operation (var_data_40021.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_8 = this ;
  GALGAS_registerExpression var_TBLPTRU_40291 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_40644 ;
  GALGAS_bitSliceTable joker_40675 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_40291.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40644, joker_40675, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_9 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_10 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)), GALGAS_uint (uint32_t (16U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1184)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_12.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1188)), var_outIPICregisterDescription_40644  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1191)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_13 = this ;
  GALGAS_registerExpression var_TBLPTRH_41121 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)) ;
  GALGAS_bitSliceTable joker_41459 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_41121.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40644, joker_41459, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_14 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_15 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GALGAS_uint (uint32_t (8U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription_40644  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_18 = this ;
  GALGAS_registerExpression var_TBLPTRL_41903 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1228))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1225)) ;
  GALGAS_bitSliceTable joker_42242 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_41903.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40644, joker_42242, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1230)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_19 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_20 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)), var_outIPICregisterDescription_40644  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                  GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                  const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                  const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                  const GALGAS_constantMap constinArgument_inConstantMap,
                                                                  const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                  GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                  GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                  GALGAS_uint & ioArgument_ioCurrentBank,
                                                                  const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_data_43408 ;
  GALGAS_bool var_isData_38__43418 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_43408, var_isData_38__43418, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__43418.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GALGAS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_5 = this ;
    test_4 = GALGAS_bool (kIsSupOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_43408.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GALGAS_string ("index should be < ").add_operation (var_data_43408.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_8 = this ;
  GALGAS_registerExpression var_TBLPTRU_43702 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1288))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_44055 ;
  GALGAS_bitSliceTable joker_44086 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_43702.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44055, joker_44086, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1290)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_9 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_10 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint (uint32_t (16U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1306)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_12.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)), var_outIPICregisterDescription_44055  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_13 = this ;
  GALGAS_registerExpression var_TBLPTRH_44528 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1316)) ;
  GALGAS_bitSliceTable joker_44866 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_44528.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44055, joker_44866, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_14 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_15 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint (uint32_t (8U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), var_outIPICregisterDescription_44055  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1344)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_18 = this ;
  GALGAS_registerExpression var_TBLPTRL_45306 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1347)) ;
  GALGAS_bitSliceTable joker_45645 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_45306.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44055, joker_45645, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1352)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_19 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_20 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)), var_outIPICregisterDescription_44055  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1375)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)) ;
}
