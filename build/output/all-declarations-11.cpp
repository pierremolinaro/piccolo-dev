#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-11.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension Getter '@ipic18Block blockSize'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint extensionGetter_blockSize (const GALGAS_ipic_31__38_Block & inObject,
                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  result_outResult = callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 92)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_2739 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_2739.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_2739.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)) ;
    enumerator_2739.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@ipic18Block relativeBranchOverflow'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_relativeBranchOverflow (const GALGAS_ipic_31__38_Block inObject,
                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                             const GALGAS_uint constinArgument_inBlockStartAddress,
                                             GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_6210 = constinArgument_inBlockStartAddress ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_6262 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_6262.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6262.current_mInstruction (HERE).ptr (), var_address_6210, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 201)) ;
    var_address_6210 = var_address_6210.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6262.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)) ;
    enumerator_6262.gotoNextObject () ;
  }
  callExtensionMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), var_address_6210, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 210)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@ipic18Block generateCodeForBlock'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCodeForBlock (const GALGAS_ipic_31__38_Block inObject,
                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataMap,
                                           const GALGAS_uint constinArgument_inBlockAddress,
                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                           GALGAS_string & ioArgument_ioListFileContents,
                                           GALGAS_string & ioArgument_ioAssemblyString,
                                           GALGAS_generatedCodeMap & ioArgument_ioGeneratedCodeMap,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Addr.  Code       Duration    Assembly                                           Intermediate Representation\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 98)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 99)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_codeList temp_1 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 102)) ;
    temp_1.addAssign_operation (inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 102)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 102))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 102)) ;
    GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
    temp_2.addAssign_operation (GALGAS_string ("LABEL ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
    routine_generateLineWithCode (constinArgument_inBlockAddress, temp_1, temp_2, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 104)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 100)) ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 108)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_codeList var_cd_3445 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 110)) ;
    var_cd_3445.addAssign_operation (GALGAS_string ("ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 111)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 111))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 111)) ;
    var_cd_3445.addAssign_operation (inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 112))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)) ;
    {
    GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 116)) ;
    temp_3.addAssign_operation (GALGAS_string ("LABEL ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 116)).add_operation (GALGAS_string (", ORG "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 116)).add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 116))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 116)) ;
    routine_generateLineWithCode (constinArgument_inBlockAddress, var_cd_3445, temp_3, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 117)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)) ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(GALGAS_string ("    ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 121)) ;
    ioArgument_ioAssemblyString.plusAssign_operation(inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)) ;
  }
  GALGAS_uint var_address_3894 = constinArgument_inBlockAddress ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_3940 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_3940.hasCurrentObject ()) {
    GALGAS_codeList var_code_4053 ;
    callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3940.current_mInstruction (HERE).ptr (), var_address_3894, constinArgument_inSymbolTable, constinArgument_inDataMap, var_code_4053, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 127)) ;
    {
    ioArgument_ioGeneratedCodeMap.setter_insertKey (var_address_3894.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 133)).getter_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 133)), var_code_4053, enumerator_3940.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 133)) ;
    }
    {
    routine_generateLineWithCode (var_address_3894, var_code_4053, callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3940.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 137)), enumerator_3940.current_mMin (HERE), enumerator_3940.current_mMax (HERE), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 134)) ;
    }
    cEnumerator_codeList enumerator_4315 (var_code_4053, kEnumeration_up) ;
    while (enumerator_4315.hasCurrentObject ()) {
      cEnumerator_uintlist enumerator_4346 (enumerator_4315.current_mBinaryCode (HERE), kEnumeration_up) ;
      while (enumerator_4346.hasCurrentObject ()) {
        {
        routine_emitCode (enumerator_4346.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 144)) ;
        }
        enumerator_4346.gotoNextObject () ;
      }
      ioArgument_ioAssemblyString.plusAssign_operation(enumerator_4315.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 146)) ;
      enumerator_4315.gotoNextObject () ;
    }
    var_address_3894 = var_address_3894.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3940.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 148)) ;
    GALGAS_uint var_generatedCodeSize_4586 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_codeList enumerator_4609 (var_code_4053, kEnumeration_up) ;
    while (enumerator_4609.hasCurrentObject ()) {
      var_generatedCodeSize_4586 = var_generatedCodeSize_4586.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_4609.current_mBinaryCode (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 152)) ;
      enumerator_4609.gotoNextObject () ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_generatedCodeSize_4586.objectCompare (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3940.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 154)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_4767 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_4586.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 155)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3940.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)) ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 157)), var_s_4767  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_4767.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 158)) ;
    }
    enumerator_3940.gotoNextObject () ;
  }
  GALGAS_codeList var_code_5131 ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), var_address_3894, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_code_5131, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 162)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 171)) ;
  temp_5.addAssign_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 171))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 171)) ;
  routine_generateLineWithCode (var_address_3894, var_code_5131, temp_5, inObject.mAttribute_mTerminatorMin, inObject.mAttribute_mTerminatorMax, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 168)) ;
  }
  cEnumerator_codeList enumerator_5327 (var_code_5131, kEnumeration_up) ;
  while (enumerator_5327.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_5356 (enumerator_5327.current_mBinaryCode (HERE), kEnumeration_up) ;
    while (enumerator_5356.hasCurrentObject ()) {
      {
      routine_emitCode (enumerator_5356.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 178)) ;
      }
      enumerator_5356.gotoNextObject () ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(enumerator_5327.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 180)) ;
    enumerator_5327.gotoNextObject () ;
  }
  GALGAS_uint var_generatedCodeSize_5530 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_codeList enumerator_5553 (var_code_5131, kEnumeration_up) ;
  while (enumerator_5553.hasCurrentObject ()) {
    var_generatedCodeSize_5530 = var_generatedCodeSize_5530.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_5553.current_mBinaryCode (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 185)) ;
    enumerator_5553.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_generatedCodeSize_5530.objectCompare (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 187)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_string var_s_5727 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_5530.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 188)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)) ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 190)), var_s_5727  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_5727.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 191)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 194)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@ipic18Block computeDuration'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_computeDuration (const GALGAS_ipic_31__38_Block inObject,
                                      GALGAS_blockDurationMap & ioArgument_ioExploredBlockMap,
                                      GALGAS_string inArgument_inNextLabel,
                                      GALGAS_ipic_31__38_Block & outArgument_outNewBlock,
                                      GALGAS_bool & ioArgument_ioContinue,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNewBlock.drop () ; // Release 'out' argument
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, temp_0.mAttribute_mTerminatorMin.objectCompare (temp_1.mAttribute_mTerminatorMax)).boolEnum () ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38_Block temp_3 = inObject ;
    outArgument_outNewBlock = temp_3 ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_terminatorMin_22152 ;
    GALGAS_uint var_terminatorMax_22171 ;
    const GALGAS_ipic_31__38_Block temp_4 = inObject ;
    callExtensionMethod_terminatorMinMaxDuration ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_4.mAttribute_mTerminator.ptr (), ioArgument_ioExploredBlockMap, inArgument_inNextLabel, var_terminatorMin_22152, var_terminatorMax_22171, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 593)) ;
    GALGAS_uint var_min_22184 = var_terminatorMin_22152 ;
    GALGAS_uint var_max_22212 = var_terminatorMax_22171 ;
    GALGAS_ipic_31__38_SequentialInstructionList var_computedInstructionList_22289 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_duration_computations.galgas", 596)) ;
    GALGAS_bool var_ok_22305 = GALGAS_bool (kIsInfOrEqual, var_min_22184.objectCompare (var_max_22212)) ;
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_22360 (inObject.mAttribute_mInstructionList, kEnumeration_down) ;
    while (enumerator_22360.hasCurrentObject ()) {
      GALGAS_uint var_instructionMin_22454 ;
      GALGAS_uint var_instructionMax_22488 ;
      callExtensionMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_22360.current_mInstruction (HERE).ptr (), ioArgument_ioExploredBlockMap, var_instructionMin_22454, var_instructionMax_22488, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 599)) ;
      GALGAS_bool test_5 = var_ok_22305 ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = GALGAS_bool (kIsInfOrEqual, var_instructionMin_22454.objectCompare (var_instructionMax_22488)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        var_min_22184 = var_min_22184.add_operation (var_instructionMin_22454, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 605)) ;
        var_max_22212 = var_max_22212.add_operation (var_instructionMax_22488, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 606)) ;
        {
        var_computedInstructionList_22289.setter_insertAtIndex (enumerator_22360.current_mInstruction (HERE), var_min_22184, var_max_22212, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 607)) ;
        }
      }else if (kBoolFalse == test_6) {
        var_ok_22305 = GALGAS_bool (false) ;
        {
        var_computedInstructionList_22289.setter_insertAtIndex (enumerator_22360.current_mInstruction (HERE), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 610)), GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 610)) ;
        }
      }
      enumerator_22360.gotoNextObject () ;
    }
    const enumGalgasBool test_7 = var_ok_22305.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_ipic_31__38_Block temp_8 = inObject ;
      const GALGAS_ipic_31__38_Block temp_9 = inObject ;
      const GALGAS_ipic_31__38_Block temp_10 = inObject ;
      outArgument_outNewBlock = GALGAS_ipic_31__38_Block::constructor_new (temp_8.mAttribute_mAddress, temp_9.mAttribute_mLabel, var_computedInstructionList_22289, temp_10.mAttribute_mTerminator, var_terminatorMin_22152, var_terminatorMax_22171  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 614)) ;
      ioArgument_ioContinue = GALGAS_bool (true) ;
      {
      const GALGAS_ipic_31__38_Block temp_11 = inObject ;
      ioArgument_ioExploredBlockMap.setter_insertKey (temp_11.mAttribute_mLabel, var_min_22184, var_max_22212, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 623)) ;
      }
    }else if (kBoolFalse == test_7) {
      const GALGAS_ipic_31__38_Block temp_12 = inObject ;
      outArgument_outNewBlock = temp_12 ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel::GALGAS_piccoloDeviceModel (void) :
mAttribute_mDeviceName (),
mAttribute_mProcessorType (),
mAttribute_mRomSize (),
mAttribute_mBankCount (),
mAttribute_mRegisterTable (),
mAttribute_mRamBankTable (),
mAttribute_mEepromSize (),
mAttribute_mEepromAddress (),
mAttribute_mConfigRegisterMap (),
mAttribute_mSharedBankName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel::~ GALGAS_piccoloDeviceModel (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel::GALGAS_piccoloDeviceModel (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_processorType & inOperand1,
                                                      const GALGAS_luint & inOperand2,
                                                      const GALGAS_luint & inOperand3,
                                                      const GALGAS_registerTable & inOperand4,
                                                      const GALGAS_ramBankTable & inOperand5,
                                                      const GALGAS_uint & inOperand6,
                                                      const GALGAS_uint & inOperand7,
                                                      const GALGAS_configRegisterMap & inOperand8,
                                                      const GALGAS_string & inOperand9) :
mAttribute_mDeviceName (inOperand0),
mAttribute_mProcessorType (inOperand1),
mAttribute_mRomSize (inOperand2),
mAttribute_mBankCount (inOperand3),
mAttribute_mRegisterTable (inOperand4),
mAttribute_mRamBankTable (inOperand5),
mAttribute_mEepromSize (inOperand6),
mAttribute_mEepromAddress (inOperand7),
mAttribute_mConfigRegisterMap (inOperand8),
mAttribute_mSharedBankName (inOperand9) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_processorType & inOperand1,
                                                                      const GALGAS_luint & inOperand2,
                                                                      const GALGAS_luint & inOperand3,
                                                                      const GALGAS_registerTable & inOperand4,
                                                                      const GALGAS_ramBankTable & inOperand5,
                                                                      const GALGAS_uint & inOperand6,
                                                                      const GALGAS_uint & inOperand7,
                                                                      const GALGAS_configRegisterMap & inOperand8,
                                                                      const GALGAS_string & inOperand9 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_piccoloDeviceModel (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_piccoloDeviceModel::objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeviceName.objectCompare (inOperand.mAttribute_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcessorType.objectCompare (inOperand.mAttribute_mProcessorType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRomSize.objectCompare (inOperand.mAttribute_mRomSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBankCount.objectCompare (inOperand.mAttribute_mBankCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterTable.objectCompare (inOperand.mAttribute_mRegisterTable) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRamBankTable.objectCompare (inOperand.mAttribute_mRamBankTable) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEepromSize.objectCompare (inOperand.mAttribute_mEepromSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEepromAddress.objectCompare (inOperand.mAttribute_mEepromAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConfigRegisterMap.objectCompare (inOperand.mAttribute_mConfigRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSharedBankName.objectCompare (inOperand.mAttribute_mSharedBankName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_piccoloDeviceModel::isValid (void) const {
  return mAttribute_mDeviceName.isValid () && mAttribute_mProcessorType.isValid () && mAttribute_mRomSize.isValid () && mAttribute_mBankCount.isValid () && mAttribute_mRegisterTable.isValid () && mAttribute_mRamBankTable.isValid () && mAttribute_mEepromSize.isValid () && mAttribute_mEepromAddress.isValid () && mAttribute_mConfigRegisterMap.isValid () && mAttribute_mSharedBankName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_piccoloDeviceModel::drop (void) {
  mAttribute_mDeviceName.drop () ;
  mAttribute_mProcessorType.drop () ;
  mAttribute_mRomSize.drop () ;
  mAttribute_mBankCount.drop () ;
  mAttribute_mRegisterTable.drop () ;
  mAttribute_mRamBankTable.drop () ;
  mAttribute_mEepromSize.drop () ;
  mAttribute_mEepromAddress.drop () ;
  mAttribute_mConfigRegisterMap.drop () ;
  mAttribute_mSharedBankName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_piccoloDeviceModel::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @piccoloDeviceModel:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeviceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcessorType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRomSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBankCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRamBankTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEepromSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEepromAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConfigRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSharedBankName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_piccoloDeviceModel::getter_mDeviceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeviceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_processorType GALGAS_piccoloDeviceModel::getter_mProcessorType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcessorType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_piccoloDeviceModel::getter_mRomSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRomSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_piccoloDeviceModel::getter_mBankCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable GALGAS_piccoloDeviceModel::getter_mRegisterTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable GALGAS_piccoloDeviceModel::getter_mRamBankTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRamBankTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_piccoloDeviceModel::getter_mEepromSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEepromSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_piccoloDeviceModel::getter_mEepromAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEepromAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap GALGAS_piccoloDeviceModel::getter_mConfigRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_piccoloDeviceModel::getter_mSharedBankName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSharedBankName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @piccoloDeviceModel type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_piccoloDeviceModel ("piccoloDeviceModel",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_piccoloDeviceModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_piccoloDeviceModel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_piccoloDeviceModel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_piccoloDeviceModel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  const GALGAS_piccoloDeviceModel * p = (const GALGAS_piccoloDeviceModel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_piccoloDeviceModel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("piccoloDeviceModel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSliceIndex (),
mAttribute_mSliceSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element::~ GALGAS_bitSliceTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1,
                                                                  const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mSliceIndex (inOperand1),
mAttribute_mSliceSize (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bitSliceTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uint & inOperand1,
                                                                                  const GALGAS_uint & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_bitSliceTable_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bitSliceTable_2D_element::objectCompare (const GALGAS_bitSliceTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSliceIndex.objectCompare (inOperand.mAttribute_mSliceIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSliceSize.objectCompare (inOperand.mAttribute_mSliceSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bitSliceTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSliceIndex.isValid () && mAttribute_mSliceSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSliceIndex.drop () ;
  mAttribute_mSliceSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @bitSliceTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSliceIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSliceSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bitSliceTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitSliceTable_2D_element::getter_mSliceIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSliceIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitSliceTable_2D_element::getter_mSliceSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSliceSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bitSliceTable-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitSliceTable_2D_element ("bitSliceTable-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bitSliceTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bitSliceTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitSliceTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  const GALGAS_bitSliceTable_2D_element * p = (const GALGAS_bitSliceTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitSliceTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (void) :
mAttribute_mBankName (),
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element::~ GALGAS_ramDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_declarationInRamList & inOperand1) :
mAttribute_mBankName (inOperand0),
mAttribute_mDeclaration (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ramDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_declarationInRamList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_declarationInRamList & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ramDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ramDefinitionList_2D_element::objectCompare (const GALGAS_ramDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBankName.objectCompare (inOperand.mAttribute_mBankName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ramDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mBankName.isValid () && mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList_2D_element::drop (void) {
  mAttribute_mBankName.drop () ;
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @ramDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBankName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ramDefinitionList_2D_element::getter_mBankName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_ramDefinitionList_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @ramDefinitionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ("ramDefinitionList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ramDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ramDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  const GALGAS_ramDefinitionList_2D_element * p = (const GALGAS_ramDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ramDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (void) :
mAttribute_mSettingName (),
mAttribute_mSettingValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element::~ GALGAS_configSettingList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mAttribute_mSettingName (inOperand0),
mAttribute_mSettingValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configSettingList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_configSettingList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configSettingList_2D_element::objectCompare (const GALGAS_configSettingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSettingName.objectCompare (inOperand.mAttribute_mSettingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSettingValue.objectCompare (inOperand.mAttribute_mSettingValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configSettingList_2D_element::isValid (void) const {
  return mAttribute_mSettingName.isValid () && mAttribute_mSettingValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList_2D_element::drop (void) {
  mAttribute_mSettingName.drop () ;
  mAttribute_mSettingValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @configSettingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSettingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSettingValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configSettingList_2D_element::getter_mSettingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSettingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configSettingList_2D_element::getter_mSettingValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSettingValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @configSettingList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configSettingList_2D_element ("configSettingList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configSettingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configSettingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configSettingList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  const GALGAS_configSettingList_2D_element * p = (const GALGAS_configSettingList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configSettingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (void) :
mAttribute_mSliceName (),
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element::~ GALGAS_immediatSliceExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_immediatExpression & inOperand1) :
mAttribute_mSliceName (inOperand0),
mAttribute_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_immediatExpression & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_immediatSliceExpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_immediatSliceExpressionList_2D_element::objectCompare (const GALGAS_immediatSliceExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSliceName.objectCompare (inOperand.mAttribute_mSliceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_immediatSliceExpressionList_2D_element::isValid (void) const {
  return mAttribute_mSliceName.isValid () && mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList_2D_element::drop (void) {
  mAttribute_mSliceName.drop () ;
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @immediatSliceExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSliceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_immediatSliceExpressionList_2D_element::getter_mSliceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSliceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatSliceExpressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @immediatSliceExpressionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ("immediatSliceExpressionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatSliceExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatSliceExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSliceExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  const GALGAS_immediatSliceExpressionList_2D_element * p = (const GALGAS_immediatSliceExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatSliceExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (void) :
mAttribute_mConstantName (),
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element::~ GALGAS_constantDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_immediatExpression & inOperand1) :
mAttribute_mConstantName (inOperand0),
mAttribute_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_immediatExpression & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constantDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constantDefinitionList_2D_element::objectCompare (const GALGAS_constantDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantName.objectCompare (inOperand.mAttribute_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constantDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mConstantName.isValid () && mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList_2D_element::drop (void) {
  mAttribute_mConstantName.drop () ;
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @constantDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantDefinitionList_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_constantDefinitionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @constantDefinitionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ("constantDefinitionList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  const GALGAS_constantDefinitionList_2D_element * p = (const GALGAS_constantDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterAddress (),
mAttribute_mRegisterValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element::~ GALGAS_actualConfigurationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1,
                                                                                    const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterAddress (inOperand1),
mAttribute_mRegisterValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualConfigurationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_uint::constructor_default (HERE),
                                                   GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                    const GALGAS_uint & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actualConfigurationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualConfigurationMap_2D_element::objectCompare (const GALGAS_actualConfigurationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterValue.objectCompare (inOperand.mAttribute_mRegisterValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualConfigurationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterAddress.isValid () && mAttribute_mRegisterValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterAddress.drop () ;
  mAttribute_mRegisterValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @actualConfigurationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_actualConfigurationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_actualConfigurationMap_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_actualConfigurationMap_2D_element::getter_mRegisterValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @actualConfigurationMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ("actualConfigurationMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualConfigurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualConfigurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualConfigurationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  const GALGAS_actualConfigurationMap_2D_element * p = (const GALGAS_actualConfigurationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualConfigurationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::~ GALGAS_labelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_labelMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_labelMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_labelMap_2D_element::objectCompare (const GALGAS_labelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_labelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @labelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_labelMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @labelMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap_2D_element ("labelMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  const GALGAS_labelMap_2D_element * p = (const GALGAS_labelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::~ GALGAS_constantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_sint_36__34_ & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_sint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_sint_36__34_ & inOperand1 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constantMap_2D_element::objectCompare (const GALGAS_constantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @constantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_constantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @constantMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantMap_2D_element ("constantMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  const GALGAS_constantMap_2D_element * p = (const GALGAS_constantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsNoReturn (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::~ GALGAS_routineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_uint & inOperand2,
                                                            const GALGAS_uint & inOperand3,
                                                            const GALGAS_bool & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mIsNoReturn (inOperand1),
mAttribute_mRequiredBank (inOperand2),
mAttribute_mReturnedBank (inOperand3),
mAttribute_mPreservesBank (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE),
                                       GALGAS_uint::constructor_default (HERE),
                                       GALGAS_uint::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_uint & inOperand2,
                                                                            const GALGAS_uint & inOperand3,
                                                                            const GALGAS_bool & inOperand4 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_routineMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMap_2D_element::objectCompare (const GALGAS_routineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @routineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineMap_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineMap_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @routineMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap_2D_element ("routineMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  const GALGAS_routineMap_2D_element * p = (const GALGAS_routineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDefinitionLineIndex (),
mAttribute_mIsDeletable () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element::~ GALGAS_symbolTableForOptimizations_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_uint & inOperand1,
                                                                                              const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mDefinitionLineIndex (inOperand1),
mAttribute_mIsDeletable (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForOptimizations_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_uint::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1,
                                                                                                              const GALGAS_bool & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_symbolTableForOptimizations_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForOptimizations_2D_element::objectCompare (const GALGAS_symbolTableForOptimizations_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefinitionLineIndex.objectCompare (inOperand.mAttribute_mDefinitionLineIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsDeletable.objectCompare (inOperand.mAttribute_mIsDeletable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForOptimizations_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDefinitionLineIndex.isValid () && mAttribute_mIsDeletable.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDefinitionLineIndex.drop () ;
  mAttribute_mIsDeletable.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForOptimizations-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsDeletable.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForOptimizations_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForOptimizations_2D_element::getter_mDefinitionLineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinitionLineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_symbolTableForOptimizations_2D_element::getter_mIsDeletable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsDeletable ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @symbolTableForOptimizations-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ("symbolTableForOptimizations-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  const GALGAS_symbolTableForOptimizations_2D_element * p = (const GALGAS_symbolTableForOptimizations_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForOptimizations_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element::GALGAS_configFieldMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterName (),
mAttribute_mMaskValue (),
mAttribute_mDescription (),
mAttribute_mFieldSettingMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element::~ GALGAS_configFieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element::GALGAS_configFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_luint & inOperand2,
                                                                    const GALGAS_lstring & inOperand3,
                                                                    const GALGAS_fieldSettingMap & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterName (inOperand1),
mAttribute_mMaskValue (inOperand2),
mAttribute_mDescription (inOperand3),
mAttribute_mFieldSettingMap (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_luint::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_fieldSettingMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_luint & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3,
                                                                                    const GALGAS_fieldSettingMap & inOperand4 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_configFieldMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configFieldMap_2D_element::objectCompare (const GALGAS_configFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterName.objectCompare (inOperand.mAttribute_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMaskValue.objectCompare (inOperand.mAttribute_mMaskValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDescription.objectCompare (inOperand.mAttribute_mDescription) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldSettingMap.objectCompare (inOperand.mAttribute_mFieldSettingMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configFieldMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterName.isValid () && mAttribute_mMaskValue.isValid () && mAttribute_mDescription.isValid () && mAttribute_mFieldSettingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterName.drop () ;
  mAttribute_mMaskValue.drop () ;
  mAttribute_mDescription.drop () ;
  mAttribute_mFieldSettingMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @configFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMaskValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDescription.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configFieldMap_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configFieldMap_2D_element::getter_mMaskValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaskValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configFieldMap_2D_element::getter_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_configFieldMap_2D_element::getter_mFieldSettingMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldSettingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @configFieldMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configFieldMap_2D_element ("configFieldMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  const GALGAS_configFieldMap_2D_element * p = (const GALGAS_configFieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element::GALGAS_baseline_5F_routineDefinitionList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mPage (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfRoutineLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element::~ GALGAS_baseline_5F_routineDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element::GALGAS_baseline_5F_routineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                          const GALGAS_bool & inOperand2,
                                                                                                          const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                                          const GALGAS_location & inOperand4) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mPage (inOperand1),
mAttribute_mIsNoReturn (inOperand2),
mAttribute_mInstructionList (inOperand3),
mAttribute_mEndOfRoutineLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_routineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_baseline_5F_instructionList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                                          const GALGAS_bool & inOperand2,
                                                                                                                          const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                                                          const GALGAS_location & inOperand4 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_baseline_5F_routineDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPage.objectCompare (inOperand.mAttribute_mPage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfRoutineLocation.objectCompare (inOperand.mAttribute_mEndOfRoutineLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mPage.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfRoutineLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mPage.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfRoutineLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @baseline_routineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mEndOfRoutineLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_routineDefinitionList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ("baseline_routineDefinitionList-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  const GALGAS_baseline_5F_routineDefinitionList_2D_element * p = (const GALGAS_baseline_5F_routineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_routineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element::~ GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_declaredRoutineMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_baseline_5F_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @baseline_declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_declaredRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_declaredRoutineMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ("baseline_declaredRoutineMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  const GALGAS_baseline_5F_declaredRoutineMap_2D_element * p = (const GALGAS_baseline_5F_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsNoReturn (),
mAttribute_mPage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element::~ GALGAS_baselineRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_luint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mIsNoReturn (inOperand1),
mAttribute_mPage (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baselineRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_luint & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_baselineRoutineMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baselineRoutineMap_2D_element::objectCompare (const GALGAS_baselineRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPage.objectCompare (inOperand.mAttribute_mPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baselineRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mPage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mPage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @baselineRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baselineRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baselineRoutineMap_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baselineRoutineMap_2D_element::getter_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baselineRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ("baselineRoutineMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baselineRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baselineRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  const GALGAS_baselineRoutineMap_2D_element * p = (const GALGAS_baselineRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baselineRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDefinitionLineIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element::~ GALGAS_baselineSymbolTableForOptimizations_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDefinitionLineIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baselineSymbolTableForOptimizations_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_uint & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_baselineSymbolTableForOptimizations_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baselineSymbolTableForOptimizations_2D_element::objectCompare (const GALGAS_baselineSymbolTableForOptimizations_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefinitionLineIndex.objectCompare (inOperand.mAttribute_mDefinitionLineIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baselineSymbolTableForOptimizations_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDefinitionLineIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDefinitionLineIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @baselineSymbolTableForOptimizations-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baselineSymbolTableForOptimizations_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baselineSymbolTableForOptimizations_2D_element::getter_mDefinitionLineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinitionLineIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baselineSymbolTableForOptimizations-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ("baselineSymbolTableForOptimizations-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baselineSymbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baselineSymbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineSymbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  const GALGAS_baselineSymbolTableForOptimizations_2D_element * p = (const GALGAS_baselineSymbolTableForOptimizations_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baselineSymbolTableForOptimizations_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element::~ GALGAS_baseline_5F_symbolTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_symbolTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_baseline_5F_symbolTable_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_symbolTable_2D_element::objectCompare (const GALGAS_baseline_5F_symbolTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineAddress.objectCompare (inOperand.mAttribute_mRoutineAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_symbolTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @baseline_symbolTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_symbolTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_symbolTable_2D_element::getter_mRoutineAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_symbolTable-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ("baseline_symbolTable-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  const GALGAS_baseline_5F_symbolTable_2D_element * p = (const GALGAS_baseline_5F_symbolTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_symbolTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element::GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) :
mAttribute_mInterruptLocation (),
mAttribute_mInstructionList (),
mAttribute_mFirstSaveRegister (),
mAttribute_mSecondSaveRegister (),
mAttribute_mEndOfInterruptLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element::~ GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element::GALGAS_midrange_5F_interruptDefinitionList_2D_element (const GALGAS_location & inOperand0,
                                                                                                              const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3,
                                                                                                              const GALGAS_location & inOperand4) :
mAttribute_mInterruptLocation (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mFirstSaveRegister (inOperand2),
mAttribute_mSecondSaveRegister (inOperand3),
mAttribute_mEndOfInterruptLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_interruptDefinitionList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_midrange_5F_instructionList::constructor_emptyList (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                                                              const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                                              const GALGAS_lstring & inOperand3,
                                                                                                                              const GALGAS_location & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_midrange_5F_interruptDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_interruptDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInterruptLocation.objectCompare (inOperand.mAttribute_mInterruptLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFirstSaveRegister.objectCompare (inOperand.mAttribute_mFirstSaveRegister) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSecondSaveRegister.objectCompare (inOperand.mAttribute_mSecondSaveRegister) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInterruptLocation.objectCompare (inOperand.mAttribute_mEndOfInterruptLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_interruptDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mInterruptLocation.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mFirstSaveRegister.isValid () && mAttribute_mSecondSaveRegister.isValid () && mAttribute_mEndOfInterruptLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::drop (void) {
  mAttribute_mInterruptLocation.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mFirstSaveRegister.drop () ;
  mAttribute_mSecondSaveRegister.drop () ;
  mAttribute_mEndOfInterruptLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @midrange_interruptDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInterruptLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFirstSaveRegister.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSecondSaveRegister.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mInterruptLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mFirstSaveRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstSaveRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mSecondSaveRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSecondSaveRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mEndOfInterruptLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInterruptLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_interruptDefinitionList-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ("midrange_interruptDefinitionList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_interruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_interruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_interruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  const GALGAS_midrange_5F_interruptDefinitionList_2D_element * p = (const GALGAS_midrange_5F_interruptDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_interruptDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_interruptDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element::GALGAS_midrange_5F_routineDefinitionList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mPage (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfRoutineLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element::~ GALGAS_midrange_5F_routineDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element::GALGAS_midrange_5F_routineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                          const GALGAS_luint & inOperand2,
                                                                                                          const GALGAS_luint & inOperand3,
                                                                                                          const GALGAS_bool & inOperand4,
                                                                                                          const GALGAS_bool & inOperand5,
                                                                                                          const GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                                          const GALGAS_location & inOperand7) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mPage (inOperand1),
mAttribute_mRequiredBank (inOperand2),
mAttribute_mReturnedBank (inOperand3),
mAttribute_mPreservesBank (inOperand4),
mAttribute_mIsNoReturn (inOperand5),
mAttribute_mInstructionList (inOperand6),
mAttribute_mEndOfRoutineLocation (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_routineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_midrange_5F_instructionList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                                          const GALGAS_luint & inOperand2,
                                                                                                                          const GALGAS_luint & inOperand3,
                                                                                                                          const GALGAS_bool & inOperand4,
                                                                                                                          const GALGAS_bool & inOperand5,
                                                                                                                          const GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                                                          const GALGAS_location & inOperand7 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_midrange_5F_routineDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPage.objectCompare (inOperand.mAttribute_mPage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfRoutineLocation.objectCompare (inOperand.mAttribute_mEndOfRoutineLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mPage.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfRoutineLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_routineDefinitionList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mPage.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfRoutineLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_routineDefinitionList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @midrange_routineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mEndOfRoutineLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_routineDefinitionList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ("midrange_routineDefinitionList-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  const GALGAS_midrange_5F_routineDefinitionList_2D_element * p = (const GALGAS_midrange_5F_routineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_routineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_routineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::~ GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                  const GALGAS_uint & inOperand1 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineAddress.objectCompare (inOperand.mAttribute_mRoutineAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @midrange_symbolTableForConvertingRelatives-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::getter_mRoutineAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @midrange_symbolTableForConvertingRelatives-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ("midrange_symbolTableForConvertingRelatives-element",
                                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element * p = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element::~ GALGAS_midrange_5F_symbolTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_symbolTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_midrange_5F_symbolTable_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_symbolTable_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineAddress.objectCompare (inOperand.mAttribute_mRoutineAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_symbolTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTable_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @midrange_symbolTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_symbolTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_symbolTable_2D_element::getter_mRoutineAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_symbolTable-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ("midrange_symbolTable-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  const GALGAS_midrange_5F_symbolTable_2D_element * p = (const GALGAS_midrange_5F_symbolTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_symbolTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element::~ GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_declaredRoutineMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_midrange_5F_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @midrange_declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_declaredRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_declaredRoutineMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ("midrange_declaredRoutineMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  const GALGAS_midrange_5F_declaredRoutineMap_2D_element * p = (const GALGAS_midrange_5F_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mReservedSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element::~ GALGAS_bootloaderReservedRAMmap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_luint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mReservedSize (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootloaderReservedRAMmap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_luint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_luint & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bootloaderReservedRAMmap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootloaderReservedRAMmap_2D_element::objectCompare (const GALGAS_bootloaderReservedRAMmap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReservedSize.objectCompare (inOperand.mAttribute_mReservedSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootloaderReservedRAMmap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mReservedSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootloaderReservedRAMmap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mReservedSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootloaderReservedRAMmap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @bootloaderReservedRAMmap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReservedSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootloaderReservedRAMmap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_bootloaderReservedRAMmap_2D_element::getter_mReservedSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReservedSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @bootloaderReservedRAMmap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ("bootloaderReservedRAMmap-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootloaderReservedRAMmap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootloaderReservedRAMmap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootloaderReservedRAMmap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  const GALGAS_bootloaderReservedRAMmap_2D_element * p = (const GALGAS_bootloaderReservedRAMmap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootloaderReservedRAMmap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) :
mAttribute_mBlockName (),
mAttribute_mInstructionList (),
mAttribute_mBlockTerminaisonForBlockInstruction (),
mAttribute_mEndOfBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::~ GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                                const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                                const GALGAS_location & inOperand3) :
mAttribute_mBlockName (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mBlockTerminaisonForBlockInstruction (inOperand2),
mAttribute_mEndOfBlock (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                                                const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                                                const GALGAS_location & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::objectCompare (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBlockName.objectCompare (inOperand.mAttribute_mBlockName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mAttribute_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBlock.objectCompare (inOperand.mAttribute_mEndOfBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::isValid (void) const {
  return mAttribute_mBlockName.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mBlockTerminaisonForBlockInstruction.isValid () && mAttribute_mEndOfBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::drop (void) {
  mAttribute_mBlockName.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mBlockTerminaisonForBlockInstruction.drop () ;
  mAttribute_mEndOfBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @pic18BlockInstructionBlockList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBlockName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mBlockName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mBlockTerminaisonForBlockInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockTerminaisonForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mEndOfBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic18BlockInstructionBlockList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ("pic18BlockInstructionBlockList-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element * p = (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BlockInstructionBlockList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) :
mAttribute_mInterruptName (),
mAttribute_mFastReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfInterruptLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::~ GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                                            const GALGAS_location & inOperand3) :
mAttribute_mInterruptName (inOperand0),
mAttribute_mFastReturn (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mEndOfInterruptLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_InterruptDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                                                            const GALGAS_location & inOperand3 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_pic_31__38_InterruptDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_InterruptDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInterruptName.objectCompare (inOperand.mAttribute_mInterruptName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFastReturn.objectCompare (inOperand.mAttribute_mFastReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInterruptLocation.objectCompare (inOperand.mAttribute_mEndOfInterruptLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_InterruptDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mInterruptName.isValid () && mAttribute_mFastReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInterruptLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::drop (void) {
  mAttribute_mInterruptName.drop () ;
  mAttribute_mFastReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInterruptLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @pic18InterruptDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInterruptName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFastReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mInterruptName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mFastReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFastReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mEndOfInterruptLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInterruptLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic18InterruptDefinitionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ("pic18InterruptDefinitionList-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InterruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_InterruptDefinitionList_2D_element * p = (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_InterruptDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfRoutineLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::~ GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::GALGAS_pic_31__38_RoutineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_luint & inOperand1,
                                                                                                        const GALGAS_luint & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3,
                                                                                                        const GALGAS_bool & inOperand4,
                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                                        const GALGAS_location & inOperand6) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mRequiredBank (inOperand1),
mAttribute_mReturnedBank (inOperand2),
mAttribute_mPreservesBank (inOperand3),
mAttribute_mIsNoReturn (inOperand4),
mAttribute_mInstructionList (inOperand5),
mAttribute_mEndOfRoutineLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_RoutineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_luint::constructor_default (HERE),
                                                             GALGAS_luint::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                             GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_luint & inOperand1,
                                                                                                                        const GALGAS_luint & inOperand2,
                                                                                                                        const GALGAS_bool & inOperand3,
                                                                                                                        const GALGAS_bool & inOperand4,
                                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                                                        const GALGAS_location & inOperand6 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_pic_31__38_RoutineDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_RoutineDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfRoutineLocation.objectCompare (inOperand.mAttribute_mEndOfRoutineLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfRoutineLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfRoutineLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @pic18RoutineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mEndOfRoutineLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic18RoutineDefinitionList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ("pic18RoutineDefinitionList-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RoutineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_RoutineDefinitionList_2D_element * p = (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RoutineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) :
mAttribute_mMacroName (),
mAttribute_mConstantNameList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element::~ GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstringlist & inOperand1,
                                                                                                    const GALGAS_pic_31__38_InstructionList & inOperand2) :
mAttribute_mMacroName (inOperand0),
mAttribute_mConstantNameList (inOperand1),
mAttribute_mInstructionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                                           GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_lstringlist & inOperand1,
                                                                                                                    const GALGAS_pic_31__38_InstructionList & inOperand2 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_MacroDefinitionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_MacroDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMacroName.objectCompare (inOperand.mAttribute_mMacroName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantNameList.objectCompare (inOperand.mAttribute_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_MacroDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mMacroName.isValid () && mAttribute_mConstantNameList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::drop (void) {
  mAttribute_mMacroName.drop () ;
  mAttribute_mConstantNameList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @pic18MacroDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMacroName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_MacroDefinitionList_2D_element::getter_mMacroName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMacroName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_MacroDefinitionList_2D_element::getter_mConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18MacroDefinitionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ("pic18MacroDefinitionList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_MacroDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_MacroDefinitionList_2D_element * p = (const GALGAS_pic_31__38_MacroDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_MacroDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mConstantNameList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element::~ GALGAS_pic_31__38_MacroMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstringlist & inOperand1,
                                                                              const GALGAS_pic_31__38_InstructionList & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mConstantNameList (inOperand1),
mAttribute_mInstructionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                              const GALGAS_pic_31__38_InstructionList & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_MacroMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_MacroMap_2D_element::objectCompare (const GALGAS_pic_31__38_MacroMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantNameList.objectCompare (inOperand.mAttribute_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_MacroMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mConstantNameList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mConstantNameList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @pic18MacroMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_MacroMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_MacroMap_2D_element::getter_mConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroMap_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18MacroMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ("pic18MacroMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_MacroMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  const GALGAS_pic_31__38_MacroMap_2D_element * p = (const GALGAS_pic_31__38_MacroMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_MacroMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element::GALGAS_routineDeclarationList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element::~ GALGAS_routineDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element::GALGAS_routineDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_luint & inOperand1,
                                                                                    const GALGAS_luint & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mRequiredBank (inOperand1),
mAttribute_mReturnedBank (inOperand2),
mAttribute_mPreservesBank (inOperand3),
mAttribute_mIsNoReturn (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_luint::constructor_default (HERE),
                                                   GALGAS_luint::constructor_default (HERE),
                                                   GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_luint & inOperand1,
                                                                                                    const GALGAS_luint & inOperand2,
                                                                                                    const GALGAS_bool & inOperand3,
                                                                                                    const GALGAS_bool & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_routineDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineDeclarationList_2D_element::objectCompare (const GALGAS_routineDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDeclarationList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDeclarationList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @routineDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineDeclarationList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_routineDeclarationList_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_routineDeclarationList_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDeclarationList_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDeclarationList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @routineDeclarationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ("routineDeclarationList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  const GALGAS_routineDeclarationList_2D_element * p = (const GALGAS_routineDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (void) :
mAttribute_mDataName (),
mAttribute_mValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::~ GALGAS_dataList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_immediatExpressionList & inOperand1) :
mAttribute_mDataName (inOperand0),
mAttribute_mValueList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_immediatExpressionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_immediatExpressionList & inOperand1 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_dataList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_dataList_2D_element::objectCompare (const GALGAS_dataList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDataName.objectCompare (inOperand.mAttribute_mDataName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValueList.objectCompare (inOperand.mAttribute_mValueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_dataList_2D_element::isValid (void) const {
  return mAttribute_mDataName.isValid () && mAttribute_mValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataList_2D_element::drop (void) {
  mAttribute_mDataName.drop () ;
  mAttribute_mValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @dataList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDataName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_dataList_2D_element::getter_mDataName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_dataList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @dataList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataList_2D_element ("dataList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  const GALGAS_dataList_2D_element * p = (const GALGAS_dataList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element::GALGAS_dataMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDataSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element::~ GALGAS_dataMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element::GALGAS_dataMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDataSize (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element GALGAS_dataMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element GALGAS_dataMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_dataMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_dataMap_2D_element::objectCompare (const GALGAS_dataMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDataSize.objectCompare (inOperand.mAttribute_mDataSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_dataMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDataSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDataSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @dataMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDataSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_dataMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_dataMap_2D_element::getter_mDataSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @dataMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataMap_2D_element ("dataMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dataMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dataMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element GALGAS_dataMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dataMap_2D_element result ;
  const GALGAS_dataMap_2D_element * p = (const GALGAS_dataMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uintlist & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mData (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38__5F_dataMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_uintlist & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_pic_31__38__5F_dataMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38__5F_dataMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mData.objectCompare (inOperand.mAttribute_mData) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38__5F_dataMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mData.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mData.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @pic18_dataMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mData.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38__5F_dataMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_pic_31__38__5F_dataMap_2D_element::getter_mData (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mData ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18_dataMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ("pic18_dataMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  const GALGAS_pic_31__38__5F_dataMap_2D_element * p = (const GALGAS_pic_31__38__5F_dataMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38__5F_dataMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (void) :
mAttribute_mBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element::~ GALGAS_ipic_31__38_BlockList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (const GALGAS_ipic_31__38_Block & inOperand0) :
mAttribute_mBlock (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::constructor_new (const GALGAS_ipic_31__38_Block & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ipic_31__38_BlockList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ipic_31__38_BlockList_2D_element::objectCompare (const GALGAS_ipic_31__38_BlockList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBlock.objectCompare (inOperand.mAttribute_mBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ipic_31__38_BlockList_2D_element::isValid (void) const {
  return mAttribute_mBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_BlockList_2D_element::drop (void) {
  mAttribute_mBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_BlockList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @ipic18BlockList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_BlockList_2D_element::getter_mBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @ipic18BlockList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ("ipic18BlockList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38_BlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38_BlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_BlockList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  const GALGAS_ipic_31__38_BlockList_2D_element * p = (const GALGAS_ipic_31__38_BlockList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_BlockList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDefinitionBlockIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element::~ GALGAS_symbolTableForBlockOptimization_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDefinitionBlockIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForBlockOptimization_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_symbolTableForBlockOptimization_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForBlockOptimization_2D_element::objectCompare (const GALGAS_symbolTableForBlockOptimization_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefinitionBlockIndex.objectCompare (inOperand.mAttribute_mDefinitionBlockIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForBlockOptimization_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDefinitionBlockIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForBlockOptimization_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDefinitionBlockIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForBlockOptimization_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForBlockOptimization-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefinitionBlockIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForBlockOptimization_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForBlockOptimization_2D_element::getter_mDefinitionBlockIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinitionBlockIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @symbolTableForBlockOptimization-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ("symbolTableForBlockOptimization-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForBlockOptimization_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForBlockOptimization_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForBlockOptimization_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  const GALGAS_symbolTableForBlockOptimization_2D_element * p = (const GALGAS_symbolTableForBlockOptimization_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForBlockOptimization_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCluster () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element::~ GALGAS_symbolTableForClusterOrdering_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mCluster (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForClusterOrdering_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_uint & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_symbolTableForClusterOrdering_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForClusterOrdering_2D_element::objectCompare (const GALGAS_symbolTableForClusterOrdering_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCluster.objectCompare (inOperand.mAttribute_mCluster) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForClusterOrdering_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCluster.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForClusterOrdering_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCluster.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForClusterOrdering_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForClusterOrdering-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCluster.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForClusterOrdering_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForClusterOrdering_2D_element::getter_mCluster (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCluster ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @symbolTableForClusterOrdering-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ("symbolTableForClusterOrdering-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForClusterOrdering_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForClusterOrdering_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForClusterOrdering_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  const GALGAS_symbolTableForClusterOrdering_2D_element * p = (const GALGAS_symbolTableForClusterOrdering_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForClusterOrdering_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element::~ GALGAS_symbolTableForRelativesResolution_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForRelativesResolution_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_uint & inOperand1 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_symbolTableForRelativesResolution_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForRelativesResolution_2D_element::objectCompare (const GALGAS_symbolTableForRelativesResolution_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelAddress.objectCompare (inOperand.mAttribute_mLabelAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForRelativesResolution_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForRelativesResolution_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForRelativesResolution_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForRelativesResolution-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForRelativesResolution_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForRelativesResolution_2D_element::getter_mLabelAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @symbolTableForRelativesResolution-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ("symbolTableForRelativesResolution-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForRelativesResolution_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForRelativesResolution_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForRelativesResolution_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  const GALGAS_symbolTableForRelativesResolution_2D_element * p = (const GALGAS_symbolTableForRelativesResolution_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForRelativesResolution_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDataAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::~ GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDataAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38__5F_dataAddressMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_uint & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_pic_31__38__5F_dataAddressMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38__5F_dataAddressMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDataAddress.objectCompare (inOperand.mAttribute_mDataAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38__5F_dataAddressMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDataAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDataAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @pic18_dataAddressMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDataAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38__5F_dataAddressMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_pic_31__38__5F_dataAddressMap_2D_element::getter_mDataAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18_dataAddressMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ("pic18_dataAddressMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataAddressMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  const GALGAS_pic_31__38__5F_dataAddressMap_2D_element * p = (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38__5F_dataAddressMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element::GALGAS_declaredRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element::~ GALGAS_declaredRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element::GALGAS_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_luint & inOperand1,
                                                                            const GALGAS_luint & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_bool & inOperand4,
                                                                            const GALGAS_pic_31__38_InstructionList & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mRequiredBank (inOperand1),
mAttribute_mReturnedBank (inOperand2),
mAttribute_mPreservesBank (inOperand3),
mAttribute_mIsNoReturn (inOperand4),
mAttribute_mInstructionList (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_luint & inOperand1,
                                                                                            const GALGAS_luint & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_bool & inOperand4,
                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand5 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_declaredRoutineMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declaredRoutineMap_2D_element::objectCompare (const GALGAS_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declaredRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_declaredRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_declaredRoutineMap_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_declaredRoutineMap_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_declaredRoutineMap_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_declaredRoutineMap_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_declaredRoutineMap_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @declaredRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ("declaredRoutineMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  const GALGAS_declaredRoutineMap_2D_element * p = (const GALGAS_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element::~ GALGAS_caseConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_caseConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_caseConstantMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_caseConstantMap_2D_element::objectCompare (const GALGAS_caseConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_caseConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_caseConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_caseConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @caseConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_caseConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @caseConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_caseConstantMap_2D_element ("caseConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_caseConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_caseConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_caseConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  const GALGAS_caseConstantMap_2D_element * p = (const GALGAS_caseConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_caseConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInstructionList (),
mAttribute_mBlockTerminaisonForBlockInstruction (),
mAttribute_mEndOfBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element::~ GALGAS_blockInstructionBlockMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                        const GALGAS_location & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mBlockTerminaisonForBlockInstruction (inOperand2),
mAttribute_mEndOfBlock (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                        const GALGAS_location & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_blockInstructionBlockMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockInstructionBlockMap_2D_element::objectCompare (const GALGAS_blockInstructionBlockMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mAttribute_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBlock.objectCompare (inOperand.mAttribute_mEndOfBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockInstructionBlockMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mBlockTerminaisonForBlockInstruction.isValid () && mAttribute_mEndOfBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInstructionBlockMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mBlockTerminaisonForBlockInstruction.drop () ;
  mAttribute_mEndOfBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInstructionBlockMap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @blockInstructionBlockMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockInstructionBlockMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_blockInstructionBlockMap_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_blockInstructionBlockMap_2D_element::getter_mBlockTerminaisonForBlockInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockTerminaisonForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_blockInstructionBlockMap_2D_element::getter_mEndOfBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @blockInstructionBlockMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ("blockInstructionBlockMap-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockInstructionBlockMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockInstructionBlockMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInstructionBlockMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  const GALGAS_blockInstructionBlockMap_2D_element * p = (const GALGAS_blockInstructionBlockMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockInstructionBlockMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInitialBankSelection (),
mAttribute_mSourceBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element::~ GALGAS_blockInitialBankSelectionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mInitialBankSelection (inOperand1),
mAttribute_mSourceBlock (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_blockInitialBankSelectionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1,
                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_blockInitialBankSelectionMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockInitialBankSelectionMap_2D_element::objectCompare (const GALGAS_blockInitialBankSelectionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialBankSelection.objectCompare (inOperand.mAttribute_mInitialBankSelection) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceBlock.objectCompare (inOperand.mAttribute_mSourceBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockInitialBankSelectionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInitialBankSelection.isValid () && mAttribute_mSourceBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInitialBankSelectionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInitialBankSelection.drop () ;
  mAttribute_mSourceBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInitialBankSelectionMap_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @blockInitialBankSelectionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialBankSelection.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockInitialBankSelectionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_blockInitialBankSelectionMap_2D_element::getter_mInitialBankSelection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialBankSelection ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_blockInitialBankSelectionMap_2D_element::getter_mSourceBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @blockInitialBankSelectionMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ("blockInitialBankSelectionMap-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockInitialBankSelectionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockInitialBankSelectionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInitialBankSelectionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  const GALGAS_blockInitialBankSelectionMap_2D_element * p = (const GALGAS_blockInitialBankSelectionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockInitialBankSelectionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (void) :
mAttribute_lkey (),
mAttribute_mConversions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element::~ GALGAS_neededConversionForClusterOrder_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mConversions (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_neededConversionForClusterOrder_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_neededConversionForClusterOrder_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_neededConversionForClusterOrder_2D_element::objectCompare (const GALGAS_neededConversionForClusterOrder_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConversions.objectCompare (inOperand.mAttribute_mConversions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_neededConversionForClusterOrder_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mConversions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_neededConversionForClusterOrder_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mConversions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_neededConversionForClusterOrder_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @neededConversionForClusterOrder-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConversions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_neededConversionForClusterOrder_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_neededConversionForClusterOrder_2D_element::getter_mConversions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConversions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @neededConversionForClusterOrder-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ("neededConversionForClusterOrder-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_neededConversionForClusterOrder_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_neededConversionForClusterOrder_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_neededConversionForClusterOrder_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  const GALGAS_neededConversionForClusterOrder_2D_element * p = (const GALGAS_neededConversionForClusterOrder_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_neededConversionForClusterOrder_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCode (),
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element::~ GALGAS_generatedCodeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_codeList & inOperand1,
                                                                        const GALGAS_ipic_31__38_SequentialInstruction & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mCode (inOperand1),
mAttribute_mInstruction (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_codeList & inOperand1,
                                                                                        const GALGAS_ipic_31__38_SequentialInstruction & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_generatedCodeMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_generatedCodeMap_2D_element::objectCompare (const GALGAS_generatedCodeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCode.objectCompare (inOperand.mAttribute_mCode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_generatedCodeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCode.isValid () && mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generatedCodeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCode.drop () ;
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generatedCodeMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @generatedCodeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_generatedCodeMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList GALGAS_generatedCodeMap_2D_element::getter_mCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstruction GALGAS_generatedCodeMap_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @generatedCodeMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ("generatedCodeMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_generatedCodeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_generatedCodeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generatedCodeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  const GALGAS_generatedCodeMap_2D_element * p = (const GALGAS_generatedCodeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generatedCodeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element::~ GALGAS_blockMapForStackComputation_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_ipic_31__38_Block & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mBlock (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_ipic_31__38_Block & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_blockMapForStackComputation_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockMapForStackComputation_2D_element::objectCompare (const GALGAS_blockMapForStackComputation_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlock.objectCompare (inOperand.mAttribute_mBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockMapForStackComputation_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockMapForStackComputation_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockMapForStackComputation_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @blockMapForStackComputation-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockMapForStackComputation_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block GALGAS_blockMapForStackComputation_2D_element::getter_mBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @blockMapForStackComputation-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ("blockMapForStackComputation-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockMapForStackComputation_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockMapForStackComputation_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockMapForStackComputation_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  const GALGAS_blockMapForStackComputation_2D_element * p = (const GALGAS_blockMapForStackComputation_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockMapForStackComputation_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCalledRoutineSet (),
mAttribute_mTerminatorStackNeeds () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::~ GALGAS_routineCallMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_stringset & inOperand1,
                                                                    const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mCalledRoutineSet (inOperand1),
mAttribute_mTerminatorStackNeeds (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineCallMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1,
                                                                                    const GALGAS_uint & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineCallMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineCallMap_2D_element::objectCompare (const GALGAS_routineCallMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCalledRoutineSet.objectCompare (inOperand.mAttribute_mCalledRoutineSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminatorStackNeeds.objectCompare (inOperand.mAttribute_mTerminatorStackNeeds) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineCallMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCalledRoutineSet.isValid () && mAttribute_mTerminatorStackNeeds.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineCallMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCalledRoutineSet.drop () ;
  mAttribute_mTerminatorStackNeeds.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineCallMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @routineCallMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCalledRoutineSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminatorStackNeeds.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineCallMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_routineCallMap_2D_element::getter_mCalledRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCalledRoutineSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineCallMap_2D_element::getter_mTerminatorStackNeeds (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminatorStackNeeds ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @routineCallMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineCallMap_2D_element ("routineCallMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineCallMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineCallMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  const GALGAS_routineCallMap_2D_element * p = (const GALGAS_routineCallMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineCallMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLevels () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element::~ GALGAS_routineStackRequirementMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLevels (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineStackRequirementMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_uint & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_routineStackRequirementMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineStackRequirementMap_2D_element::objectCompare (const GALGAS_routineStackRequirementMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLevels.objectCompare (inOperand.mAttribute_mLevels) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineStackRequirementMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLevels.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineStackRequirementMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLevels.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineStackRequirementMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @routineStackRequirementMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLevels.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineStackRequirementMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineStackRequirementMap_2D_element::getter_mLevels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLevels ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineStackRequirementMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ("routineStackRequirementMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineStackRequirementMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineStackRequirementMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineStackRequirementMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  const GALGAS_routineStackRequirementMap_2D_element * p = (const GALGAS_routineStackRequirementMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineStackRequirementMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mMinDuration (),
mAttribute_mMaxDuration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element::~ GALGAS_blockDurationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mMinDuration (inOperand1),
mAttribute_mMaxDuration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_blockDurationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_uint & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_blockDurationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockDurationMap_2D_element::objectCompare (const GALGAS_blockDurationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMinDuration.objectCompare (inOperand.mAttribute_mMinDuration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMaxDuration.objectCompare (inOperand.mAttribute_mMaxDuration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockDurationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMinDuration.isValid () && mAttribute_mMaxDuration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockDurationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mMinDuration.drop () ;
  mAttribute_mMaxDuration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockDurationMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @blockDurationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMinDuration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMaxDuration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockDurationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_blockDurationMap_2D_element::getter_mMinDuration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMinDuration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_blockDurationMap_2D_element::getter_mMaxDuration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaxDuration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @blockDurationMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockDurationMap_2D_element ("blockDurationMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockDurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockDurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockDurationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  const GALGAS_blockDurationMap_2D_element * p = (const GALGAS_blockDurationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockDurationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element::~ GALGAS_declaredByteMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_declaredByteMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declaredByteMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declaredByteMap_2D_element::objectCompare (const GALGAS_declaredByteMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declaredByteMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredByteMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredByteMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @declaredByteMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_declaredByteMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @declaredByteMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredByteMap_2D_element ("declaredByteMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declaredByteMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declaredByteMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredByteMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  const GALGAS_declaredByteMap_2D_element * p = (const GALGAS_declaredByteMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredByteMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element::GALGAS_registerTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterAddressList (),
mAttribute_mSize (),
mAttribute_mBitSliceTable (),
mAttribute_mBitDefinitionString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element::~ GALGAS_registerTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element::GALGAS_registerTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uintlist & inOperand1,
                                                                  const GALGAS_uint & inOperand2,
                                                                  const GALGAS_bitSliceTable & inOperand3,
                                                                  const GALGAS_string & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterAddressList (inOperand1),
mAttribute_mSize (inOperand2),
mAttribute_mBitSliceTable (inOperand3),
mAttribute_mBitDefinitionString (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uintlist::constructor_emptyList (HERE),
                                          GALGAS_uint::constructor_default (HERE),
                                          GALGAS_bitSliceTable::constructor_emptyMap (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uintlist & inOperand1,
                                                                                  const GALGAS_uint & inOperand2,
                                                                                  const GALGAS_bitSliceTable & inOperand3,
                                                                                  const GALGAS_string & inOperand4 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_registerTable_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerTable_2D_element::objectCompare (const GALGAS_registerTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddressList.objectCompare (inOperand.mAttribute_mRegisterAddressList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSize.objectCompare (inOperand.mAttribute_mSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitSliceTable.objectCompare (inOperand.mAttribute_mBitSliceTable) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitDefinitionString.objectCompare (inOperand.mAttribute_mBitDefinitionString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterAddressList.isValid () && mAttribute_mSize.isValid () && mAttribute_mBitSliceTable.isValid () && mAttribute_mBitDefinitionString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterAddressList.drop () ;
  mAttribute_mSize.drop () ;
  mAttribute_mBitSliceTable.drop () ;
  mAttribute_mBitDefinitionString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerTable_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @registerTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddressList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitSliceTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitDefinitionString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_registerTable_2D_element::getter_mRegisterAddressList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddressList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerTable_2D_element::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_registerTable_2D_element::getter_mBitSliceTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitSliceTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_registerTable_2D_element::getter_mBitDefinitionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitDefinitionString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @registerTable-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerTable_2D_element ("registerTable-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  const GALGAS_registerTable_2D_element * p = (const GALGAS_registerTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element::GALGAS_ramBankTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFirstAddress (),
mAttribute_mFirstFreeAddress (),
mAttribute_mLastAddressPlusOne (),
mAttribute_mMirrorOffsetList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element::~ GALGAS_ramBankTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element::GALGAS_ramBankTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_uint & inOperand1,
                                                                const GALGAS_uint & inOperand2,
                                                                const GALGAS_uint & inOperand3,
                                                                const GALGAS_uintlist & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mFirstAddress (inOperand1),
mAttribute_mFirstFreeAddress (inOperand2),
mAttribute_mLastAddressPlusOne (inOperand3),
mAttribute_mMirrorOffsetList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ramBankTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1,
                                                                                const GALGAS_uint & inOperand2,
                                                                                const GALGAS_uint & inOperand3,
                                                                                const GALGAS_uintlist & inOperand4 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_ramBankTable_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ramBankTable_2D_element::objectCompare (const GALGAS_ramBankTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFirstAddress.objectCompare (inOperand.mAttribute_mFirstAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFirstFreeAddress.objectCompare (inOperand.mAttribute_mFirstFreeAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLastAddressPlusOne.objectCompare (inOperand.mAttribute_mLastAddressPlusOne) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMirrorOffsetList.objectCompare (inOperand.mAttribute_mMirrorOffsetList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ramBankTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFirstAddress.isValid () && mAttribute_mFirstFreeAddress.isValid () && mAttribute_mLastAddressPlusOne.isValid () && mAttribute_mMirrorOffsetList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramBankTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFirstAddress.drop () ;
  mAttribute_mFirstFreeAddress.drop () ;
  mAttribute_mLastAddressPlusOne.drop () ;
  mAttribute_mMirrorOffsetList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramBankTable_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @ramBankTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFirstAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFirstFreeAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLastAddressPlusOne.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMirrorOffsetList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ramBankTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::getter_mFirstAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::getter_mFirstFreeAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstFreeAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::getter_mLastAddressPlusOne (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLastAddressPlusOne ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_ramBankTable_2D_element::getter_mMirrorOffsetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMirrorOffsetList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @ramBankTable-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramBankTable_2D_element ("ramBankTable-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ramBankTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ramBankTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramBankTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  const GALGAS_ramBankTable_2D_element * p = (const GALGAS_ramBankTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ramBankTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (void) :
mAttribute_mIllegalValue (),
mAttribute_mIllegalMask (),
mAttribute_mDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element::~ GALGAS_illegalMaskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (const GALGAS_luint & inOperand0,
                                                                      const GALGAS_luint & inOperand1,
                                                                      const GALGAS_lstring & inOperand2) :
mAttribute_mIllegalValue (inOperand0),
mAttribute_mIllegalMask (inOperand1),
mAttribute_mDescription (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_illegalMaskList_2D_element (GALGAS_luint::constructor_default (HERE),
                                            GALGAS_luint::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::constructor_new (const GALGAS_luint & inOperand0,
                                                                                      const GALGAS_luint & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_illegalMaskList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_illegalMaskList_2D_element::objectCompare (const GALGAS_illegalMaskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIllegalValue.objectCompare (inOperand.mAttribute_mIllegalValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIllegalMask.objectCompare (inOperand.mAttribute_mIllegalMask) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDescription.objectCompare (inOperand.mAttribute_mDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_illegalMaskList_2D_element::isValid (void) const {
  return mAttribute_mIllegalValue.isValid () && mAttribute_mIllegalMask.isValid () && mAttribute_mDescription.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_illegalMaskList_2D_element::drop (void) {
  mAttribute_mIllegalValue.drop () ;
  mAttribute_mIllegalMask.drop () ;
  mAttribute_mDescription.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_illegalMaskList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @illegalMaskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIllegalValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIllegalMask.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDescription.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_illegalMaskList_2D_element::getter_mIllegalValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_illegalMaskList_2D_element::getter_mIllegalMask (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalMask ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_illegalMaskList_2D_element::getter_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @illegalMaskList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_illegalMaskList_2D_element ("illegalMaskList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_illegalMaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_illegalMaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_illegalMaskList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  const GALGAS_illegalMaskList_2D_element * p = (const GALGAS_illegalMaskList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_illegalMaskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue (),
mAttribute_mMask () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element::~ GALGAS_fieldSettingMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1),
mAttribute_mMask (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_fieldSettingMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_fieldSettingMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_fieldSettingMap_2D_element::objectCompare (const GALGAS_fieldSettingMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMask.objectCompare (inOperand.mAttribute_mMask) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_fieldSettingMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () && mAttribute_mMask.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
  mAttribute_mMask.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @fieldSettingMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMask.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_fieldSettingMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap_2D_element::getter_mMask (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @fieldSettingMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ("fieldSettingMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fieldSettingMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fieldSettingMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldSettingMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  const GALGAS_fieldSettingMap_2D_element * p = (const GALGAS_fieldSettingMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fieldSettingMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mMaskValue (),
mAttribute_mDescription (),
mAttribute_mFieldSettingMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element::~ GALGAS_configRegisterMaskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_luint & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_fieldSettingMap & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mMaskValue (inOperand1),
mAttribute_mDescription (inOperand2),
mAttribute_mFieldSettingMap (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configRegisterMaskMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_luint::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_fieldSettingMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_luint & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_fieldSettingMap & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_configRegisterMaskMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configRegisterMaskMap_2D_element::objectCompare (const GALGAS_configRegisterMaskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMaskValue.objectCompare (inOperand.mAttribute_mMaskValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDescription.objectCompare (inOperand.mAttribute_mDescription) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldSettingMap.objectCompare (inOperand.mAttribute_mFieldSettingMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configRegisterMaskMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMaskValue.isValid () && mAttribute_mDescription.isValid () && mAttribute_mFieldSettingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMaskMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mMaskValue.drop () ;
  mAttribute_mDescription.drop () ;
  mAttribute_mFieldSettingMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMaskMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @configRegisterMaskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMaskValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDescription.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configRegisterMaskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMaskMap_2D_element::getter_mMaskValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaskValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configRegisterMaskMap_2D_element::getter_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_configRegisterMaskMap_2D_element::getter_mFieldSettingMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldSettingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @configRegisterMaskMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ("configRegisterMaskMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configRegisterMaskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configRegisterMaskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMaskMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  const GALGAS_configRegisterMaskMap_2D_element * p = (const GALGAS_configRegisterMaskMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configRegisterMaskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element::GALGAS_configRegisterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterAddress (),
mAttribute_mRegisterWidth (),
mAttribute_mConfigRegisterMaskMap (),
mAttribute_mIllegalMaskList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element::~ GALGAS_configRegisterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element::GALGAS_configRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_luint & inOperand1,
                                                                          const GALGAS_luint & inOperand2,
                                                                          const GALGAS_configRegisterMaskMap & inOperand3,
                                                                          const GALGAS_illegalMaskList & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterAddress (inOperand1),
mAttribute_mRegisterWidth (inOperand2),
mAttribute_mConfigRegisterMaskMap (inOperand3),
mAttribute_mIllegalMaskList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_luint::constructor_default (HERE),
                                              GALGAS_luint::constructor_default (HERE),
                                              GALGAS_configRegisterMaskMap::constructor_emptyMap (HERE),
                                              GALGAS_illegalMaskList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_luint & inOperand1,
                                                                                          const GALGAS_luint & inOperand2,
                                                                                          const GALGAS_configRegisterMaskMap & inOperand3,
                                                                                          const GALGAS_illegalMaskList & inOperand4 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_configRegisterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configRegisterMap_2D_element::objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterWidth.objectCompare (inOperand.mAttribute_mRegisterWidth) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConfigRegisterMaskMap.objectCompare (inOperand.mAttribute_mConfigRegisterMaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIllegalMaskList.objectCompare (inOperand.mAttribute_mIllegalMaskList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configRegisterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterAddress.isValid () && mAttribute_mRegisterWidth.isValid () && mAttribute_mConfigRegisterMaskMap.isValid () && mAttribute_mIllegalMaskList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterAddress.drop () ;
  mAttribute_mRegisterWidth.drop () ;
  mAttribute_mConfigRegisterMaskMap.drop () ;
  mAttribute_mIllegalMaskList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @configRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterWidth.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConfigRegisterMaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIllegalMaskList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configRegisterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMap_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMap_2D_element::getter_mRegisterWidth (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterWidth ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap GALGAS_configRegisterMap_2D_element::getter_mConfigRegisterMaskMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigRegisterMaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList GALGAS_configRegisterMap_2D_element::getter_mIllegalMaskList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalMaskList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @configRegisterMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMap_2D_element ("configRegisterMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  const GALGAS_configRegisterMap_2D_element * p = (const GALGAS_configRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@baseline_instruction_IF_BitTest getBaseCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode> gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getBaseCode (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
           f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outBaseCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                  GALGAS_uint & outArgument_outBaseCode,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 7168U) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 6144U) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  enterExtensionMethod_getBaseCode (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode,
                                                                                 freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@baseline_instruction_IF_BitTest getMnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic> gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getMnemonic (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
           f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outMnemonic, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                  GALGAS_string & outArgument_outMnemonic,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  enterExtensionMethod_getMnemonic (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic,
                                                                                 freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@registerExpression resolveBaselineAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_resolveBaselineAccess> gExtensionMethodTable_registerExpression_resolveBaselineAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_resolveBaselineAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveBaselineAccess inMethod) {
  gExtensionMethodTable_registerExpression_resolveBaselineAccess.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_resolveBaselineAccess (const cPtr_registerExpression * inObject,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIntermediateRegisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_resolveBaselineAccess f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_resolveBaselineAccess.count ()) {
      f = gExtensionMethodTable_registerExpression_resolveBaselineAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_resolveBaselineAccess.count ()) {
           f = gExtensionMethodTable_registerExpression_resolveBaselineAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_resolveBaselineAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, out_outIntermediateRegisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerExpression_resolveBaselineAccess (const cPtr_registerExpression * inObject,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      GALGAS_baseline_5F_intermediate_5F_registerExpression & outArgument_outIntermediateRegisterDescription,
                                                                      GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_sint_36__34_ var_offset_683 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_683, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 21)) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 22)) ;
  GALGAS_string var_assemblyString_797 = object->mAttribute_mRegisterName.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 24)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_683.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_797.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_683.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)).getter_hexString (SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)) ;
  }
  GALGAS_uintlist var_registerAddressList_1013 ;
  GALGAS_uint var_size_1033 ;
  GALGAS_string joker_1061 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList_1013, var_size_1033, outArgument_outBitSliceTable, joker_1061, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 29)) ;
  GALGAS_uint var_registerAddress_1128 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_registerAddressList_1013.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 38)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bool var_found_1191 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_1234 (var_registerAddressList_1013, kEnumeration_up) ;
    bool bool_2 = var_found_1191.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).isValidAndTrue () ;
    if (enumerator_1234.hasCurrentObject () && bool_2) {
      while (enumerator_1234.hasCurrentObject () && bool_2) {
        var_registerAddress_1128 = enumerator_1234.current_mValue (HERE) ;
        var_found_1191 = GALGAS_bool (kIsInfOrEqual, enumerator_1234.current_mValue (HERE).objectCompare (GALGAS_uint ((uint32_t) 31U))) ;
        enumerator_1234.gotoNextObject () ;
        if (enumerator_1234.hasCurrentObject ()) {
          bool_2 = var_found_1191.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_3 = var_found_1191.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 44)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mRegisterName.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 45)), GALGAS_string ("the register cannot be accessed directly; use indirect addressing throught FSR register")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 45)) ;
    }
  }
  outArgument_outIntermediateRegisterDescription = GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_797, var_registerAddress_1128.add_operation (var_offset_683.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 51))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 49)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_resolveBaselineAccess (void) {
  enterExtensionMethod_resolveBaselineAccess (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                              extensionMethod_registerExpression_resolveBaselineAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_resolveBaselineAccess (void) {
  gExtensionMethodTable_registerExpression_resolveBaselineAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_resolveBaselineAccess (defineExtensionMethod_registerExpression_resolveBaselineAccess,
                                                                     freeExtensionMethod_registerExpression_resolveBaselineAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getBaseCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode> gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
      f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
           f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outBaseCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                  GALGAS_uint & outArgument_outBaseCode,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 7168U) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 6144U) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  enterExtensionMethod_getBaseCode (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode,
                                                                                 freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getMnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic> gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
      f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
           f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outMnemonic, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                  GALGAS_string & outArgument_outMnemonic,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  enterExtensionMethod_getMnemonic (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic,
                                                                                 freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@registerExpression resolveMidrangeAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_resolveMidrangeAccess> gExtensionMethodTable_registerExpression_resolveMidrangeAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_resolveMidrangeAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveMidrangeAccess inMethod) {
  gExtensionMethodTable_registerExpression_resolveMidrangeAccess.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_resolveMidrangeAccess (const cPtr_registerExpression * inObject,
                                                const GALGAS_uint constin_inTotalBankCount,
                                                const GALGAS_uint constin_inCurrentBank,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_resolveMidrangeAccess f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_resolveMidrangeAccess.count ()) {
      f = gExtensionMethodTable_registerExpression_resolveMidrangeAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_resolveMidrangeAccess.count ()) {
           f = gExtensionMethodTable_registerExpression_resolveMidrangeAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_resolveMidrangeAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerExpression_resolveMidrangeAccess (const cPtr_registerExpression * inObject,
                                                                      const GALGAS_uint constinArgument_inTotalBankCount,
                                                                      const GALGAS_uint constinArgument_inCurrentBank,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                      GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_sint_36__34_ var_offset_626 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_626, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 21)) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 22)) ;
  GALGAS_string var_assemblyString_740 = object->mAttribute_mRegisterName.mAttribute_string ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_626.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_740.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_626.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)) ;
  }
  GALGAS_uintlist var_registerAddressList_941 ;
  GALGAS_uint var_size_961 ;
  GALGAS_string joker_989 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList_941, var_size_961, outArgument_outBitSliceTable, joker_989, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 29)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_offset_626.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 37)).objectCompare (var_size_961)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfOffsetExpression, GALGAS_string ("maximum index value is ").add_operation (var_size_961.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 38))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)) ;
  }
  GALGAS_uintlist var_acceptableBanks_1167 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("midrange_intermediate_classes.galgas", 41)) ;
  cEnumerator_uintlist enumerator_1223 (var_registerAddressList_941, kEnumeration_up) ;
  while (enumerator_1223.hasCurrentObject ()) {
    var_acceptableBanks_1167.addAssign_operation (enumerator_1223.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 43))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)) ;
    enumerator_1223.gotoNextObject () ;
  }
  GALGAS_uint var_registerAddress_1297 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 47)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_uint var_bank_1420 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_bool var_ok_1437 = GALGAS_bool (true) ;
    if (constinArgument_inTotalBankCount.isValid ()) {
      uint32_t variant_1453 = constinArgument_inTotalBankCount.uintValue () ;
      bool loop_1453 = true ;
      while (loop_1453) {
        loop_1453 = GALGAS_bool (kIsStrictInf, var_bank_1420.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1437 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)).isValid () ;
        if (loop_1453) {
          loop_1453 = GALGAS_bool (kIsStrictInf, var_bank_1420.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1437 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)).boolValue () ;
        }
        if (loop_1453 && (0 == variant_1453)) {
          loop_1453 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)) ;
        }
        if (loop_1453) {
          variant_1453 -- ;
          var_ok_1437 = GALGAS_bool (false) ;
          cEnumerator_uintlist enumerator_1566 (var_registerAddressList_941, kEnumeration_up) ;
          bool bool_3 = var_ok_1437.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValidAndTrue () ;
          if (enumerator_1566.hasCurrentObject () && bool_3) {
            while (enumerator_1566.hasCurrentObject () && bool_3) {
              var_ok_1437 = GALGAS_bool (kIsSupOrEqual, enumerator_1566.current_mValue (HERE).objectCompare (var_bank_1420.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_1566.current_mValue (HERE).objectCompare (var_bank_1420.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)) ;
              var_registerAddress_1297 = enumerator_1566.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)) ;
              enumerator_1566.gotoNextObject () ;
              if (enumerator_1566.hasCurrentObject ()) {
                bool_3 = var_ok_1437.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValidAndTrue () ;
              }
            }
          }
          var_bank_1420.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
        }
      }
    }
    const enumGalgasBool test_4 = var_ok_1437.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_acceptableBankMessage_1779 = GALGAS_string::makeEmptyString () ;
      cEnumerator_uintlist enumerator_1821 (var_registerAddressList_941, kEnumeration_up) ;
      while (enumerator_1821.hasCurrentObject ()) {
        var_acceptableBankMessage_1779.plusAssign_operation(enumerator_1821.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)) ;
        if (enumerator_1821.hasNextObject ()) {
          var_acceptableBankMessage_1779.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 63)) ;
        }
        enumerator_1821.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mRegisterName.getter_location (SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)), GALGAS_string ("as no bank is currently known, the '").add_operation (object->mAttribute_mRegisterName.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)).add_operation (GALGAS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)).add_operation (var_acceptableBankMessage_1779, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)).add_operation (GALGAS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
    }
  }else if (kBoolFalse == test_2) {
    GALGAS_bool var_found_2165 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_2208 (var_registerAddressList_941, kEnumeration_up) ;
    bool bool_5 = var_found_2165.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 69)).isValidAndTrue () ;
    if (enumerator_2208.hasCurrentObject () && bool_5) {
      while (enumerator_2208.hasCurrentObject () && bool_5) {
        var_found_2165 = GALGAS_bool (kIsSupOrEqual, enumerator_2208.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_2208.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)) ;
        var_registerAddress_1297 = enumerator_2208.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)) ;
        enumerator_2208.gotoNextObject () ;
        if (enumerator_2208.hasCurrentObject ()) {
          bool_5 = var_found_2165.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 69)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_6 = var_found_2165.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string var_acceptableBankMessage_2420 = GALGAS_string::makeEmptyString () ;
      cEnumerator_uintlist enumerator_2462 (var_registerAddressList_941, kEnumeration_up) ;
      while (enumerator_2462.hasCurrentObject ()) {
        var_acceptableBankMessage_2420.plusAssign_operation(enumerator_2462.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)) ;
        if (enumerator_2462.hasNextObject ()) {
          var_acceptableBankMessage_2420.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 77)) ;
        }
        enumerator_2462.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mRegisterName.getter_location (SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)), GALGAS_string ("the '").add_operation (object->mAttribute_mRegisterName.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (GALGAS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (GALGAS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (var_acceptableBankMessage_2420, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_740, var_registerAddress_1297.add_operation (var_offset_626.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 83)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_resolveMidrangeAccess (void) {
  enterExtensionMethod_resolveMidrangeAccess (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                              extensionMethod_registerExpression_resolveMidrangeAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_resolveMidrangeAccess (void) {
  gExtensionMethodTable_registerExpression_resolveMidrangeAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_resolveMidrangeAccess (defineExtensionMethod_registerExpression_resolveMidrangeAccess,
                                                                     freeExtensionMethod_registerExpression_resolveMidrangeAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@registerExpression analyzeRegisterExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_analyzeRegisterExpression> gExtensionMethodTable_registerExpression_analyzeRegisterExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_registerExpression_analyzeRegisterExpression inMethod) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeRegisterExpression (const cPtr_registerExpression * inObject,
                                                    const GALGAS_uint constin_inAccessBankSplitOffset,
                                                    const GALGAS_uint constin_inCurrentBank,
                                                    const GALGAS_registerTable constin_inRegisterTable,
                                                    const GALGAS_constantMap constin_inConstantMap,
                                                    GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    GALGAS_bitSliceTable & out_outBitSliceTable,
                                                    GALGAS_stringset & io_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_analyzeRegisterExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_analyzeRegisterExpression.count ()) {
      f = gExtensionMethodTable_registerExpression_analyzeRegisterExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_analyzeRegisterExpression.count ()) {
           f = gExtensionMethodTable_registerExpression_analyzeRegisterExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_analyzeRegisterExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerExpression_analyzeRegisterExpression (const cPtr_registerExpression * inObject,
                                                                          const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GALGAS_uint constinArgument_inCurrentBank,
                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                          GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                          GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_sint_36__34_ var_offset_576 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_576, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 18)) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 19)) ;
  GALGAS_string var_assemblyString_690 = object->mAttribute_mRegisterName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 21)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_576.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_690.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_576.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 23)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 23)) ;
  }
  GALGAS_uint var_registerAddress_830 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uintlist var_registerAddressList_911 ;
  GALGAS_uint var_size_927 ;
  GALGAS_string joker_955 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList_911, var_size_927, outArgument_outBitSliceTable, joker_955, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 27)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_offset_576.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfOffsetExpression, GALGAS_string ("offset (").add_operation (var_offset_576.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 36)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 36))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 36)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_offset_576.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 37)).objectCompare (var_size_927)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfOffsetExpression, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_927.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 38))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 38)) ;
    }
  }
  GALGAS_bool var_found_1223 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_1264 (var_registerAddressList_911, kEnumeration_up) ;
  bool bool_3 = var_found_1223.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 42)).isValidAndTrue () ;
  if (enumerator_1264.hasCurrentObject () && bool_3) {
    while (enumerator_1264.hasCurrentObject () && bool_3) {
      var_found_1223 = GALGAS_bool (kIsStrictInf, enumerator_1264.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GALGAS_bool (kIsSupOrEqual, enumerator_1264.current_mValue (HERE).objectCompare (GALGAS_uint ((uint32_t) 3840U).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)) ;
      var_registerAddress_830 = enumerator_1264.current_mValue (HERE) ;
      enumerator_1264.gotoNextObject () ;
      if (enumerator_1264.hasCurrentObject ()) {
        bool_3 = var_found_1223.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 42)).isValidAndTrue () ;
      }
    }
  }
  GALGAS_bool var_needsBSRaccess_1437 = GALGAS_bool (false) ;
  const enumGalgasBool test_4 = var_found_1223.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 47)).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_needsBSRaccess_1437 = GALGAS_bool (true) ;
    var_registerAddressList_911.method_first (var_registerAddress_830, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 49)) ;
    GALGAS_uint var_neededBank_1561 = var_registerAddress_830.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 50)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_neededBank_1561.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_errorMessage_1653 = GALGAS_string ("Accessing the '").add_operation (object->mAttribute_mRegisterName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)).add_operation (GALGAS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)).add_operation (var_neededBank_1561.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        var_errorMessage_1653.plusAssign_operation(GALGAS_string (", but current bank selection cannot be known"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 54)) ;
      }else if (kBoolFalse == test_6) {
        var_errorMessage_1653.plusAssign_operation(GALGAS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 56)) ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mRegisterName.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 58)), var_errorMessage_1653  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 58)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_690, var_registerAddress_830.add_operation (var_offset_576.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 64)), var_needsBSRaccess_1437  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 62)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_analyzeRegisterExpression (void) {
  enterExtensionMethod_analyzeRegisterExpression (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                  extensionMethod_registerExpression_analyzeRegisterExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_analyzeRegisterExpression (void) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpression (defineExtensionMethod_registerExpression_analyzeRegisterExpression,
                                                                         freeExtensionMethod_registerExpression_analyzeRegisterExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank> gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                        extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const cPtr_registerExpression * inObject,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.count ()) {
      f = gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.count ()) {
           f = gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, out_outIPICregisterDescription, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (const cPtr_registerExpression * inObject,
                                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                             GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument_outIPICregisterDescription,
                                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 77)) ;
  GALGAS_string var_assemblyString_2638 = object->mAttribute_mRegisterName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 79)) ;
  GALGAS_sint_36__34_ var_offset_2731 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_2731, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 80)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_2731.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_2638.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_2731.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 82)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 82)) ;
  }
  GALGAS_uintlist var_registerAddressList_2920 ;
  GALGAS_uint var_size_2936 ;
  GALGAS_bitSliceTable joker_2938 ; // Joker input parameter
  GALGAS_string joker_2941 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList_2920, var_size_2936, joker_2938, joker_2941, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 85)) ;
  GALGAS_uint var_registerAddress_2999 ;
  var_registerAddressList_2920.method_first (var_registerAddress_2999, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_offset_2731.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 88)).objectCompare (var_size_2936)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfOffsetExpression, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_2936.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)) ;
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_new (var_assemblyString_2638, var_registerAddress_2999.add_operation (var_offset_2731.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 92)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                                     extensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (defineExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank,
                                                                                            freeExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@registerExpression getRegisterAddress'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_getRegisterAddress> gExtensionMethodTable_registerExpression_getRegisterAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getRegisterAddress (const int32_t inClassIndex,
                                              extensionMethodSignature_registerExpression_getRegisterAddress inMethod) {
  gExtensionMethodTable_registerExpression_getRegisterAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getRegisterAddress (const cPtr_registerExpression * inObject,
                                             const GALGAS_registerTable constin_inRegisterTable,
                                             const GALGAS_constantMap constin_inConstantMap,
                                             GALGAS_stringset & io_ioUsedRegisters,
                                             GALGAS_uint & out_outRegisterAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outRegisterAddress.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_getRegisterAddress f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_getRegisterAddress.count ()) {
      f = gExtensionMethodTable_registerExpression_getRegisterAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_getRegisterAddress.count ()) {
           f = gExtensionMethodTable_registerExpression_getRegisterAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_getRegisterAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, io_ioUsedRegisters, out_outRegisterAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerExpression_getRegisterAddress (const cPtr_registerExpression * inObject,
                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                   GALGAS_uint & outArgument_outRegisterAddress,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_uintlist var_registerAddressList_3647 ;
  GALGAS_uint var_size_3663 ;
  GALGAS_bitSliceTable joker_3665 ; // Joker input parameter
  GALGAS_string joker_3668 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList_3647, var_size_3663, joker_3665, joker_3668, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 106)) ;
  GALGAS_sint_36__34_ var_offset_3743 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_3743, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 108)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_offset_3743.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfOffsetExpression, GALGAS_string ("offset (").add_operation (var_offset_3743.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 110)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 110))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 110)) ;
    outArgument_outRegisterAddress.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_offset_3743.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 111)).objectCompare (var_size_3663)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfOffsetExpression, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_3663.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 112))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 112)) ;
      outArgument_outRegisterAddress.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_registerAddressList_3647.method_first (outArgument_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 114)) ;
      outArgument_outRegisterAddress = outArgument_outRegisterAddress.add_operation (var_offset_3743.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_getRegisterAddress (void) {
  enterExtensionMethod_getRegisterAddress (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                           extensionMethod_registerExpression_getRegisterAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_getRegisterAddress (void) {
  gExtensionMethodTable_registerExpression_getRegisterAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_getRegisterAddress (defineExtensionMethod_registerExpression_getRegisterAddress,
                                                                  freeExtensionMethod_registerExpression_getRegisterAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@immediatInteger eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatInteger_eval (const cPtr_immediatExpression * inObject,
                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                  GALGAS_sint_36__34_ & outArgument_outResult,
                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatInteger * object = (const cPtr_immediatInteger *) inObject ;
  macroValidSharedObject (object, cPtr_immediatInteger) ;
  outArgument_outResult = object->mAttribute_mValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 96)).getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatInteger_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatInteger.mSlotID,
                             extensionMethod_immediatInteger_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatInteger_eval (defineExtensionMethod_immediatInteger_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatRegister eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatRegister_eval (const cPtr_immediatExpression * inObject,
                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRegister * object = (const cPtr_immediatRegister *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRegister) ;
  const enumGalgasBool test_0 = constinArgument_inRegisterTable.getter_hasKey (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 107)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 107)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 108)).mAttribute_string  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 108)) ;
    GALGAS_uintlist var_registerAddressList_3994 ;
    GALGAS_uint var_size_4010 ;
    GALGAS_bitSliceTable joker_4012 ; // Joker input parameter
    GALGAS_string joker_4015 ; // Joker input parameter
    constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 109)), var_registerAddressList_3994, var_size_4010, joker_4012, joker_4015, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 109)) ;
    GALGAS_uint var_registerAddress_4043 ;
    var_registerAddressList_3994.method_first (var_registerAddress_4043, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 110)) ;
    GALGAS_sint_36__34_ var_offset_4170 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRegister.getter_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 111)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4170, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_offset_4170.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 113)), GALGAS_string ("index (").add_operation (var_offset_4170.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 114)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 114))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 113)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_offset_4170.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)).objectCompare (var_size_4010)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 116)), GALGAS_string ("index (").add_operation (var_offset_4170.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).add_operation (GALGAS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).add_operation (var_size_4010.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)) ;
      }
    }
    outArgument_outResult = var_registerAddress_4043.getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (var_offset_4170, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = constinArgument_inConstantMap.getter_hasKey (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 120)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 120)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_3) {
      constinArgument_inConstantMap.method_searchKey (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 121)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 121)) ;
      GALGAS_sint_36__34_ var_offset_4754 ;
      callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRegister.getter_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 122)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4754, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 122)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_offset_4754.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 124)), GALGAS_string ("index notation (").add_operation (var_offset_4754.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 125)).add_operation (GALGAS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 125))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 124)) ;
      }
    }else if (kBoolFalse == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 128)).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 128)), GALGAS_string ("'").add_operation (object->mAttribute_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 128)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 128)).add_operation (GALGAS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 128))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 128)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatRegister_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatRegister.mSlotID,
                             extensionMethod_immediatRegister_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatRegister_eval (defineExtensionMethod_immediatRegister_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatAdd eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatAdd_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAdd * object = (const cPtr_immediatAdd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAdd) ;
  GALGAS_sint_36__34_ var_leftResult_5399 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5399, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 139)) ;
  GALGAS_sint_36__34_ var_rightResult_5500 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5500, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 140)) ;
  outArgument_outResult = var_leftResult_5399.add_operation (var_rightResult_5500, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatAdd_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatAdd.mSlotID,
                             extensionMethod_immediatAdd_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatAdd_eval (defineExtensionMethod_immediatAdd_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatSub eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatSub_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSub * object = (const cPtr_immediatSub *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSub) ;
  GALGAS_sint_36__34_ var_leftResult_5881 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5881, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 151)) ;
  GALGAS_sint_36__34_ var_rightResult_5982 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5982, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 152)) ;
  outArgument_outResult = var_leftResult_5881.substract_operation (var_rightResult_5982, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatSub_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatSub.mSlotID,
                             extensionMethod_immediatSub_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatSub_eval (defineExtensionMethod_immediatSub_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatMul eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatMul_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMul * object = (const cPtr_immediatMul *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMul) ;
  GALGAS_sint_36__34_ var_leftResult_6363 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6363, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 163)) ;
  GALGAS_sint_36__34_ var_rightResult_6464 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6464, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 164)) ;
  outArgument_outResult = var_leftResult_6363.multiply_operation (var_rightResult_6464, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatMul_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatMul.mSlotID,
                             extensionMethod_immediatMul_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatMul_eval (defineExtensionMethod_immediatMul_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatDiv eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatDiv_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatDiv * object = (const cPtr_immediatDiv *) inObject ;
  macroValidSharedObject (object, cPtr_immediatDiv) ;
  GALGAS_sint_36__34_ var_leftResult_6845 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6845, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 175)) ;
  GALGAS_sint_36__34_ var_rightResult_6946 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6946, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 176)) ;
  outArgument_outResult = var_leftResult_6845.divide_operation (var_rightResult_6946, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatDiv_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatDiv.mSlotID,
                             extensionMethod_immediatDiv_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatDiv_eval (defineExtensionMethod_immediatDiv_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatMod eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatMod_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMod * object = (const cPtr_immediatMod *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMod) ;
  GALGAS_sint_36__34_ var_leftResult_7327 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7327, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 187)) ;
  GALGAS_sint_36__34_ var_rightResult_7428 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7428, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 188)) ;
  outArgument_outResult = var_leftResult_7327.modulo_operation (var_rightResult_7428, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 189)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatMod_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatMod.mSlotID,
                             extensionMethod_immediatMod_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatMod_eval (defineExtensionMethod_immediatMod_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatAnd eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatAnd_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAnd * object = (const cPtr_immediatAnd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAnd) ;
  GALGAS_sint_36__34_ var_leftResult_7811 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7811, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 199)) ;
  GALGAS_sint_36__34_ var_rightResult_7912 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7912, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 200)) ;
  outArgument_outResult = var_leftResult_7811.operator_and (var_rightResult_7912 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 201)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatAnd_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatAnd.mSlotID,
                             extensionMethod_immediatAnd_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatAnd_eval (defineExtensionMethod_immediatAnd_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatOr eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatOr_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatOr * object = (const cPtr_immediatOr *) inObject ;
  macroValidSharedObject (object, cPtr_immediatOr) ;
  GALGAS_sint_36__34_ var_leftResult_8292 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8292, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 211)) ;
  GALGAS_sint_36__34_ var_rightResult_8393 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8393, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 212)) ;
  outArgument_outResult = var_leftResult_8292.operator_or (var_rightResult_8393 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 213)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatOr_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatOr.mSlotID,
                             extensionMethod_immediatOr_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatOr_eval (defineExtensionMethod_immediatOr_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatXor eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatXor_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatXor * object = (const cPtr_immediatXor *) inObject ;
  macroValidSharedObject (object, cPtr_immediatXor) ;
  GALGAS_sint_36__34_ var_leftResult_8774 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8774, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 223)) ;
  GALGAS_sint_36__34_ var_rightResult_8875 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8875, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 224)) ;
  outArgument_outResult = var_leftResult_8774.operator_xor (var_rightResult_8875 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatXor_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatXor.mSlotID,
                             extensionMethod_immediatXor_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatXor_eval (defineExtensionMethod_immediatXor_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatLeftShift eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatLeftShift_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLeftShift * object = (const cPtr_immediatLeftShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLeftShift) ;
  GALGAS_sint_36__34_ var_leftResult_9262 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9262, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 235)) ;
  GALGAS_sint_36__34_ var_rightResult_9363 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9363, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 236)) ;
  outArgument_outResult = var_leftResult_9262.left_shift_operation (var_rightResult_9363.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 237)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatLeftShift_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLeftShift.mSlotID,
                             extensionMethod_immediatLeftShift_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLeftShift_eval (defineExtensionMethod_immediatLeftShift_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@immediatRightShift eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatRightShift_eval (const cPtr_immediatExpression * inObject,
                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                     GALGAS_sint_36__34_ & outArgument_outResult,
                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRightShift * object = (const cPtr_immediatRightShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRightShift) ;
  GALGAS_sint_36__34_ var_leftResult_9759 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9759, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 247)) ;
  GALGAS_sint_36__34_ var_rightResult_9860 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9860, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 248)) ;
  outArgument_outResult = var_leftResult_9759.right_shift_operation (var_rightResult_9860.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 249)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatRightShift_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatRightShift.mSlotID,
                             extensionMethod_immediatRightShift_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatRightShift_eval (defineExtensionMethod_immediatRightShift_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatEqualTest eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatEqualTest * object = (const cPtr_immediatEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_10255 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10255, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 259)) ;
  GALGAS_sint_36__34_ var_rightResult_10356 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10356, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 260)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftResult_10255.objectCompare (var_rightResult_10356)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatEqualTest.mSlotID,
                             extensionMethod_immediatEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatEqualTest_eval (defineExtensionMethod_immediatEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@immediatNotEqualTest eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatNotEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                       GALGAS_sint_36__34_ & outArgument_outResult,
                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNotEqualTest * object = (const cPtr_immediatNotEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNotEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_10796 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10796, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 275)) ;
  GALGAS_sint_36__34_ var_rightResult_10897 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10897, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 276)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftResult_10796.objectCompare (var_rightResult_10897)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatNotEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatNotEqualTest.mSlotID,
                             extensionMethod_immediatNotEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatNotEqualTest_eval (defineExtensionMethod_immediatNotEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@immediatGreaterOrEqualTest eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatGreaterOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterOrEqualTest * object = (const cPtr_immediatGreaterOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_11343 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11343, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 291)) ;
  GALGAS_sint_36__34_ var_rightResult_11444 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11444, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 292)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, var_leftResult_11343.objectCompare (var_rightResult_11444)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatGreaterOrEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest.mSlotID,
                             extensionMethod_immediatGreaterOrEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatGreaterOrEqualTest_eval (defineExtensionMethod_immediatGreaterOrEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@immediatLowerOrEqualTest eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatLowerOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                           GALGAS_sint_36__34_ & outArgument_outResult,
                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerOrEqualTest * object = (const cPtr_immediatLowerOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_11888 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11888, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 307)) ;
  GALGAS_sint_36__34_ var_rightResult_11989 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11989, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 308)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, var_leftResult_11888.objectCompare (var_rightResult_11989)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatLowerOrEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLowerOrEqualTest.mSlotID,
                             extensionMethod_immediatLowerOrEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLowerOrEqualTest_eval (defineExtensionMethod_immediatLowerOrEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@immediatGreaterTest eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatGreaterTest_eval (const cPtr_immediatExpression * inObject,
                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                      GALGAS_sint_36__34_ & outArgument_outResult,
                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterTest * object = (const cPtr_immediatGreaterTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterTest) ;
  GALGAS_sint_36__34_ var_leftResult_12428 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12428, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 323)) ;
  GALGAS_sint_36__34_ var_rightResult_12529 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12529, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 324)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_leftResult_12428.objectCompare (var_rightResult_12529)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatGreaterTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterTest.mSlotID,
                             extensionMethod_immediatGreaterTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatGreaterTest_eval (defineExtensionMethod_immediatGreaterTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatLowerTest eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatLowerTest_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerTest * object = (const cPtr_immediatLowerTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerTest) ;
  GALGAS_sint_36__34_ var_leftResult_12965 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12965, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 339)) ;
  GALGAS_sint_36__34_ var_rightResult_13066 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_13066, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 340)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_leftResult_12965.objectCompare (var_rightResult_13066)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatLowerTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLowerTest.mSlotID,
                             extensionMethod_immediatLowerTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLowerTest_eval (defineExtensionMethod_immediatLowerTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@immediatNegate eval'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatNegate_eval (const cPtr_immediatExpression * inObject,
                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                 GALGAS_sint_36__34_ & outArgument_outResult,
                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNegate * object = (const cPtr_immediatNegate *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNegate) ;
  GALGAS_sint_36__34_ var_result_13491 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13491, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 355)) ;
  outArgument_outResult = var_result_13491.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 356)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatNegate_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatNegate.mSlotID,
                             extensionMethod_immediatNegate_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatNegate_eval (defineExtensionMethod_immediatNegate_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@immediatComplement eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatComplement_eval (const cPtr_immediatExpression * inObject,
                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                     GALGAS_sint_36__34_ & outArgument_outResult,
                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatComplement * object = (const cPtr_immediatComplement *) inObject ;
  macroValidSharedObject (object, cPtr_immediatComplement) ;
  GALGAS_sint_36__34_ var_result_13855 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13855, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 366)) ;
  outArgument_outResult = var_result_13855.operator_tilde (SOURCE_FILE ("intermediate_generic.galgas", 367)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatComplement_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatComplement.mSlotID,
                             extensionMethod_immediatComplement_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatComplement_eval (defineExtensionMethod_immediatComplement_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@immediatSlice eval'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatSlice_eval (const cPtr_immediatExpression * inObject,
                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                GALGAS_sint_36__34_ & outArgument_outResult,
                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSlice * object = (const cPtr_immediatSlice *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSlice) ;
  GALGAS_bitSliceTable var_bitSliceTable_14173 ;
  outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 379)) ;
  GALGAS_uintlist joker_14280 ; // Joker input parameter
  GALGAS_uint joker_14283 ; // Joker input parameter
  GALGAS_string joker_14302 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, joker_14280, joker_14283, var_bitSliceTable_14173, joker_14302, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 380)) ;
  GALGAS_stringset var_sliceNameSet_14323 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("intermediate_generic.galgas", 381)) ;
  cEnumerator_immediatSliceExpressionList enumerator_14380 (object->mAttribute_mSliceExpressionList, kEnumeration_up) ;
  while (enumerator_14380.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_sliceNameSet_14323.getter_hasKey (enumerator_14380.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 383)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 383)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_14380.current_mSliceName (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 384)), GALGAS_string ("the '").add_operation (enumerator_14380.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)).add_operation (GALGAS_string ("' bit field has been already defined"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)) ;
    }else if (kBoolFalse == test_0) {
      var_sliceNameSet_14323.addAssign_operation (enumerator_14380.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 386))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 386)) ;
      GALGAS_uint var_sliceIndex_14598 ;
      GALGAS_uint var_sliceSize_14620 ;
      var_bitSliceTable_14173.method_searchKey (enumerator_14380.current_mSliceName (HERE), var_sliceIndex_14598, var_sliceSize_14620, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 389)) ;
      GALGAS_sint_36__34_ var_result_14763 ;
      callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_14380.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_14763, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 390)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_result_14763.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).operator_or (GALGAS_bool (kIsStrictSup, var_result_14763.objectCompare (GALGAS_sint_36__34_ ((int64_t) 1LL).left_shift_operation (var_sliceSize_14620 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)).substract_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)))) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (enumerator_14380.current_mSliceName (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 392)), GALGAS_string ("invalid immediat value associated to the '").add_operation (enumerator_14380.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (GALGAS_string ("' bit field, evaluated as "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (var_result_14763.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (GALGAS_string (" (should be between 0 and "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (GALGAS_uint ((uint32_t) 1U).left_shift_operation (var_sliceSize_14620 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)) ;
      }
      outArgument_outResult = outArgument_outResult.operator_or (var_result_14763.left_shift_operation (var_sliceIndex_14598 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)) ;
    }
    enumerator_14380.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatSlice_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatSlice.mSlotID,
                             extensionMethod_immediatSlice_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatSlice_eval (defineExtensionMethod_immediatSlice_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@bitNumberLiteralValue getBitNumber'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bitNumberLiteralValue_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                const GALGAS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                                GALGAS_uint & outArgument_outBitNumber,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLiteralValue * object = (const cPtr_bitNumberLiteralValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLiteralValue) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBitNumberLiteralValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 422)).objectCompare (GALGAS_uint ((uint32_t) 7U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mBitNumberLiteralValue.getter_location (SOURCE_FILE ("intermediate_generic.galgas", 423)), GALGAS_string ("The bit number is ").add_operation (object->mAttribute_mBitNumberLiteralValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 423)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423)).add_operation (GALGAS_string (" (should be <= 7)"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423)) ;
  }
  outArgument_outBitNumber = object->mAttribute_mBitNumberLiteralValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 425)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitNumberLiteralValue_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLiteralValue.mSlotID,
                                     extensionMethod_bitNumberLiteralValue_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLiteralValue_getBitNumber (defineExtensionMethod_bitNumberLiteralValue_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@bitNumberLabelValue getBitNumber'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bitNumberLabelValue_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                              const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                              GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                              const GALGAS_bitSliceTable constinArgument_inBitSliceTable,
                                                              GALGAS_uint & outArgument_outBitNumber,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLabelValue * object = (const cPtr_bitNumberLabelValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLabelValue) ;
  GALGAS_uint var_sliceIndex_16677 ;
  GALGAS_uint var_sliceSize_16692 ;
  constinArgument_inBitSliceTable.method_searchKey (object->mAttribute_mBitNumberLabelValue, var_sliceIndex_16677, var_sliceSize_16692, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 437)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBitNumberIndexValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 438)).objectCompare (var_sliceSize_16692)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mBitNumberIndexValue.getter_location (SOURCE_FILE ("intermediate_generic.galgas", 439)), GALGAS_string ("The ").add_operation (object->mAttribute_mBitNumberIndexValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 439)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)).add_operation (GALGAS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)).add_operation (var_sliceSize_16692.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 440)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 440))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)) ;
  }
  outArgument_outBitNumber = var_sliceIndex_16677.add_operation (object->mAttribute_mBitNumberIndexValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitNumberLabelValue_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLabelValue.mSlotID,
                                     extensionMethod_bitNumberLabelValue_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLabelValue_getBitNumber (defineExtensionMethod_bitNumberLabelValue_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@bitNumberLiteralExpression getBitNumber'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bitNumberLiteralExpression_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     const GALGAS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                                     GALGAS_uint & outArgument_outBitNumber,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLiteralExpression * object = (const cPtr_bitNumberLiteralExpression *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLiteralExpression) ;
  GALGAS_sint_36__34_ var_result_17354 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mBitNumberLiteralExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_17354, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 454)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_result_17354.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("bit index is ").add_operation (var_result_17354.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456)).add_operation (GALGAS_string (", but should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456)) ;
    outArgument_outBitNumber.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_result_17354.objectCompare (GALGAS_sint_36__34_ ((int64_t) 7LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("bit index is ").add_operation (var_result_17354.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)).add_operation (GALGAS_string (", but should be <= 7"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)) ;
      outArgument_outBitNumber.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outBitNumber = var_result_17354.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitNumberLiteralExpression_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLiteralExpression.mSlotID,
                                     extensionMethod_bitNumberLiteralExpression_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLiteralExpression_getBitNumber (defineExtensionMethod_bitNumberLiteralExpression_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_instruction_IF_BitTest addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_instruction_IF_IncDec addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_JUMP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JUMP * object = (const cPtr_baseline_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_GOTO addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_GOTO * object = (const cPtr_baseline_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_GOTO) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_CALL addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_CALL * object = (const cPtr_baseline_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_CALL) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@baseline_instruction_FOREVER addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FOREVER * object = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 54)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_STATIC_REPEAT addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 61)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_MNOP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_TRIS addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_instruction_WO_OPERAND addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_instruction_F addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_instruction_FB addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_instruction_do_while addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_do_5F_while * object = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 98)) ;
  }
  cEnumerator_baseline_5F_partList enumerator_3216 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_3216.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList (enumerator_3216.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 100)) ;
    }
    enumerator_3216.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_structured_if addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mThenInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 108)) ;
  }
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 109)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_instruction_FD addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_instruction_JSR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JSR * object = (const cPtr_baseline_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 122)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_instruction_literalOperation addUsedRoutines'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@baseline_instruction_literalOperation shouldTerminateWithMOVLW'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                  const GALGAS_string constinArgument_inErrorMessage,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLiteralInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_compilation.galgas", 25)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, constinArgument_inErrorMessage  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 26)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_CALL shouldTerminateWithMOVLW'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                      const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_instruction_structured_if shouldTerminateWithMOVLW'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                  const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mThenInstructionList.getter_length (SOURCE_FILE ("baseline_compilation.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the 'then' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 42)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_baseline_5F_instruction var_lastInstruction_1797 ;
    object->mAttribute_mThenInstructionList.method_last (var_lastInstruction_1797, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 44)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_1797.ptr (), GALGAS_string ("the 'then' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 45)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mElseInstructionList.getter_length (SOURCE_FILE ("baseline_compilation.galgas", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the 'else' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 49)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_baseline_5F_instruction var_lastInstruction_2230 ;
    object->mAttribute_mElseInstructionList.method_last (var_lastInstruction_2230, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 51)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_2230.ptr (), GALGAS_string ("the 'else' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 52)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_instruction_GOTO shouldNotContinueInSequence'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_instruction_JUMP shouldNotContinueInSequence'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_instruction_FOREVER shouldNotContinueInSequence'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                            const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                           const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                           const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                           GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                           GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                           const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                           const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the last routine instruction should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 122)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 124))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                  const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_TRIS * object = (const cPtr_baseline_5F_instruction_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_TRIS) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction but should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 154)) ;
  }
  const enumGalgasBool test_1 = function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 157)).getter_hasKey (object->mAttribute_mOperand.mAttribute_string COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 157)).operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 157)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_5488 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_5533 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)), kEnumeration_up) ;
    while (enumerator_5533.hasCurrentObject ()) {
      var_s_5488.plusAssign_operation(enumerator_5533.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 160)) ;
      if (enumerator_5533.hasNextObject ()) {
        var_s_5488.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 161)) ;
      }
      enumerator_5533.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s_5488, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 163))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 163)) ;
  }
  GALGAS_uintlist var_registerAddressList_5752 ;
  GALGAS_uint joker_5754_3 ; // Joker input parameter
  GALGAS_bitSliceTable joker_5754_2 ; // Joker input parameter
  GALGAS_string joker_5754_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mOperand, var_registerAddressList_5752, joker_5754_3, joker_5754_2, joker_5754_1, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 166)) ;
  GALGAS_uint var_opcode_5804 ;
  var_registerAddressList_5752.method_first (var_opcode_5804, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 167)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOperand, var_opcode_5804  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 169))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                  const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 187)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 189))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 189)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                              const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                              const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                              GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                              GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                              const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                              const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mLiteralInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 206)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 206)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 207)) ;
  }
  GALGAS_sint_36__34_ var_immediatValue_7776 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue_7776, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_immediatValue_7776.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_immediatValue_7776.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 211)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 211)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_immediatValue_7776.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 218)), var_immediatValue_7776.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 219)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 216))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 216)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLiteralInstruction, var_immediatValue_7776.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 224)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 221))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 221)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_instruction_FD build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FD) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 244)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_9398 ;
  GALGAS_bitSliceTable var_bitSliceTable_9436 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_9398, var_bitSliceTable_9436, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 246)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction_5F_FD_5F_base_5F_code, var_intermediateRegisterDescription_9398, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 253))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 253)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_CALL build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                  const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_CALL * object = (const cPtr_baseline_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_CALL) ;
  GALGAS_bool var_isNoReturn_10372 ;
  GALGAS_luint var_targetPage_10395 ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_10372, var_targetPage_10395, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 275)) ;
  const enumGalgasBool test_0 = var_isNoReturn_10372.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 277)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 277)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_10395.mAttribute_uint)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 280)), GALGAS_string ("for an inter-page regular routine call, use a JSR instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 280)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 284))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 284)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 288))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 288)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_instruction_JSR build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                 const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                 const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JSR * object = (const cPtr_baseline_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JSR) ;
  GALGAS_bool var_isNoReturn_11667 ;
  GALGAS_luint var_targetPage_11690 ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_11667, var_targetPage_11690, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 309)) ;
  const enumGalgasBool test_0 = var_isNoReturn_11667.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 311)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 311)) ;
  }
  const enumGalgasBool test_1 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, constinArgument_inCurrentPage, var_targetPage_11690.mAttribute_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 315))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 315)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, constinArgument_inCurrentPage, var_targetPage_11690.mAttribute_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 321))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 321)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_instruction_F build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                               const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                               const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_F * object = (const cPtr_baseline_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_F) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 344)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_13137 ;
  GALGAS_bitSliceTable joker_13143 ; // Joker input parameter
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_13137, joker_13143, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 346)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mFAinstruction, var_intermediateRegisterDescription_13137  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 353))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 353)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_instruction_FB build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FB) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 374)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_14269 ;
  GALGAS_bitSliceTable var_bitSliceTable_14307 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_14269, var_bitSliceTable_14307, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 376)) ;
  GALGAS_uint var_bitNumber_14466 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_14307, var_bitNumber_14466, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 383)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBitOrientedOp, var_intermediateRegisterDescription_14269, var_bitNumber_14466  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 390))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 390)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_GOTO build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                  const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_GOTO * object = (const cPtr_baseline_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_GOTO) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 413)) ;
  }
  GALGAS_bool var_isNoReturn_15484 ;
  GALGAS_luint var_targetPage_15507 ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_15484, var_targetPage_15507, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 415)) ;
  const enumGalgasBool test_1 = var_isNoReturn_15484.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 416)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 417)), GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 417)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_15507.mAttribute_uint)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 420)), GALGAS_string ("for an inter-page noreturn routine call, use a JUMP instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 420)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 424))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 424)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_JUMP build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                  const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JUMP * object = (const cPtr_baseline_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JUMP) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 444)) ;
  }
  GALGAS_bool var_isNoReturn_16754 ;
  GALGAS_luint var_targetPage_16777 ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn_16754, var_targetPage_16777, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 446)) ;
  const enumGalgasBool test_1 = var_isNoReturn_16754.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 447)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 448)), GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 448)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, constinArgument_inCurrentPage, var_targetPage_16777.mAttribute_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 452))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 452)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@baseline_instruction_IF_BitTest build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                           const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                           const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                           GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                           GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                           const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                           const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_17853 ;
  GALGAS_bitSliceTable var_bitSliceTable_17891 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_17853, var_bitSliceTable_17891, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 473)) ;
  GALGAS_uint var_bitNumber_17935 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_17891, var_bitNumber_17935, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 481)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSkipIfSet, var_intermediateRegisterDescription_17853, var_bitNumber_17935  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 488))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 488)) ;
  GALGAS_bool var_unusedContinuesInSequence_18302 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_18302, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 495)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@baseline_instruction_IF_IncDec build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                          const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                          const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                          GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                          GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                          GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                          const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                          const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_19283 ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode_19283 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 527)) ;
  }else if (kBoolFalse == test_0) {
    var_baseCode_19283 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 529)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_19606 ;
  GALGAS_bitSliceTable var_bitSliceTable_19644 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_19606, var_bitSliceTable_19644, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 532)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, var_baseCode_19283, var_intermediateRegisterDescription_19606, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 540))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 540)) ;
  GALGAS_bool var_unusedContinuesInSequence_19893 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_19893, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 547)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@baseline_instruction_FOREVER build_baseline_intermediate_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                     const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                     const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                     GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                     GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                     const GALGAS_bool /* constinArgument_inLastInstructionShouldReturn */,
                                                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FOREVER * object = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 578)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 581)) ;
    }
    break ;
  }
  GALGAS_string var_label_30__21190 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 584)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 585)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__21190, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 586))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 586))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 586)) ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mAttribute_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 587)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_30__21190, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 604))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 602))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 602)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@baseline_instruction_STATIC_REPEAT build_baseline_intermediate_instructionList'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                              const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                              const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                              GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                              const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                              const GALGAS_bool /* constinArgument_inLastInstructionShouldReturn */,
                                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  GALGAS_sint_36__34_ var_lowerBound_22671 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_22671, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 625)) ;
  GALGAS_sint_36__34_ var_upperBound_22776 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_22776, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 626)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound_22671.objectCompare (var_upperBound_22776)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound_22671.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)).add_operation (var_upperBound_22776.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 629))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_upperBound_22776.substract_operation (var_lowerBound_22671, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 630)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound_22776.substract_operation (var_lowerBound_22671, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)).getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 631)) ;
    }
  }
  GALGAS_constantMap var_tempConstantMap_23156 = constinArgument_inConstantMap ;
  {
  var_tempConstantMap_23156.setter_insertKey (object->mAttribute_mConstantName, var_lowerBound_22671, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 635)) ;
  }
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mAttribute_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_23156, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 636)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 650)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("enclosed instruction list contains an endless loop")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 651)) ;
  }
  GALGAS_sint_36__34_ var_idx_23734 = var_lowerBound_22671.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 654)) ;
  if (var_upperBound_22776.substract_operation (var_lowerBound_22671, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)).isValid ()) {
    uint32_t variant_23758 = var_upperBound_22776.substract_operation (var_lowerBound_22671, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)).uintValue () ;
    bool loop_23758 = true ;
    while (loop_23758) {
      GALGAS_bool test_3 = GALGAS_bool (kIsInfOrEqual, var_idx_23734.objectCompare (var_upperBound_22776)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_23758 = test_3.isValid () ;
      if (loop_23758) {
        loop_23758 = test_3.boolValue () ;
      }
      if (loop_23758 && (0 == variant_23758)) {
        loop_23758 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_semantic_analysis.galgas", 655)) ;
      }
      if (loop_23758) {
        variant_23758 -- ;
        GALGAS_constantMap var_constantMap_23871 = constinArgument_inConstantMap ;
        {
        var_constantMap_23871.setter_insertKey (object->mAttribute_mConstantName, var_idx_23734, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)) ;
        }
        {
        routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mAttribute_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_23871, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)) ;
        }
        var_idx_23734.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 672)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@baseline_instruction_do_while build_baseline_intermediate_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                         const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                         const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                         GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                         GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                         const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                         const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_do_5F_while * object = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  GALGAS_string var_labelInstructionBegin_24966 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 691)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 691)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_24966, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 693))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 693))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 693)) ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mAttribute_mRepeatedInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 695)) ;
  }
  cEnumerator_baseline_5F_partList enumerator_25583 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_25583.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_25583.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 711)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) enumerator_25583.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mAttribute_mInstructionLocation, var_labelInstructionBegin_24966, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 712)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_nextBranchLabel_25974 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 724)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 724)) ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) enumerator_25583.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mAttribute_mInstructionLocation, var_nextBranchLabel_25974, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 725)) ;
      {
      routine_handleBaselineInstructionList (constinArgument_inCurrentPage, enumerator_25583.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 736)) ;
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_labelInstructionBegin_24966, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 752))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 750))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 750)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_25974, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 753))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 753))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 753)) ;
    }
    enumerator_25583.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@baseline_instruction_structured_if build_baseline_intermediate_instructionList'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                              const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                              const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                              GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                              const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                              const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  GALGAS_string var_label_5F_nextCondition_27661 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 773)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 773)) ;
  GALGAS_string var_label_5F_endOfIfinstruction_27753 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 774)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 774)) ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mAttribute_mInstructionLocation, var_label_5F_nextCondition_27661, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  GALGAS_bool var_thenContinuesInSequence_28379 ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mAttribute_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_thenContinuesInSequence_28379, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 788)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 803)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 803)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 803)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_27753, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 806))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 804))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 804)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_27661, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 808))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 808))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 808)) ;
  GALGAS_bool var_elseContinuesInSequence_29139 ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mAttribute_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_elseContinuesInSequence_29139, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 809)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 823)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 823)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 823)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_27753, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 824))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 824))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 824)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_28379.operator_or (var_elseContinuesInSequence_29139 COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 827)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@baseline_incDecRegisterInCondition build_intermediate_condition_instructions'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                                      const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                      const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                                      const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                      const GALGAS_string constinArgument_inTargetLabel,
                                                                                                                      GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_incDecRegisterInCondition) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_31032 ;
  GALGAS_bitSliceTable var_bitSliceTable_31070 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_31032, var_bitSliceTable_31070, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 859)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_intermediateRegisterDescription_31032, constinArgument_inTargetLabel, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero.operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 873))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 867))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 867)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_negateCondition build_intermediate_condition_instructions'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                            const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                            const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                            const GALGAS_string constinArgument_inTargetLabel,
                                                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_negateCondition * object = (const cPtr_baseline_5F_negateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_negateCondition) ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 893)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 888)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_negateCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@baseline_andCondition build_intermediate_condition_instructions'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                         const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                         const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                         const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                         const GALGAS_string constinArgument_inTargetLabel,
                                                                                                         GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_andCondition * object = (const cPtr_baseline_5F_andCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_andCondition) ;
  const enumGalgasBool test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
  if (kBoolTrue == test_0) {
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 914)) ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 925)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__33205 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 937)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 937)) ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__33205, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 938)) ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 949)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__33205, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 960))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 960))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 960)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_andCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

