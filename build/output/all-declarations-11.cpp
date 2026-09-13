#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block display'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_display (const GGS_ipic_31__38_Block inObject,
                              const GGS_string constinArgument_inNextBlockLabel,
                              GGS_string & ioArgument_ioListFileContents,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 10)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 10)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_Block temp_2 = inObject ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_display_block_list.galgas3", 11)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_Block temp_3 = inObject ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", ORG ").add_operation (temp_3.readProperty_mAddress ().getter_hexString (SOURCE_FILE ("ipic18_display_block_list.galgas3", 12)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 12)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 12)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 14)) ;
  const GGS_ipic_31__38_Block temp_4 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_501 (temp_4.readProperty_mInstructionList ()) ;
  while (enumerator_501.hasCurrentObject ()) {
    GGS_stringlist var_d_553 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 17)) ;
    UpEnumerator_stringlist enumerator_598 (var_d_553) ;
    while (enumerator_598.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_598.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 19)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 19)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 19)) ;
      enumerator_598.gotoNextObject () ;
    }
    enumerator_501.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 23)) ;
  const GGS_ipic_31__38_Block temp_5 = inObject ;
  ioArgument_ioListFileContents.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_5.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 24)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 25)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const GGS_ipic_31__38_Block inObject,
                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                 const GGS_string constinArgument_inNextBlockLabel,
                                                 const GGS_uint constinArgument_inBlockStartAddress,
                                                 GGS_uint & ioArgument_ioConversionCount,
                                                 GGS_string & ioArgument_ioListFileContents,
                                                 GGS_ipic_31__38_Block & outArgument_outModifiedBlock,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifiedBlock.drop () ; // Release 'out' argument
  GGS_ipic_31__38_SequentialInstructionList var_modifiedInstructionList_369 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_address_442 = constinArgument_inBlockStartAddress ;
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_494 (temp_0.readProperty_mInstructionList ()) ;
  while (enumerator_494.hasCurrentObject ()) {
    GGS_ipic_31__38_SequentialInstruction var_modifiedInstruction_742 ;
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_494.current_mInstruction (HERE).ptr (), var_address_442, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedInstruction_742, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 17)) ;
    var_modifiedInstructionList_369.addAssignOperation (var_modifiedInstruction_742, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 25)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 25)) ;
    var_address_442 = var_address_442.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_494.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 26)) ;
    enumerator_494.gotoNextObject () ;
  }
  GGS_ipic_31__38_AbstractBlockTerminator var_modifiedTerminator_1139 ;
  const GGS_ipic_31__38_Block temp_2 = inObject ;
  const GGS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_442, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedTerminator_1139, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 29)) ;
  const GGS_ipic_31__38_Block temp_4 = inObject ;
  const GGS_ipic_31__38_Block temp_5 = inObject ;
  outArgument_outModifiedBlock = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (temp_4.readProperty_mAddress (), temp_5.readProperty_mLabel (), var_modifiedInstructionList_369, var_modifiedTerminator_1139, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 44)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@ipic18Block blockSize'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_blockSize (const GGS_ipic_31__38_Block & inObject,
                                    const GGS_string & constinArgument_inNextBlockLabel,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_outResult ; // Returned variable
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  result_outResult = callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_0.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 92)) ;
  const GGS_ipic_31__38_Block temp_1 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_2783 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_2783.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_2783.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 94)) ;
    enumerator_2783.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const GGS_ipic_31__38_Block inObject,
                                             const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                             const GGS_string constinArgument_inNextBlockLabel,
                                             const GGS_uint constinArgument_inBlockStartAddress,
                                             GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_address_6281 = constinArgument_inBlockStartAddress ;
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_6333 (temp_0.readProperty_mInstructionList ()) ;
  while (enumerator_6333.hasCurrentObject ()) {
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_6333.current_mInstruction (HERE).ptr (), var_address_6281, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 201)) ;
    var_address_6281 = var_address_6281.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6333.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 207)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 207)) ;
    enumerator_6333.gotoNextObject () ;
  }
  const GGS_ipic_31__38_Block temp_2 = inObject ;
  const GGS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_6281, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas3", 210)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block generateCodeForBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCodeForBlock (const GGS_ipic_31__38_Block inObject,
                                           const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                           const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataMap,
                                           const GGS_uint constinArgument_inBlockAddress,
                                           const GGS_string constinArgument_inNextBlockLabel,
                                           GGS_string & ioArgument_ioListFileContents,
                                           GGS_string & ioArgument_ioAssemblyString,
                                           GGS_generatedCodeMap & ioArgument_ioGeneratedCodeMap,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Addr.  Code       Duration    Assembly                                           Intermediate Representation\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 98)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 100)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      GGS_codeList temp_2 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 103)) ;
      const GGS_ipic_31__38_Block temp_3 = inObject ;
      temp_2.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (temp_3.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 103)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 103)) ;
      GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 104)) ;
      const GGS_ipic_31__38_Block temp_5 = inObject ;
      temp_4.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("LABEL ").add_operation (temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 104)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 104)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (constinArgument_inBlockAddress, temp_2, temp_4, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 105)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 101)) ;
      }
      const GGS_ipic_31__38_Block temp_6 = inObject ;
      ioArgument_ioAssemblyString.plusAssignOperation(temp_6.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 109)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 109)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_codeList var_cd_3504 = GGS_codeList::init (inCompiler COMMA_HERE) ;
    var_cd_3504.addAssignOperation (GGS_string ("ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 112)), GGS_uintlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 112)) ;
    const GGS_ipic_31__38_Block temp_7 = inObject ;
    var_cd_3504.addAssignOperation (temp_7.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 113)), GGS_uintlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 113)) ;
    {
    GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 117)) ;
    const GGS_ipic_31__38_Block temp_9 = inObject ;
    temp_8.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("LABEL ").add_operation (temp_9.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 117)).add_operation (GGS_string (", ORG "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 117)).add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 117)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 117)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (constinArgument_inBlockAddress, var_cd_3504, temp_8, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas3", 118)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 114)) ;
    }
    ioArgument_ioAssemblyString.plusAssignOperation(GGS_string ("    ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas3", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 122)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 122)) ;
    const GGS_ipic_31__38_Block temp_10 = inObject ;
    ioArgument_ioAssemblyString.plusAssignOperation(temp_10.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 123)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 123)) ;
  }
  GGS_uint var_address_3962 = constinArgument_inBlockAddress ;
  const GGS_ipic_31__38_Block temp_11 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_4012 (temp_11.readProperty_mInstructionList ()) ;
  while (enumerator_4012.hasCurrentObject ()) {
    GGS_codeList var_code_4151 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_4012.current_mInstruction (HERE).ptr (), var_address_3962, constinArgument_inSymbolTable, constinArgument_inDataMap, var_code_4151, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 128)) ;
    {
    ioArgument_ioGeneratedCodeMap.setter_insertKey (var_address_3962.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 134)).getter_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas3", 134)), var_code_4151, enumerator_4012.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 134)) ;
    }
    {
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_address_3962, var_code_4151, callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4012.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 138)), enumerator_4012.current_mMin (HERE), enumerator_4012.current_mMax (HERE), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 135)) ;
    }
    UpEnumerator_codeList enumerator_4416 (var_code_4151) ;
    while (enumerator_4416.hasCurrentObject ()) {
      UpEnumerator_uintlist enumerator_4451 (enumerator_4416.current_mBinaryCode (HERE)) ;
      while (enumerator_4451.hasCurrentObject ()) {
        {
        routine_emitCode_3F_ (enumerator_4451.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 145)) ;
        }
        enumerator_4451.gotoNextObject () ;
      }
      ioArgument_ioAssemblyString.plusAssignOperation(enumerator_4416.current_mAssemblyCode (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 147)) ;
      enumerator_4416.gotoNextObject () ;
    }
    var_address_3962 = var_address_3962.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4012.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 149)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 149)) ;
    GGS_uint var_generatedCodeSize_4699 = GGS_uint (uint32_t (0U)) ;
    UpEnumerator_codeList enumerator_4732 (var_code_4151) ;
    while (enumerator_4732.hasCurrentObject ()) {
      var_generatedCodeSize_4699 = var_generatedCodeSize_4699.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_4732.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 153)) ;
      enumerator_4732.gotoNextObject () ;
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::notEqual, var_generatedCodeSize_4699.objectCompare (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4012.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 155)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GGS_string var_s_4904 = GGS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_4699.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 156)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 156)).add_operation (GGS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 157)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4012.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 157)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 157)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 157)) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas3", 158)), var_s_4904, fixItArray13  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 158)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_s_4904.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 159)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 159)) ;
      }
    }
    enumerator_4012.gotoNextObject () ;
  }
  GGS_codeList var_code_5271 ;
  const GGS_ipic_31__38_Block temp_14 = inObject ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_14.readProperty_mTerminator ().ptr (), var_address_3962, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_code_5271, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 163)) ;
  {
  GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 172)) ;
  const GGS_ipic_31__38_Block temp_16 = inObject ;
  temp_15.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_16.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 172)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 172)) ;
  const GGS_ipic_31__38_Block temp_17 = inObject ;
  const GGS_ipic_31__38_Block temp_18 = inObject ;
  routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_address_3962, var_code_5271, temp_15, temp_17.readProperty_mTerminatorMin (), temp_18.readProperty_mTerminatorMax (), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 169)) ;
  }
  UpEnumerator_codeList enumerator_5494 (var_code_5271) ;
  while (enumerator_5494.hasCurrentObject ()) {
    UpEnumerator_uintlist enumerator_5527 (enumerator_5494.current_mBinaryCode (HERE)) ;
    while (enumerator_5527.hasCurrentObject ()) {
      {
      routine_emitCode_3F_ (enumerator_5527.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 179)) ;
      }
      enumerator_5527.gotoNextObject () ;
    }
    ioArgument_ioAssemblyString.plusAssignOperation(enumerator_5494.current_mAssemblyCode (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 181)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 181)) ;
    enumerator_5494.gotoNextObject () ;
  }
  GGS_bigint var_generatedCodeSize_5707 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 184)) ;
  UpEnumerator_codeList enumerator_5740 (var_code_5271) ;
  while (enumerator_5740.hasCurrentObject ()) {
    var_generatedCodeSize_5707 = var_generatedCodeSize_5707.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_5740.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas3", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 186)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 186)) ;
    enumerator_5740.gotoNextObject () ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    const GGS_ipic_31__38_Block temp_20 = inObject ;
    test_19 = GGS_bool (ComparisonKind::notEqual, var_generatedCodeSize_5707.objectCompare (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_20.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 188)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas3", 188)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_ipic_31__38_Block temp_21 = inObject ;
      GGS_string var_s_5935 = GGS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_5707.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 189)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 189)).add_operation (GGS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 190)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_21.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 190)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas3", 190)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 190)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 190)) ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas3", 191)), var_s_5935, fixItArray22  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 191)) ;
      ioArgument_ioListFileContents.plusAssignOperation(var_s_5935.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 192)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 192)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const GGS_ipic_31__38_Block inObject,
                                            const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                            const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                            GGS_stringset & ioArgument_ioReferencedBlockSet,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  extensionMethod_enterInstructionReferencedLabels (temp_0.readProperty_mInstructionList (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 955)) ;
  const GGS_ipic_31__38_Block temp_1 = inObject ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_1.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 960)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const GGS_ipic_31__38_Block inObject,
                               const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                               const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                               const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                               GGS_bool & ioArgument_ioOptimizationDone,
                               GGS_string & ioArgument_ioListFileContents,
                               GGS_ipic_31__38_Block & outArgument_outOptimizedBlock,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizedBlock.drop () ; // Release 'out' argument
  GGS_bool var_optimized_37112 ;
  GGS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_37189 ;
  {
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  const GGS_ipic_31__38_Block temp_1 = inObject ;
  routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_0.readProperty_mInstructionList (), temp_1.readProperty_mLabel (), var_optimized_37112, ioArgument_ioListFileContents, var_optimizedInstructionList_37189, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 977)) ;
  }
  const GGS_ipic_31__38_Block temp_2 = inObject ;
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedTerminator_37297 = temp_2.readProperty_mTerminator () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_Block temp_4 = inObject ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_optimizedInstructionList_37189.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 989)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (temp_4.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 989)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_ipic_31__38_SequentialInstruction var_lastInstruction_37503 ;
      GGS_uint joker_37519_2 ; // Joker input parameter
      GGS_uint joker_37519_1 ; // Joker input parameter
      var_optimizedInstructionList_37189.method_last (var_lastInstruction_37503, joker_37519_2, joker_37519_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 990)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation var_op_37535 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *> (var_lastInstruction_37503.ptr ())) ;
        if (nullptr == var_op_37535.ptr ()) {
          test_5 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_5) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = constinArgument_inOptimizeFlagStruct.readProperty_mMOVLWfollowedByRETreplacedByRETLW ().operator_and (GGS_bool (ComparisonKind::equal, var_op_37535.readProperty_mLiteralInstruction ().objectCompare (GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas3", 993)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 993)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              GGS_ipic_31__38_SequentialInstruction joker_37862_3 ; // Joker input parameter
              GGS_uint joker_37862_2 ; // Joker input parameter
              GGS_uint joker_37862_1 ; // Joker input parameter
              var_optimizedInstructionList_37189.setter_popLast (joker_37862_3, joker_37862_2, joker_37862_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 994)) ;
              }
              var_optimizedTerminator_37297 = GGS_ipic_31__38_RetlwTerminator::init_21__21_ (var_op_37535.readProperty_mInstructionLocation (), var_op_37535.readProperty_mLiteralValue (), inCompiler COMMA_HERE) ;
              var_optimized_37112 = GGS_bool (true) ;
              const GGS_ipic_31__38_Block temp_7 = inObject ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [M] ").add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 997)).add_operation (GGS_string (": MOVLW k ; RETURN --> RETLW k\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 997)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 997)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          GGS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_38156 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (var_lastInstruction_37503.ptr ())) ;
          if (nullptr == var_jsr_38156.ptr ()) {
            test_8 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_8) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRfollowedByRETreplacedByJUMP ().boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                {
                GGS_ipic_31__38_SequentialInstruction joker_38367_3 ; // Joker input parameter
                GGS_uint joker_38367_2 ; // Joker input parameter
                GGS_uint joker_38367_1 ; // Joker input parameter
                var_optimizedInstructionList_37189.setter_popLast (joker_38367_3, joker_38367_2, joker_38367_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1003)) ;
                }
                var_optimizedTerminator_37297 = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_jsr_38156.readProperty_mInstructionLocation (), var_jsr_38156.readProperty_mTargetLabel (), var_jsr_38156.readProperty_mKind (), inCompiler COMMA_HERE) ;
                var_optimized_37112 = GGS_bool (true) ;
                const GGS_ipic_31__38_Block temp_10 = inObject ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [J] ").add_operation (temp_10.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1006)).add_operation (GGS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1006)).add_operation (var_jsr_38156.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1006)).add_operation (GGS_string (" ; RETURN --> JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1006)).add_operation (var_jsr_38156.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1006)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1006)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1006)) ;
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_optimized_37112.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1025)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_ipic_31__38_Block temp_12 = inObject ;
      const GGS_ipic_31__38_Block temp_13 = inObject ;
      callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_12.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_13.readProperty_mLabel ().readProperty_string (), var_optimized_37112, ioArgument_ioListFileContents, var_optimizedTerminator_37297, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1026)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = var_optimized_37112.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      const GGS_ipic_31__38_Block temp_15 = inObject ;
      const GGS_ipic_31__38_Block temp_16 = inObject ;
      outArgument_outOptimizedBlock = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (temp_15.readProperty_mAddress (), temp_16.readProperty_mLabel (), var_optimizedInstructionList_37189, var_optimizedTerminator_37297, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1044)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    const GGS_ipic_31__38_Block temp_17 = inObject ;
    outArgument_outOptimizedBlock = temp_17 ;
  }
}


//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (void) :
mProperty_lkey (),
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (const GGS_blockMapForStackComputation_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mBlock (inSource.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element & GGS_blockMapForStackComputation_2E_element::operator = (const GGS_blockMapForStackComputation_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mBlock = inSource.mProperty_mBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element GGS_blockMapForStackComputation_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                     const GGS_ipic_31__38_Block & in_mBlock,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_ipic_31__38_Block & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mBlock (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockMapForStackComputation.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockMapForStackComputation.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ("blockMapForStackComputation.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockMapForStackComputation_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockMapForStackComputation_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element GGS_blockMapForStackComputation_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element result ;
  const GGS_blockMapForStackComputation_2E_element * p = (const GGS_blockMapForStackComputation_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockMapForStackComputation_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockMapForStackComputation_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_::GGS_blockMapForStackComputation_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_::GGS_blockMapForStackComputation_2E_element_3F_ (const GGS_blockMapForStackComputation_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation_2E_element_3F_::init_nil (void) {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockMapForStackComputation_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockMapForStackComputation.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ("blockMapForStackComputation.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockMapForStackComputation_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockMapForStackComputation_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  const GGS_blockMapForStackComputation_2E_element_3F_ * p = (const GGS_blockMapForStackComputation_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockMapForStackComputation_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (void) :
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_BlockList_2E_element & inSource) :
mProperty_mBlock (inSource.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element & GGS_ipic_31__38_BlockList_2E_element::operator = (const GGS_ipic_31__38_BlockList_2E_element & inSource) {
  mProperty_mBlock = inSource.mProperty_mBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element GGS_ipic_31__38_BlockList_2E_element::init_21_ (const GGS_ipic_31__38_Block & in_mBlock,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_Block & inOperand0) :
mProperty_mBlock (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38_BlockList_2E_element::isValid (void) const {
  return mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::drop (void) {
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18BlockList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18BlockList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ("ipic18BlockList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_BlockList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_BlockList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_BlockList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element GGS_ipic_31__38_BlockList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList_2E_element result ;
  const GGS_ipic_31__38_BlockList_2E_element * p = (const GGS_ipic_31__38_BlockList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_BlockList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//Overriding extension method '@midrange_intermediate_pseudo_ORG setCurrentAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentAddress,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioCurrentAddress = temp_0.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18AbstractConditionTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                       GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                       GGS_uint & outArgument_outStackNeeds,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueStackNeeds_1604 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_trueStackNeeds_1604, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 41)) ;
  GGS_uint var_falseStackNeeds_1780 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_falseStackNeeds_1780, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 46)) ;
  GGS_uint temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, var_trueStackNeeds_1604.objectCompare (var_falseStackNeeds_1780)).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = var_trueStackNeeds_1604 ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = var_falseStackNeeds_1780 ;
  }
  outArgument_outStackNeeds = temp_2 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                 GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                 GGS_uint & outArgument_outStackNeeds,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_2173 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_2173.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2173.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 62)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 62)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (enumerator_2173.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 63)) ;
      }
    }
    enumerator_2173.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                  GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                  GGS_uint & outArgument_outStackNeeds,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_2619 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_2619.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2619.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 77)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 77)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (enumerator_2619.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 78)) ;
      }
    }
    enumerator_2619.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                          GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                          GGS_uint & outArgument_outStackNeeds,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 91)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 91)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 92)) ;
    }
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                     GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                     GGS_uint & outArgument_outStackNeeds,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 104)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 104)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 105)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 107)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 108)) ;
    }
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                   GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                   GGS_uint & outArgument_outStackNeeds,
                                                                                                   Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GGS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                           GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                           GGS_uint & outArgument_outStackNeeds,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GGS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR buildCalledRoutineSetForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioRoutineCalledSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 168)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildCalledRoutineSetForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_5788 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_5788.hasCurrentObject ()) {
    callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_5788.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 176)) ;
    enumerator_5788.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction buildCalledRoutineSetForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 184)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18StackComputations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_StackComputations_26__3F_ (GGS_string & ioArgument_ioListFileContents,
                                                    const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 197)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 197)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 197)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("STACK COMPUTATIONS").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 198)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 198)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 198)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 198)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 199)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 199)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 199)) ;
  GGS_stringset var_startLabelsToExplore_6779 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_blockMapForStackComputation var_blockMapForStackComputation_6821 = GGS_blockMapForStackComputation::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_6889 (constinArgument_inBlockList) ;
  while (enumerator_6889.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_6889.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_stack_computations.galgas3", 204)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_startLabelsToExplore_6779.plusPlusAssignOperation (enumerator_6889.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 205)) ;
      }
    }
    {
    var_blockMapForStackComputation_6821.setter_insertKey (enumerator_6889.current_mBlock (HERE).readProperty_mLabel (), enumerator_6889.current_mBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 207)) ;
    }
    enumerator_6889.gotoNextObject () ;
  }
  GGS_routineCallMap var_routineCallMap_7182 = GGS_routineCallMap::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 211)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 211)).isValid ()) {
    uint32_t variant_7205 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 211)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 211)).uintValue () ;
    bool loop_7205 = true ;
    while (loop_7205) {
      loop_7205 = GGS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 212)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_7205) {
        loop_7205 = GGS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 212)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_7205 && (0 == variant_7205)) {
        loop_7205 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas3", 211)) ;
      }
      if (loop_7205) {
        variant_7205 -= 1 ;
        GGS_string var_startLabel_7286 = var_startLabelsToExplore_6779.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 214)) ;
        {
        var_startLabelsToExplore_6779.setter_removeKey (var_startLabel_7286 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 215)) ;
        }
        GGS_stringset var_blockToExploreSet_7423 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        var_blockToExploreSet_7423.plusPlusAssignOperation (var_startLabel_7286  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 218)) ;
        GGS_stringset var_exploredBlockSet_7512 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_stringset var_calledRoutineSet_7554 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_uint var_terminatorStackNeeds_7591 = GGS_uint (uint32_t (0U)) ;
        if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 222)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 222)).isValid ()) {
          uint32_t variant_7620 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 222)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 222)).uintValue () ;
          bool loop_7620 = true ;
          while (loop_7620) {
            loop_7620 = GGS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7423.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 223)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
            if (loop_7620) {
              loop_7620 = GGS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7423.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 223)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_7620 && (0 == variant_7620)) {
              loop_7620 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas3", 222)) ;
            }
            if (loop_7620) {
              variant_7620 -= 1 ;
              GGS_string var_b_7712 = var_blockToExploreSet_7423.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 225)) ;
              {
              var_blockToExploreSet_7423.setter_removeKey (var_b_7712 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 226)) ;
              }
              var_exploredBlockSet_7512.plusPlusAssignOperation (var_b_7712  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 227)) ;
              GGS_ipic_31__38_Block var_aBlock_7888 ;
              var_blockMapForStackComputation_6821.method_searchKey (var_b_7712.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 228)), var_aBlock_7888, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 228)) ;
              GGS_uint var_tsn_8034 ;
              callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_AbstractBlockTerminator *) var_aBlock_7888.readProperty_mTerminator ().ptr (), var_blockToExploreSet_7423, var_exploredBlockSet_7512, var_tsn_8034, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 229)) ;
              GalgasBool test_1 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_1) {
                test_1 = GGS_bool (ComparisonKind::greaterThan, var_tsn_8034.objectCompare (var_terminatorStackNeeds_7591)).boolEnum () ;
                if (GalgasBool::boolTrue == test_1) {
                  var_terminatorStackNeeds_7591 = var_tsn_8034 ;
                }
              }
              UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_8158 (var_aBlock_7888.readProperty_mInstructionList ()) ;
              while (enumerator_8158.hasCurrentObject ()) {
                callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_8158.current_mInstruction (HERE).ptr (), var_calledRoutineSet_7554, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 238)) ;
                enumerator_8158.gotoNextObject () ;
              }
            }
          }
        }
        {
        var_routineCallMap_7182.setter_insertKey (var_startLabel_7286.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 241)), var_calledRoutineSet_7554, var_terminatorStackNeeds_7591, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 241)) ;
        }
        UpEnumerator_stringset enumerator_8395 (var_calledRoutineSet_7554) ;
        while (enumerator_8395.hasCurrentObject ()) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_routineCallMap_7182.getter_hasKey (enumerator_8395.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 243)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 243)).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              var_startLabelsToExplore_6779.plusPlusAssignOperation (enumerator_8395.current_key (HERE)  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 244)) ;
            }
          }
          enumerator_8395.gotoNextObject () ;
        }
      }
    }
  }
  GGS_routineStackRequirementMap var_routineStackRequirementMap_8640 = GGS_routineStackRequirementMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_progress_8679 = GGS_bool (true) ;
  if (var_routineCallMap_7182.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 252)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 252)).isValid ()) {
    uint32_t variant_8697 = var_routineCallMap_7182.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 252)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 252)).uintValue () ;
    bool loop_8697 = true ;
    while (loop_8697) {
      loop_8697 = var_progress_8679.isValid () ;
      if (loop_8697) {
        loop_8697 = var_progress_8679.boolValue () ;
      }
      if (loop_8697 && (0 == variant_8697)) {
        loop_8697 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas3", 252)) ;
      }
      if (loop_8697) {
        variant_8697 -= 1 ;
        var_progress_8679 = GGS_bool (false) ;
        GGS_routineCallMap var_tempRoutineCallMap_8796 = var_routineCallMap_7182 ;
        var_routineCallMap_7182 = GGS_routineCallMap::init (inCompiler COMMA_HERE) ;
        UpEnumerator_routineCallMap enumerator_8889 (var_tempRoutineCallMap_8796) ;
        while (enumerator_8889.hasCurrentObject ()) {
          GGS_uint var_levels_8954 = enumerator_8889.current_mTerminatorStackNeeds (HERE) ;
          GGS_bool var_solved_9001 = GGS_bool (true) ;
          UpEnumerator_stringset enumerator_9026 (enumerator_8889.current_mCalledRoutineSet (HERE)) ;
          bool bool_3 = var_solved_9001.isValidAndTrue () ;
          if (enumerator_9026.hasCurrentObject () && bool_3) {
            while (enumerator_9026.hasCurrentObject () && bool_3) {
              var_solved_9001 = var_routineStackRequirementMap_8640.getter_hasKey (enumerator_9026.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 262)) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_solved_9001.boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GGS_uint var_rLevel_9221 ;
                  var_routineStackRequirementMap_8640.method_searchKey (enumerator_9026.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 264)), var_rLevel_9221, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 264)) ;
                  GalgasBool test_5 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_5) {
                    test_5 = GGS_bool (ComparisonKind::lowerOrEqual, var_levels_8954.objectCompare (var_rLevel_9221)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_5) {
                      var_levels_8954 = var_rLevel_9221.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 266)) ;
                    }
                  }
                }
              }
              enumerator_9026.gotoNextObject () ;
              if (enumerator_9026.hasCurrentObject ()) {
                bool_3 = var_solved_9001.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_solved_9001.boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              var_routineStackRequirementMap_8640.setter_insertKey (enumerator_8889.current_lkey (HERE), var_levels_8954, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 271)) ;
              }
              var_progress_8679 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            {
            var_routineCallMap_7182.setter_insertKey (enumerator_8889.current_lkey (HERE), enumerator_8889.current_mCalledRoutineSet (HERE), enumerator_8889.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 274)) ;
            }
          }
          enumerator_8889.gotoNextObject () ;
        }
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Levels Routine\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 278)) ;
  UpEnumerator_routineStackRequirementMap enumerator_9615 (var_routineStackRequirementMap_8640) ;
  while (enumerator_9615.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_9615.current_mLevels (HERE).getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas3", 280)).getter_leftPadding (GGS_uint (uint32_t (6U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 280)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 280)).add_operation (enumerator_9615.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 280)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 280)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 280)) ;
    enumerator_9615.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 282)) ;
  GGS_bool var_noRecursiveRoutine_9813 = GGS_bool (ComparisonKind::equal, var_routineCallMap_7182.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas3", 284)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_noRecursiveRoutine_9813.operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 285)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (gOption_piccoloOptions_doNotWarnRecursive.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas3", 286)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 287)), GGS_string ("There are recursive routines"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 287)) ;
        }
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("The following routines are recursive:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 289)) ;
      UpEnumerator_routineCallMap enumerator_10115 (var_routineCallMap_7182) ;
      while (enumerator_10115.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  - ").add_operation (enumerator_10115.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 291)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 291)) ;
        enumerator_10115.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 293)) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_noRecursiveRoutine_9813.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GGS_uint var_mainLevels_10365 ;
      var_routineStackRequirementMap_8640.method_searchKey (GGS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 297)), var_mainLevels_10365, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 297)) ;
      GGS_uint var_totalLevels_10391 = var_mainLevels_10365 ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = var_routineStackRequirementMap_8640.getter_hasKey (GGS_string (".HIGH_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 299)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_uint var_highIntLevels_10565 ;
          var_routineStackRequirementMap_8640.method_searchKey (GGS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 300)), var_highIntLevels_10565, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 300)) ;
          var_totalLevels_10391 = var_totalLevels_10391.add_operation (var_highIntLevels_10565, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 301)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 301)) ;
        }
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = var_routineStackRequirementMap_8640.getter_hasKey (GGS_string (".LOW_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 303)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GGS_uint var_lowIntLevels_10787 ;
          var_routineStackRequirementMap_8640.method_searchKey (GGS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 304)), var_lowIntLevels_10787, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 304)) ;
          var_totalLevels_10391 = var_totalLevels_10391.add_operation (var_lowIntLevels_10787, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 305)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 305)) ;
        }
      }
      {
      routine_print_3F_ (GGS_string ("Max stack depth: ").add_operation (var_totalLevels_10391.getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 307)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 307)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 307)) ;
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::greaterThan, var_totalLevels_10391.objectCompare (GGS_uint (uint32_t (31U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas3", 309)), GGS_string ("Max stack depth is greater than 31"), fixItArray14  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas3", 309)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                                         GGS_uint & outArgument_outMin,
                                                                         GGS_uint & outArgument_outMax,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                        const GGS_string /* constinArgument_inNextLabel */,
                                                                        GGS_uint & outArgument_outMin,
                                                                        GGS_uint & outArgument_outMax,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                                         GGS_uint & outArgument_outMin,
                                                                         GGS_uint & outArgument_outMax,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                       const GGS_string constinArgument_inNextLabel,
                                                                       GGS_uint & outArgument_outMin,
                                                                       GGS_uint & outArgument_outMax,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 63)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_min_2108 ;
      GGS_uint var_max_2123 ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mLabel (), var_min_2108, var_max_2123, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 64)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outMin = var_min_2108 ;
          outArgument_outMax = var_max_2123 ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        outArgument_outMin = GGS_uint (uint32_t (2U)).add_operation (var_min_2108, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 69)) ;
        outArgument_outMax = GGS_uint (uint32_t (2U)).add_operation (var_max_2123, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 70)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 73)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                              const GGS_string constinArgument_inNextLabel,
                                                                              GGS_uint & outArgument_outMin,
                                                                              GGS_uint & outArgument_outMax,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_2737 ;
  GGS_uint var_trueMax_2750 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_2737, var_trueMax_2750, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 86)) ;
  GGS_uint var_falseMin_2850 ;
  GGS_uint var_falseMax_2864 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, GGS_string::makeEmptyString (), var_falseMin_2850, var_falseMax_2864, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 87)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_2737.objectCompare (var_trueMax_2750)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_2850.objectCompare (var_falseMax_2864)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 89)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_3078 = var_trueMin_2737.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 90)) ;
          GGS_uint var_trueBranchMaxDuration_3124 = var_trueMax_2750.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 91)) ;
          GGS_uint var_falseBranchMinDuration_3170 = var_falseMin_2850.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 92)) ;
          GGS_uint var_falseBranchMaxDuration_3218 = var_falseMax_2864.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 93)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_3170.objectCompare (var_trueBranchMinDuration_3078)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_3170 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_3078 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_3218.objectCompare (var_trueBranchMaxDuration_3124)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_3218 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_3124 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS_uint var_trueBranchMinDuration_3523 = var_trueMin_2737.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 97)) ;
        GGS_uint var_trueBranchMaxDuration_3569 = var_trueMax_2750.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 98)) ;
        GGS_uint var_falseBranchMinDuration_3615 = var_falseMin_2850.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 99)) ;
        GGS_uint var_falseBranchMaxDuration_3663 = var_falseMax_2864.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 100)) ;
        GGS_uint temp_10 ;
        const GalgasBool test_11 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_3615.objectCompare (var_trueBranchMinDuration_3523)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          temp_10 = var_falseBranchMinDuration_3615 ;
        }else if (GalgasBool::boolFalse == test_11) {
          temp_10 = var_trueBranchMinDuration_3523 ;
        }
        outArgument_outMin = temp_10 ;
        GGS_uint temp_12 ;
        const GalgasBool test_13 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_3663.objectCompare (var_trueBranchMaxDuration_3569)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          temp_12 = var_falseBranchMaxDuration_3663 ;
        }else if (GalgasBool::boolFalse == test_13) {
          temp_12 = var_trueBranchMaxDuration_3569 ;
        }
        outArgument_outMax = temp_12 ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 105)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                    const GGS_string constinArgument_inNextLabel,
                                                                                    GGS_uint & outArgument_outMin,
                                                                                    GGS_uint & outArgument_outMax,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_4428 ;
  GGS_uint var_trueMax_4441 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_4428, var_trueMax_4441, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 118)) ;
  GGS_uint var_falseMin_4550 ;
  GGS_uint var_falseMax_4564 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_4550, var_falseMax_4564, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 119)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_4428.objectCompare (var_trueMax_4441)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_4550.objectCompare (var_falseMax_4564)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 121)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_4778 = var_trueMin_4428.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 122)) ;
          GGS_uint var_trueBranchMaxDuration_4824 = var_trueMax_4441.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 123)) ;
          GGS_uint var_falseBranchMinDuration_4870 = var_falseMin_4550.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 124)) ;
          GGS_uint var_falseBranchMaxDuration_4918 = var_falseMax_4564.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 125)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_4870.objectCompare (var_trueBranchMinDuration_4778)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_4870 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_4778 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_4918.objectCompare (var_trueBranchMaxDuration_4824)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_4918 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_4824 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS_uint var_trueBranchMinDuration_5223 = var_trueMin_4428.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 129)) ;
        GGS_uint var_trueBranchMaxDuration_5269 = var_trueMax_4441.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 130)) ;
        GGS_uint var_falseBranchMinDuration_5315 = var_falseMin_4550.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 131)) ;
        GGS_uint var_falseBranchMaxDuration_5363 = var_falseMax_4564.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 132)) ;
        GGS_uint temp_10 ;
        const GalgasBool test_11 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_5315.objectCompare (var_trueBranchMinDuration_5223)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          temp_10 = var_falseBranchMinDuration_5315 ;
        }else if (GalgasBool::boolFalse == test_11) {
          temp_10 = var_trueBranchMinDuration_5223 ;
        }
        outArgument_outMin = temp_10 ;
        GGS_uint temp_12 ;
        const GalgasBool test_13 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_5363.objectCompare (var_trueBranchMaxDuration_5269)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          temp_12 = var_falseBranchMaxDuration_5363 ;
        }else if (GalgasBool::boolFalse == test_13) {
          temp_12 = var_trueBranchMaxDuration_5269 ;
        }
        outArgument_outMax = temp_12 ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 137)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                         const GGS_string constinArgument_inNextLabel,
                                                                         GGS_uint & outArgument_outMin,
                                                                         GGS_uint & outArgument_outMax,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_6117 ;
  GGS_uint var_trueMax_6130 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_6117, var_trueMax_6130, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 150)) ;
  GGS_uint var_falseMin_6239 ;
  GGS_uint var_falseMax_6253 ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_6239, var_falseMax_6253, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 151)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_6117.objectCompare (var_trueMax_6130)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_6239.objectCompare (var_falseMax_6253)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 153)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_6467 = var_trueMin_6117.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 154)) ;
          GGS_uint var_trueBranchMaxDuration_6513 = var_trueMax_6130.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 155)) ;
          GGS_uint var_falseBranchMinDuration_6559 = var_falseMin_6239.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 156)) ;
          GGS_uint var_falseBranchMaxDuration_6607 = var_falseMax_6253.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 157)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_6559.objectCompare (var_trueBranchMinDuration_6467)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_6559 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_6467 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_6607.objectCompare (var_trueBranchMaxDuration_6513)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_6607 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_6513 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_pic_31__38_BitTestTerminator temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_11.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_uint var_falseBranchMinDuration_7035 = var_falseMin_6239.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 161)) ;
            GGS_uint var_falseBranchMaxDuration_7083 = var_falseMax_6253.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 162)) ;
            GGS_uint var_trueBranchMinDuration_7131 = var_trueMin_6117.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 163)) ;
            GGS_uint var_trueBranchMaxDuration_7177 = var_trueMax_6130.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 164)) ;
            GGS_uint temp_12 ;
            const GalgasBool test_13 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_7035.objectCompare (var_trueBranchMinDuration_7131)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              temp_12 = var_falseBranchMinDuration_7035 ;
            }else if (GalgasBool::boolFalse == test_13) {
              temp_12 = var_trueBranchMinDuration_7131 ;
            }
            outArgument_outMin = temp_12 ;
            GGS_uint temp_14 ;
            const GalgasBool test_15 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_7083.objectCompare (var_trueBranchMaxDuration_7177)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              temp_14 = var_falseBranchMaxDuration_7083 ;
            }else if (GalgasBool::boolFalse == test_15) {
              temp_14 = var_trueBranchMaxDuration_7177 ;
            }
            outArgument_outMax = temp_14 ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_uint var_trueBranchMinDuration_7480 = var_trueMin_6117.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 168)) ;
          GGS_uint var_trueBranchMaxDuration_7526 = var_trueMax_6130.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 169)) ;
          GGS_uint var_falseBranchMinDuration_7572 = var_falseMin_6239.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 170)) ;
          GGS_uint var_falseBranchMaxDuration_7620 = var_falseMax_6253.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 171)) ;
          GGS_uint temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_7480.objectCompare (var_falseBranchMinDuration_7572)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_trueBranchMinDuration_7480 ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = var_falseBranchMinDuration_7572 ;
          }
          outArgument_outMin = temp_16 ;
          GGS_uint temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_7526.objectCompare (var_falseBranchMaxDuration_7620)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = var_trueBranchMaxDuration_7526 ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = var_falseBranchMaxDuration_7620 ;
          }
          outArgument_outMax = temp_18 ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 176)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                  const GGS_string constinArgument_inNextLabel,
                                                                                  GGS_uint & outArgument_outMin,
                                                                                  GGS_uint & outArgument_outMax,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    GGS_bool test_2 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 189)) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      test_2 = constinArgument_inExploredBlockMap.getter_hasKey (temp_3.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 189)) ;
    }
    test_0 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_trueMin_8488 ;
      GGS_uint var_trueMax_8501 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_4.readProperty_mTargetLabelWhenTrue (), var_trueMin_8488, var_trueMax_8501, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 190)) ;
      GGS_uint var_falseMin_8577 ;
      GGS_uint var_falseMax_8591 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_5.readProperty_mTargetLabelWhenFalse (), var_falseMin_8577, var_falseMax_8591, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 191)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
        test_6 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_uint var_trueBranchMinDuration_8702 = var_trueMin_8488.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 193)) ;
          GGS_uint var_trueBranchMaxDuration_8748 = var_trueMax_8501.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 194)) ;
          GGS_uint var_falseBranchMinDuration_8794 = var_falseMin_8577.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 195)) ;
          GGS_uint var_falseBranchMaxDuration_8842 = var_falseMax_8591.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 196)) ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_8702.objectCompare (var_falseBranchMinDuration_8794)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_trueBranchMinDuration_8702 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_falseBranchMinDuration_8794 ;
          }
          outArgument_outMin = temp_8 ;
          GGS_uint temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_8748.objectCompare (var_falseBranchMaxDuration_8842)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = var_trueBranchMaxDuration_8748 ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = var_falseBranchMaxDuration_8842 ;
          }
          outArgument_outMax = temp_10 ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
          test_12 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GGS_uint var_falseBranchMinDuration_9234 = var_falseMin_8577.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 200)) ;
            GGS_uint var_falseBranchMaxDuration_9282 = var_falseMax_8591.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 201)) ;
            GGS_uint var_trueBranchMinDuration_9330 = var_trueMin_8488.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 202)) ;
            GGS_uint var_trueBranchMaxDuration_9376 = var_trueMax_8501.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 203)) ;
            GGS_uint temp_14 ;
            const GalgasBool test_15 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_9330.objectCompare (var_falseBranchMinDuration_9234)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              temp_14 = var_trueBranchMinDuration_9330 ;
            }else if (GalgasBool::boolFalse == test_15) {
              temp_14 = var_falseBranchMinDuration_9234 ;
            }
            outArgument_outMin = temp_14 ;
            GGS_uint temp_16 ;
            const GalgasBool test_17 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_9376.objectCompare (var_falseBranchMaxDuration_9282)).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              temp_16 = var_trueBranchMaxDuration_9376 ;
            }else if (GalgasBool::boolFalse == test_17) {
              temp_16 = var_falseBranchMaxDuration_9282 ;
            }
            outArgument_outMax = temp_16 ;
          }
        }
        if (GalgasBool::boolFalse == test_12) {
          GGS_uint var_trueBranchMinDuration_9679 = var_trueMin_8488.add_operation (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 207)) ;
          GGS_uint var_trueBranchMaxDuration_9725 = var_trueMax_8501.add_operation (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 208)) ;
          GGS_uint var_falseBranchMinDuration_9771 = var_falseMin_8577.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 209)) ;
          GGS_uint var_falseBranchMaxDuration_9819 = var_falseMax_8591.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 210)) ;
          GGS_uint temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_9679.objectCompare (var_falseBranchMinDuration_9771)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = var_trueBranchMinDuration_9679 ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = var_falseBranchMinDuration_9771 ;
          }
          outArgument_outMin = temp_18 ;
          GGS_uint temp_20 ;
          const GalgasBool test_21 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_9725.objectCompare (var_falseBranchMaxDuration_9819)).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            temp_20 = var_trueBranchMaxDuration_9725 ;
          }else if (GalgasBool::boolFalse == test_21) {
            temp_20 = var_falseBranchMaxDuration_9819 ;
          }
          outArgument_outMax = temp_20 ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 215)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                 const GGS_string constinArgument_inNextLabel,
                                                                                 GGS_uint & outArgument_outMin,
                                                                                 GGS_uint & outArgument_outMax,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_10581 ;
  GGS_uint var_trueMax_10594 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_10581, var_trueMax_10594, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 228)) ;
  GGS_uint var_falseMin_10703 ;
  GGS_uint var_falseMax_10717 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_10703, var_falseMax_10717, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 229)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_10581.objectCompare (var_trueMax_10594)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_10703.objectCompare (var_falseMax_10717)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 231)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_10931 = var_trueMin_10581.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 232)) ;
          GGS_uint var_trueBranchMaxDuration_10977 = var_trueMax_10594.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 233)) ;
          GGS_uint var_falseBranchMinDuration_11023 = var_falseMin_10703.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 234)) ;
          GGS_uint var_falseBranchMaxDuration_11071 = var_falseMax_10717.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 235)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_10931.objectCompare (var_falseBranchMinDuration_11023)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_trueBranchMinDuration_10931 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_falseBranchMinDuration_11023 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_10977.objectCompare (var_falseBranchMaxDuration_11071)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_trueBranchMaxDuration_10977 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_falseBranchMaxDuration_11071 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_11.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 238)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_uint var_falseBranchMinDuration_11499 = var_falseMin_10703.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 239)) ;
            GGS_uint var_falseBranchMaxDuration_11547 = var_falseMax_10717.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 240)) ;
            GGS_uint var_trueBranchMinDuration_11595 = var_trueMin_10581.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 241)) ;
            GGS_uint var_trueBranchMaxDuration_11641 = var_trueMax_10594.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 242)) ;
            GGS_uint temp_12 ;
            const GalgasBool test_13 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_11499.objectCompare (var_trueBranchMinDuration_11595)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              temp_12 = var_falseBranchMinDuration_11499 ;
            }else if (GalgasBool::boolFalse == test_13) {
              temp_12 = var_trueBranchMinDuration_11595 ;
            }
            outArgument_outMin = temp_12 ;
            GGS_uint temp_14 ;
            const GalgasBool test_15 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_11547.objectCompare (var_trueBranchMaxDuration_11641)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              temp_14 = var_falseBranchMaxDuration_11547 ;
            }else if (GalgasBool::boolFalse == test_15) {
              temp_14 = var_trueBranchMaxDuration_11641 ;
            }
            outArgument_outMax = temp_14 ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_uint var_trueBranchMinDuration_11944 = var_trueMin_10581.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 246)) ;
          GGS_uint var_trueBranchMaxDuration_11990 = var_trueMax_10594.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 247)) ;
          GGS_uint var_falseBranchMinDuration_12036 = var_falseMin_10703.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 248)) ;
          GGS_uint var_falseBranchMaxDuration_12084 = var_falseMax_10717.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 249)) ;
          GGS_uint temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_11944.objectCompare (var_falseBranchMinDuration_12036)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_trueBranchMinDuration_11944 ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = var_falseBranchMinDuration_12036 ;
          }
          outArgument_outMin = temp_16 ;
          GGS_uint temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_11990.objectCompare (var_falseBranchMaxDuration_12084)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = var_trueBranchMaxDuration_11990 ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = var_falseBranchMaxDuration_12084 ;
          }
          outArgument_outMax = temp_18 ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 254)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                               const GGS_string /* constinArgument_inNextLabel */,
                                                                               GGS_uint & outArgument_outMin,
                                                                               GGS_uint & outArgument_outMax,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 267)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_12798 = GGS_bool (true) ;
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_12819 (temp_0.readProperty_mTargetLabels ()) ;
  bool bool_1 = var_solved_12798.isValidAndTrue () ;
  if (enumerator_12819.hasCurrentObject () && bool_1) {
    while (enumerator_12819.hasCurrentObject () && bool_1) {
      var_solved_12798 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_12819.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 272)) ;
      enumerator_12819.gotoNextObject () ;
      if (enumerator_12819.hasCurrentObject ()) {
        bool_1 = var_solved_12798.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_12798.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_12959 (temp_3.readProperty_mTargetLabels ()) ;
      while (enumerator_12959.hasCurrentObject ()) {
        GGS_uint var_min_13041 ;
        GGS_uint var_max_13050 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_12959.current_mValue (HERE), var_min_13041, var_max_13050, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 277)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::lowerThan, var_min_13041.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            outArgument_outMin = var_min_13041 ;
          }
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_max_13050.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            outArgument_outMax = var_max_13050 ;
          }
        }
        enumerator_12959.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 286)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 287)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                const GGS_string /* constinArgument_inNextLabel */,
                                                                                GGS_uint & outArgument_outMin,
                                                                                GGS_uint & outArgument_outMax,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (11U)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_duration_computations.galgas3", 300)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outMin.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 301)) ;
    }
  }
  outArgument_outMax = outArgument_outMin ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                              const GGS_string /* constinArgument_inNextLabel */,
                                                                              GGS_uint & outArgument_outMin,
                                                                              GGS_uint & outArgument_outMax,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 314)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_14108 = GGS_bool (true) ;
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_14129 (temp_0.readProperty_mTargetLabels ()) ;
  bool bool_1 = var_solved_14108.isValidAndTrue () ;
  if (enumerator_14129.hasCurrentObject () && bool_1) {
    while (enumerator_14129.hasCurrentObject () && bool_1) {
      var_solved_14108 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_14129.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 319)) ;
      enumerator_14129.gotoNextObject () ;
      if (enumerator_14129.hasCurrentObject ()) {
        bool_1 = var_solved_14108.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_14108.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_14269 (temp_3.readProperty_mTargetLabels ()) ;
      while (enumerator_14269.hasCurrentObject ()) {
        GGS_uint var_min_14351 ;
        GGS_uint var_max_14360 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_14269.current_mValue (HERE), var_min_14351, var_max_14360, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 324)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::lowerThan, var_min_14351.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            outArgument_outMin = var_min_14351 ;
          }
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_max_14360.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            outArgument_outMax = var_max_14360 ;
          }
        }
        enumerator_14269.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 333)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 334)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                         GGS_uint & outArgument_outMin,
                                                         GGS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                        const GGS_string /* constinArgument_inNextLabel */,
                                                        GGS_uint & outArgument_outMin,
                                                        GGS_uint & outArgument_outMax,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                         GGS_uint & outArgument_outMin,
                                                         GGS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_duration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                       const GGS_string constinArgument_inNextLabel,
                                                       GGS_uint & outArgument_outMin,
                                                       GGS_uint & outArgument_outMax,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 392)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_min_16435 ;
      GGS_uint var_max_16444 ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mLabel (), var_min_16435, var_max_16444, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 393)) ;
      outArgument_outMin = var_min_16435 ;
      outArgument_outMax = var_max_16444 ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 397)) ;
          outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 398)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 401)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MNOP minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                      GGS_uint & outArgument_outMin,
                                                                                      GGS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                        GGS_uint & outArgument_outMin,
                                                                                        GGS_uint & outArgument_outMax,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 459)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 460)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_LFSR minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                      GGS_uint & outArgument_outMin,
                                                                                      GGS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                      GGS_uint & outArgument_outMin,
                                                                      GGS_uint & outArgument_outMax,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 492)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mTargetLabel (), outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 493)) ;
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 494)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 495)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 497)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                   GGS_uint & outArgument_outMin,
                                                                                   GGS_uint & outArgument_outMax,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inExploredBlockMap, outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 509)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, outArgument_outMin.objectCompare (outArgument_outMax)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 511)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 512)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                                   GGS_uint & outArgument_outMin,
                                                                                                   GGS_uint & outArgument_outMax,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas3", 523)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_20230 = GGS_bool (true) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_20259 (temp_0.readProperty_mTargetInstructions ()) ;
  bool bool_1 = var_solved_20230.isValidAndTrue () ;
  if (enumerator_20259.hasCurrentObject () && bool_1) {
    while (enumerator_20259.hasCurrentObject () && bool_1) {
      GGS_uint var_min_20357 ;
      GGS_uint var_max_20366 ;
      callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_20259.current_mInstruction (HERE).ptr (), constinArgument_inExploredBlockMap, var_min_20357, var_max_20366, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 527)) ;
      var_solved_20230 = GGS_bool (ComparisonKind::lowerOrEqual, var_min_20357.objectCompare (var_max_20366)) ;
      enumerator_20259.gotoNextObject () ;
      if (enumerator_20259.hasCurrentObject ()) {
        bool_1 = var_solved_20230.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_20230.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
      UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_20435 (temp_3.readProperty_mTargetInstructions ()) ;
      GGS_uint index_20422 (uint32_t (0)) ;
      while (enumerator_20435.hasCurrentObject ()) {
        GGS_uint var_min_20530 ;
        GGS_uint var_max_20541 ;
        callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_20435.current_mInstruction (HERE).ptr (), constinArgument_inExploredBlockMap, var_min_20530, var_max_20541, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 532)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
          test_4 = GGS_bool (ComparisonKind::lowerThan, index_20422.objectCompare (temp_5.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas3", 534)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 534)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            var_min_20530 = var_min_20530.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 535)) ;
            var_max_20541 = var_max_20541.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 536)) ;
          }
        }
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::lowerThan, var_min_20530.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            outArgument_outMin = var_min_20530 ;
          }
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::greaterThan, var_max_20541.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            outArgument_outMax = var_max_20541 ;
          }
        }
        enumerator_20435.gotoNextObject () ;
        index_20422.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 531)) ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (10U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 546)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (10U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 547)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18DurationComputations&!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_DurationComputations_26__21_ (GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                       GGS_blockDurationMap & outArgument_outBlockDurationMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBlockDurationMap.drop () ; // Release 'out' argument
  GGS_stringlist var_nextLabelList_21411 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_21438 (ioArgument_ioBlockList) ;
  while (enumerator_21438.hasCurrentObject ()) {
    var_nextLabelList_21411.addAssignOperation (enumerator_21438.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 564)) ;
    enumerator_21438.gotoNextObject () ;
  }
  var_nextLabelList_21411.addAssignOperation (GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 566)) ;
  {
  GGS_string joker_21564 ; // Joker input parameter
  var_nextLabelList_21411.setter_popFirst (joker_21564, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 567)) ;
  }
  outArgument_outBlockDurationMap = GGS_blockDurationMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continue_21626 = GGS_bool (true) ;
  if (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas3", 571)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 571)).isValid ()) {
    uint32_t variant_21644 = ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas3", 571)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 571)).uintValue () ;
    bool loop_21644 = true ;
    while (loop_21644) {
      loop_21644 = var_continue_21626.isValid () ;
      if (loop_21644) {
        loop_21644 = var_continue_21626.boolValue () ;
      }
      if (loop_21644 && (0 == variant_21644)) {
        loop_21644 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_duration_computations.galgas3", 571)) ;
      }
      if (loop_21644) {
        variant_21644 -= 1 ;
        var_continue_21626 = GGS_bool (false) ;
        GGS_ipic_31__38_BlockList var_tempBlockList_21720 = ioArgument_ioBlockList ;
        ioArgument_ioBlockList = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_21779 (var_tempBlockList_21720) ;
        UpEnumerator_stringlist enumerator_21806 (var_nextLabelList_21411) ;
        while (enumerator_21779.hasCurrentObject () && enumerator_21806.hasCurrentObject ()) {
          GGS_ipic_31__38_Block var_newBlock_21905 ;
          extensionMethod_computeDuration (enumerator_21779.current_mBlock (HERE), outArgument_outBlockDurationMap, enumerator_21806.current_mValue (HERE), var_newBlock_21905, var_continue_21626, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 576)) ;
          ioArgument_ioBlockList.addAssignOperation (var_newBlock_21905  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 577)) ;
          enumerator_21779.gotoNextObject () ;
          enumerator_21806.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18PrintDurations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_PrintDurations_26__3F_ (GGS_string & ioArgument_ioListFileContents,
                                                 const GGS_blockDurationMap constinArgument_inBlockDurationMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 636)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 636)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 636)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("TIMINGS").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 637)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 637)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 637)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 637)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 638)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 638)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 638)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Label").getter_leftPadding (GGS_uint (uint32_t (100U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 639)).add_operation (GGS_string (": min ... max\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 639)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 639)) ;
  UpEnumerator_blockDurationMap enumerator_24018 (constinArgument_inBlockDurationMap) ;
  while (enumerator_24018.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_24018.current_lkey (HERE).readProperty_string ().getter_leftPadding (GGS_uint (uint32_t (100U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)).add_operation (enumerator_24018.current_mMinDuration (HERE).getter_string (SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)).add_operation (GGS_string (" ... "), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)).add_operation (enumerator_24018.current_mMaxDuration (HERE).getter_string (SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 641)) ;
    enumerator_24018.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas3", 643)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_BitTest addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 10)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_SEMI_COLON addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 17)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_IncDec addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 24)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JUMP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_GOTO addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 38)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CALL addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 45)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FOREVER addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_STATIC_REPEAT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_MNOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_F addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CLRW addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CLRWDT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_SLEEP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FB addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_NOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_banksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrangeInstruction_checkbank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrangeInstruction_checknobank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_banksel_register addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_do_while addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 132)) ;
  }
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_midrange_5F_partList enumerator_4381 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_4381.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_4381.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 134)) ;
    }
    enumerator_4381.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_nobanksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_savebank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 148)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_structured_if addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_structured_5F_if temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 155)) ;
  }
  {
  const GGS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 156)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FD addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 169)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_literalOperation addUsedRoutines'
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
  UpEnumerator_midrange_5F_instructionList enumerator_6137 (constinArgument_inInstructionList) ;
  while (enumerator_6137.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) enumerator_6137.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 184)) ;
    enumerator_6137.gotoNextObject () ;
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
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 195)) ;
  UpEnumerator_midrange_5F_interruptDefinitionList enumerator_6686 (constinArgument_inInterruptDefinitionList) ;
  while (enumerator_6686.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_6686.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 198)) ;
    }
    enumerator_6686.gotoNextObject () ;
  }
  GGS_stringset var_s_6883 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas3", 205)).isValid ()) {
    uint32_t variant_6902 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas3", 205)).uintValue () ;
    bool loop_6902 = true ;
    while (loop_6902) {
      loop_6902 = GGS_bool (ComparisonKind::notEqual, var_s_6883.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6902) {
        loop_6902 = GGS_bool (ComparisonKind::notEqual, var_s_6883.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6902 && (0 == variant_6902)) {
        loop_6902 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas3", 205)) ;
      }
      if (loop_6902) {
        variant_6902 -= 1 ;
        var_s_6883 = result_outUsedRoutineSet ;
        UpEnumerator_midrange_5F_routineDefinitionList enumerator_7048 (constinArgument_inRoutineDefinitionList) ;
        while (enumerator_7048.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_7048.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 209)).boolEnum () ;
            if (GalgasBool::boolTrue == test_0) {
              {
              routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_7048.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas3", 210)) ;
              }
            }
          }
          enumerator_7048.gotoNextObject () ;
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

static const GALGAS_TypeDescriptor * functionArgs_midrange_5F_computeUsedRoutines [3] = {
  & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList,
  & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_midrange_5F_computeUsedRoutines (Compiler * inCompiler,
                                                                             const GALGAS_ObjectArray & inEffectiveParameterArray,
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
//Routine 'checkCurrentEmitAddress?'
//
//--------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress_3F_ (const GGS_uint constinArgument_inCurrentAddress,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addr_1351 ;
  {
  routine_currentEmitAddress_21_ (var_addr_1351, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 39)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("intermediate_generic.galgas3", 40)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_addr_1351.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 40)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 41)), GGS_string ("internal error: current emit address is ").add_operation (var_addr_1351.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas3", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 41)).add_operation (GGS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 41)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas3", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 42)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 41)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatInteger eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatInteger::method_eval (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                        GGS_sint_36__34_ & outArgument_outResult,
                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_immediatInteger temp_0 = this ;
  outArgument_outResult = temp_0.readProperty_mValue ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas3", 95)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatRegister eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatRegister::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                         const GGS_constantMap constinArgument_inConstantMap,
                                         GGS_sint_36__34_ & outArgument_outResult,
                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_immediatRegister temp_1 = this ;
    test_0 = constinArgument_inRegisterTable.getter_hasKey (temp_1.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 106)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_immediatRegister temp_2 = this ;
      ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_2.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 107)) ;
      GGS_uintlist var_registerAddressList_4048 ;
      GGS_uint var_size_4073 ;
      GGS_registerProtection var_protection_4087 ;
      const GGS_immediatRegister temp_3 = this ;
      GGS_bitSliceTable joker_4078_2 ; // Joker input parameter
      GGS_string joker_4078_1 ; // Joker input parameter
      constinArgument_inRegisterTable.method_searchKey (temp_3.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_4048, var_size_4073, joker_4078_2, joker_4078_1, var_protection_4087, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 108)) ;
      const GGS_immediatRegister temp_4 = this ;
      extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_4.readProperty_mRegister ().readProperty_mRegisterName (), GGS_bool (false), var_protection_4087, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 109)) ;
      GGS_uint var_registerAddress_4237 ;
      var_registerAddressList_4048.method_first (var_registerAddress_4237, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 110)) ;
      GGS_sint_36__34_ var_offset_4332 ;
      const GGS_immediatRegister temp_5 = this ;
      callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4332, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 111)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::lowerThan, var_offset_4332.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_immediatRegister temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index (").add_operation (var_offset_4332.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 114)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 114)), fixItArray8  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 113)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_4332.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 115)).objectCompare (var_size_4073)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_immediatRegister temp_10 = this ;
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_10.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index (").add_operation (var_offset_4332.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 117)).add_operation (GGS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 117)).add_operation (var_size_4073.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 117)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 117)), fixItArray11  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 116)) ;
          }
        }
      }
      outArgument_outResult = var_registerAddress_4237.getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas3", 119)).add_operation (var_offset_4332, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 119)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_immediatRegister temp_13 = this ;
      test_12 = constinArgument_inConstantMap.getter_hasKey (temp_13.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 120)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_immediatRegister temp_14 = this ;
        constinArgument_inConstantMap.method_searchKey (temp_14.readProperty_mRegister ().readProperty_mRegisterName (), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 121)) ;
        GGS_sint_36__34_ var_offset_4925 ;
        const GGS_immediatRegister temp_15 = this ;
        callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4925, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 122)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, GGS_sint_36__34_ (int64_t (0LL)).objectCompare (var_offset_4925)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_immediatRegister temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index notation (").add_operation (var_offset_4925.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 125)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 125)).add_operation (GGS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 125)), fixItArray18  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 124)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      const GGS_immediatRegister temp_19 = this ;
      const GGS_immediatRegister temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("'").add_operation (temp_20.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 128)).add_operation (GGS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 128)), fixItArray21  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 128)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatAdd eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatAdd::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_5587 ;
  const GGS_immediatAdd temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5587, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 139)) ;
  GGS_sint_36__34_ var_rightResult_5692 ;
  const GGS_immediatAdd temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5692, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 140)) ;
  outArgument_outResult = var_leftResult_5587.add_operation (var_rightResult_5692, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatSub eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatSub::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_6080 ;
  const GGS_immediatSub temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6080, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 151)) ;
  GGS_sint_36__34_ var_rightResult_6185 ;
  const GGS_immediatSub temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6185, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 152)) ;
  outArgument_outResult = var_leftResult_6080.substract_operation (var_rightResult_6185, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 153)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatMul eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMul::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_6573 ;
  const GGS_immediatMul temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6573, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 163)) ;
  GGS_sint_36__34_ var_rightResult_6678 ;
  const GGS_immediatMul temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6678, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 164)) ;
  outArgument_outResult = var_leftResult_6573.multiply_operation (var_rightResult_6678, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatDiv eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatDiv::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_7066 ;
  const GGS_immediatDiv temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7066, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 175)) ;
  GGS_sint_36__34_ var_rightResult_7171 ;
  const GGS_immediatDiv temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7171, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 176)) ;
  outArgument_outResult = var_leftResult_7066.divide_operation (var_rightResult_7171, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 177)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatMod eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMod::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_7559 ;
  const GGS_immediatMod temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7559, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 187)) ;
  GGS_sint_36__34_ var_rightResult_7664 ;
  const GGS_immediatMod temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7664, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 188)) ;
  outArgument_outResult = var_leftResult_7559.modulo_operation (var_rightResult_7664, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 189)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatAnd eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatAnd::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_8054 ;
  const GGS_immediatAnd temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8054, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 199)) ;
  GGS_sint_36__34_ var_rightResult_8159 ;
  const GGS_immediatAnd temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8159, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 200)) ;
  outArgument_outResult = var_leftResult_8054.operator_and (var_rightResult_8159 COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 201)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatOr eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatOr::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                   const GGS_constantMap constinArgument_inConstantMap,
                                   GGS_sint_36__34_ & outArgument_outResult,
                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_8546 ;
  const GGS_immediatOr temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8546, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 211)) ;
  GGS_sint_36__34_ var_rightResult_8651 ;
  const GGS_immediatOr temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8651, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 212)) ;
  outArgument_outResult = var_leftResult_8546.operator_or (var_rightResult_8651 COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatXor eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatXor::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_9039 ;
  const GGS_immediatXor temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9039, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 223)) ;
  GGS_sint_36__34_ var_rightResult_9144 ;
  const GGS_immediatXor temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9144, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 224)) ;
  outArgument_outResult = var_leftResult_9039.operator_xor (var_rightResult_9144 COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 225)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatLeftShift eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLeftShift::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                          const GGS_constantMap constinArgument_inConstantMap,
                                          GGS_sint_36__34_ & outArgument_outResult,
                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_9538 ;
  const GGS_immediatLeftShift temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9538, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 235)) ;
  GGS_sint_36__34_ var_rightResult_9643 ;
  const GGS_immediatLeftShift temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9643, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 236)) ;
  outArgument_outResult = var_leftResult_9538.left_shift_operation (var_rightResult_9643.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 237)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatRightShift eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatRightShift::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                           const GGS_constantMap constinArgument_inConstantMap,
                                           GGS_sint_36__34_ & outArgument_outResult,
                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_10044 ;
  const GGS_immediatRightShift temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10044, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 247)) ;
  GGS_sint_36__34_ var_rightResult_10149 ;
  const GGS_immediatRightShift temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10149, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 248)) ;
  outArgument_outResult = var_leftResult_10044.right_shift_operation (var_rightResult_10149.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 249)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                          const GGS_constantMap constinArgument_inConstantMap,
                                          GGS_sint_36__34_ & outArgument_outResult,
                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_10549 ;
  const GGS_immediatEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10549, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 259)) ;
  GGS_sint_36__34_ var_rightResult_10654 ;
  const GGS_immediatEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10654, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 260)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_leftResult_10549.objectCompare (var_rightResult_10654)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatNotEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatNotEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                             const GGS_constantMap constinArgument_inConstantMap,
                                             GGS_sint_36__34_ & outArgument_outResult,
                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_11097 ;
  const GGS_immediatNotEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11097, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 275)) ;
  GGS_sint_36__34_ var_rightResult_11202 ;
  const GGS_immediatNotEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11202, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 276)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_leftResult_11097.objectCompare (var_rightResult_11202)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatGreaterOrEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterOrEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                   GGS_sint_36__34_ & outArgument_outResult,
                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_11651 ;
  const GGS_immediatGreaterOrEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11651, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 291)) ;
  GGS_sint_36__34_ var_rightResult_11756 ;
  const GGS_immediatGreaterOrEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11756, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 292)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leftResult_11651.objectCompare (var_rightResult_11756)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatLowerOrEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerOrEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                                 const GGS_constantMap constinArgument_inConstantMap,
                                                 GGS_sint_36__34_ & outArgument_outResult,
                                                 GGS_stringset & ioArgument_ioUsedRegisters,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_12203 ;
  const GGS_immediatLowerOrEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12203, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 307)) ;
  GGS_sint_36__34_ var_rightResult_12308 ;
  const GGS_immediatLowerOrEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12308, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 308)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::lowerOrEqual, var_leftResult_12203.objectCompare (var_rightResult_12308)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatGreaterTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                            const GGS_constantMap constinArgument_inConstantMap,
                                            GGS_sint_36__34_ & outArgument_outResult,
                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_12750 ;
  const GGS_immediatGreaterTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12750, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 323)) ;
  GGS_sint_36__34_ var_rightResult_12855 ;
  const GGS_immediatGreaterTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12855, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 324)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_leftResult_12750.objectCompare (var_rightResult_12855)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatLowerTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                          const GGS_constantMap constinArgument_inConstantMap,
                                          GGS_sint_36__34_ & outArgument_outResult,
                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_13294 ;
  const GGS_immediatLowerTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_13294, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 339)) ;
  GGS_sint_36__34_ var_rightResult_13399 ;
  const GGS_immediatLowerTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_13399, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 340)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::lowerThan, var_leftResult_13294.objectCompare (var_rightResult_13399)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatNegate eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatNegate::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                       const GGS_constantMap constinArgument_inConstantMap,
                                       GGS_sint_36__34_ & outArgument_outResult,
                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_13831 ;
  const GGS_immediatNegate temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13831, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 355)) ;
  outArgument_outResult = var_result_13831.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 356)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatComplement eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatComplement::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                           const GGS_constantMap constinArgument_inConstantMap,
                                           GGS_sint_36__34_ & outArgument_outResult,
                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_14201 ;
  const GGS_immediatComplement temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_14201, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 366)) ;
  outArgument_outResult = var_result_14201.operator_tilde (SOURCE_FILE ("intermediate_generic.galgas3", 367)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatSlice eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatSlice::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                      const GGS_constantMap constinArgument_inConstantMap,
                                      GGS_sint_36__34_ & outArgument_outResult,
                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bitSliceTable var_bitSliceTable_14517 ;
  outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  const GGS_immediatSlice temp_0 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_0.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 380)) ;
  GGS_registerProtection var_protection_14674 ;
  const GGS_immediatSlice temp_1 = this ;
  GGS_uintlist joker_14644 ; // Joker input parameter
  GGS_uint joker_14647 ; // Joker input parameter
  GGS_string joker_14666 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_1.readProperty_mRegisterName (), joker_14644, joker_14647, var_bitSliceTable_14517, joker_14666, var_protection_14674, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 381)) ;
  const GGS_immediatSlice temp_2 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_2.readProperty_mRegisterName (), GGS_bool (false), var_protection_14674, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 382)) ;
  GGS_stringset var_sliceNameSet_14776 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_immediatSlice temp_3 = this ;
  UpEnumerator_immediatSliceExpressionList enumerator_14823 (temp_3.readProperty_mSliceExpressionList ()) ;
  while (enumerator_14823.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_sliceNameSet_14776.getter_hasKey (enumerator_14823.current_mSliceName (HERE).readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 385)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_14823.current_mSliceName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_14823.current_mSliceName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 386)).add_operation (GGS_string ("' bit field has been already defined"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 386)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 386)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      var_sliceNameSet_14776.plusPlusAssignOperation (enumerator_14823.current_mSliceName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 388)) ;
      GGS_uint var_sliceIndex_15107 ;
      GGS_uint var_sliceSize_15123 ;
      var_bitSliceTable_14517.method_searchKey (enumerator_14823.current_mSliceName (HERE), var_sliceIndex_15107, var_sliceSize_15123, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 389)) ;
      GGS_sint_36__34_ var_result_15203 ;
      callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_14823.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_15203, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 390)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::lowerThan, var_result_15203.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).operator_or (GGS_bool (ComparisonKind::greaterThan, var_result_15203.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 391)).left_shift_operation (var_sliceSize_15123, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 391)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 391)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 391)).getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 391)))) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 391)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_14823.current_mSliceName (HERE).readProperty_location (), GGS_string ("invalid immediat value associated to the '").add_operation (enumerator_14823.current_mSliceName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 392)).add_operation (GGS_string ("' bit field, evaluated as "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 392)).add_operation (var_result_15203.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 392)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 392)).add_operation (GGS_string (" (should be between 0 and "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 392)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 393)).left_shift_operation (var_sliceSize_15123, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 393)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 393)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 393)).getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 393)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 393)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 393)), fixItArray7  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 392)) ;
        }
      }
      outArgument_outResult = outArgument_outResult.operator_or (var_result_15203.left_shift_operation (var_sliceIndex_15107, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 395)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 395)) ;
    }
    enumerator_14823.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitNumberLiteralValue getBitNumber'
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralValue::method_getBitNumber (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                      const GGS_constantMap /* constinArgument_inConstantMap */,
                                                      GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                      const GGS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                      GGS_uint & outArgument_outBitNumber,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_bitNumberLiteralValue temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBitNumberLiteralValue ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (7U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_bitNumberLiteralValue temp_2 = this ;
      const GGS_bitNumberLiteralValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mBitNumberLiteralValue ().readProperty_location (), GGS_string ("The bit number is ").add_operation (temp_3.readProperty_mBitNumberLiteralValue ().readProperty_uint ().getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 423)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 423)).add_operation (GGS_string (" (should be <= 7)"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 423)), fixItArray4  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 423)) ;
    }
  }
  const GGS_bitNumberLiteralValue temp_5 = this ;
  outArgument_outBitNumber = temp_5.readProperty_mBitNumberLiteralValue ().readProperty_uint () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitNumberLabelValue getBitNumber'
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLabelValue::method_getBitNumber (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                    const GGS_constantMap /* constinArgument_inConstantMap */,
                                                    GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                    const GGS_bitSliceTable constinArgument_inBitSliceTable,
                                                    GGS_uint & outArgument_outBitNumber,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_sliceIndex_17133 ;
  GGS_uint var_sliceSize_17149 ;
  const GGS_bitNumberLabelValue temp_0 = this ;
  constinArgument_inBitSliceTable.method_searchKey (temp_0.readProperty_mBitNumberLabelValue (), var_sliceIndex_17133, var_sliceSize_17149, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 437)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_bitNumberLabelValue temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mBitNumberIndexValue ().readProperty_uint ().objectCompare (var_sliceSize_17149)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bitNumberLabelValue temp_3 = this ;
      const GGS_bitNumberLabelValue temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mBitNumberIndexValue ().readProperty_location (), GGS_string ("The ").add_operation (temp_4.readProperty_mBitNumberIndexValue ().readProperty_uint ().getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 439)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 439)).add_operation (GGS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 439)).add_operation (var_sliceSize_17149.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 440)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 440)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 440)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 439)) ;
    }
  }
  const GGS_bitNumberLabelValue temp_6 = this ;
  outArgument_outBitNumber = var_sliceIndex_17133.add_operation (temp_6.readProperty_mBitNumberIndexValue ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 442)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitNumberLiteralExpression getBitNumber'
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralExpression::method_getBitNumber (const GGS_registerTable constinArgument_inRegisterTable,
                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                           const GGS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                           GGS_uint & outArgument_outBitNumber,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_17832 ;
  const GGS_bitNumberLiteralExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mBitNumberLiteralExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_17832, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 454)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerThan, var_result_17832.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bitNumberLiteralExpression temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpression (), GGS_string ("bit index is ").add_operation (var_result_17832.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 456)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 456)).add_operation (GGS_string (", but should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 456)), fixItArray3  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 456)) ;
      outArgument_outBitNumber.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_result_17832.objectCompare (GGS_sint_36__34_ (int64_t (7LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_bitNumberLiteralExpression temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mEndOfExpression (), GGS_string ("bit index is ").add_operation (var_result_17832.getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 458)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 458)).add_operation (GGS_string (", but should be <= 7"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 458)), fixItArray6  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 458)) ;
        outArgument_outBitNumber.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outBitNumber = var_result_17832.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 460)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inConstantMap.getter_count (SOURCE_FILE ("intermediate_generic.galgas3", 483)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 484)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 484)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 484)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CONSTANTS").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 485)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 485)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 485)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 485)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 486)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 486)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 486)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Constant").getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 487)).add_operation (GGS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 487)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 487)) ;
      UpEnumerator_constantMap enumerator_19400 (constinArgument_inConstantMap) ;
      while (enumerator_19400.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssignOperation(enumerator_19400.current_lkey (HERE).readProperty_string ().getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 489)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 489)).add_operation (enumerator_19400.current_mValue (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas3", 489)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 489)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 489)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 489)) ;
        enumerator_19400.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas3", 491)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabelAtAddress (GGS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                    GGS_uint & ioArgument_ioAddress,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 26)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_defineLabelAtAddress (GGS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                  GGS_uint & ioArgument_ioAddress,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, ioArgument_ioAddress.objectCompare (temp_1.readProperty_mOrigin ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 36)), GGS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 37)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 36)).add_operation (GGS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 37)).add_operation (temp_2.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 37)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 37)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 37)), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 36)) ;
    }
  }
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_4 = this ;
  ioArgument_ioAddress = temp_4.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_defineLabelAtAddress (GGS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                      GGS_uint & ioArgument_ioAddress,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  GGS_uint var_nextAddress_1937 = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 48)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 48)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_nextAddress_1937.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 49)).operator_and (GGS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 49)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_intermediate_5F_actualInstruction temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Routine too long, crosses page boundary at this instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 50)) ;
    }
  }
  ioArgument_ioAddress = var_nextAddress_1937 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_NULL compute'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                            GGS_uint & /* ioArgument_ioAddress */,
                                                            GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                            GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                            const GGS_uint /* constinArgument_inIndex */,
                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_actualInstruction compute'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                         GGS_uint & /* ioArgument_ioAddress */,
                                                                         GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                         GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                         const GGS_uint /* constinArgument_inIndex */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG compute'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                     GGS_uint & ioArgument_ioAddress,
                                                                     GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                     GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                     const GGS_uint /* constinArgument_inIndex */,
                                                                     GGS_string & /* ioArgument_ioListFileContents */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JUMP compute'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                            GGS_uint & ioArgument_ioAddress,
                                                            GGS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                            const GGS_uint constinArgument_inIndex,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_4696 ;
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_4696, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 114)) ;
  GGS_uint var_flags_4746 = ioArgument_ioAddress.operator_xor (var_targetAddress_4696 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 116)) ;
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__4811 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_flags_4746.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 118)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_bit_31__31__4811 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 119)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_targetAddress_4696.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 120)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_bit_31__31__4811 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 121)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      var_bit_31__31__4811 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 123)) ;
    }
  }
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__5093 ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_flags_4746.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 127)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_bit_31__32__5093 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 128)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, var_targetAddress_4696.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 129)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_bit_31__32__5093 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 130)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      var_bit_31__32__5093 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 132)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_6 = this ;
    const GGS_midrange_5F_intermediate_5F_JUMP temp_7 = this ;
    test_5 = GGS_bool (ComparisonKind::notEqual, var_bit_31__31__4811.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GGS_bool (ComparisonKind::notEqual, var_bit_31__32__5093.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 135)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_midrange_5F_intermediate_5F_JUMP temp_8 = this ;
      const GGS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
      GGS_midrange_5F_intermediate_5F_actualInstruction var_instruction_5446 = GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__4811, var_bit_31__32__5093, inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_5446, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 141)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 143)).add_operation (GGS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 143)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 143)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JSR compute'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                           GGS_uint & ioArgument_ioAddress,
                                                           GGS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                           GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           const GGS_uint constinArgument_inIndex,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_6245 ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_6245, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 157)) ;
  GGS_uint var_flags_6295 = ioArgument_ioAddress.operator_xor (var_targetAddress_6245 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 159)) ;
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__6360 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_flags_6295.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 161)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_bit_31__31__6360 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 162)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_targetAddress_6245.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 163)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_bit_31__31__6360 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 164)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      var_bit_31__31__6360 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 166)) ;
    }
  }
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__6642 ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_flags_6295.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 170)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_bit_31__32__6642 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 171)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, var_targetAddress_6245.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_bit_31__32__6642 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 173)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      var_bit_31__32__6642 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 175)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_6 = this ;
    const GGS_midrange_5F_intermediate_5F_JSR temp_7 = this ;
    test_5 = GGS_bool (ComparisonKind::notEqual, var_bit_31__31__6360.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GGS_bool (ComparisonKind::notEqual, var_bit_31__32__6642.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 178)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_midrange_5F_intermediate_5F_JSR temp_8 = this ;
      const GGS_midrange_5F_intermediate_5F_JSR temp_9 = this ;
      GGS_midrange_5F_intermediate_5F_actualInstruction var_instruction_6995 = GGS_midrange_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__6360, var_bit_31__32__6642, inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_6995, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 184)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 186)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 186)).add_operation (GGS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 186)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 186)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                       GGS_uint & ioArgument_ioAddress,
                                                                       GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                       GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                       const GGS_uint /* constinArgument_inIndex */,
                                                                       GGS_string & /* ioArgument_ioListFileContents */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_7796 ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_7796, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 199)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_targetAddress_7796.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 201)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 201)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 202)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 202)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 202)).add_operation (var_targetAddress_7796.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 203)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 202)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 203)), fixItArray4  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 201)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP&&'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 216)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 216)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 216)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("COMPUTE JSR and JUMP").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 217)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 217)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 217)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 217)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 218)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 218)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 218)) ;
  GGS_bool var_JUMP_5F_or_5F_JSR_5F_fixed_8843 = GGS_bool (true) ;
  GGS_uint var_iteration_8880 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 221)).isValid ()) {
    uint32_t variant_8896 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 221)).uintValue () ;
    bool loop_8896 = true ;
    while (loop_8896) {
      loop_8896 = var_JUMP_5F_or_5F_JSR_5F_fixed_8843.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 222)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 222)).isValid () ;
      if (loop_8896) {
        loop_8896 = var_JUMP_5F_or_5F_JSR_5F_fixed_8843.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 222)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 222)).boolValue () ;
      }
      if (loop_8896 && (0 == variant_8896)) {
        loop_8896 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 221)) ;
      }
      if (loop_8896) {
        variant_8896 -= 1 ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_8843 = GGS_bool (false) ;
        var_iteration_8880.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 225)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_iteration_8880.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 226)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 226)) ;
        GGS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_9177 = GGS_midrange_5F_symbolTableForConvertingRelatives::init (inCompiler COMMA_HERE) ;
        GGS_uint var_currentAddress_9251 = GGS_uint (uint32_t (0U)) ;
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9279 (ioArgument_ioGeneratedInstructionList) ;
        while (enumerator_9279.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9279.current_mInstruction (HERE).ptr (), var_symbolTable_9177, var_currentAddress_9251, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 231)) ;
          enumerator_9279.gotoNextObject () ;
        }
        GGS_uint var_lastAddressForFirstPass_9422 = var_currentAddress_9251 ;
        var_currentAddress_9251 = GGS_uint (uint32_t (0U)) ;
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9559 (ioArgument_ioGeneratedInstructionList) ;
        GGS_uint index_9554 (uint32_t (0)) ;
        while (enumerator_9559.hasCurrentObject ()) {
          callExtensionMethod_compute ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9559.current_mInstruction (HERE).ptr (), var_symbolTable_9177, var_currentAddress_9251, var_JUMP_5F_or_5F_JSR_5F_fixed_8843, ioArgument_ioGeneratedInstructionList, index_9554, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 237)) ;
          var_currentAddress_9251 = var_currentAddress_9251.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9559.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 238)) ;
          enumerator_9559.gotoNextObject () ;
          index_9554.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 236)) ;
        }
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_9422.objectCompare (var_currentAddress_9251)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GenericArray <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 241)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_9251.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 241)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 241)).add_operation (GGS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 241)).add_operation (var_lastAddressForFirstPass_9422.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 243)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 242)).add_operation (GGS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 243)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 241)) ;
          }
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_8843.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 245)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No JUMP, no JSR to fix\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 246)) ;
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Program size: ").add_operation (var_currentAddress_9251.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 247)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 247)).add_operation (GGS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 247)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas3", 247)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (const GGS_uint constinArgument_inCode,
                                                            GGS_uint & ioArgument_ioWordAddress,
                                                            const GGS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 8)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 8)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 8)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 8)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 9)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 9)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 9)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 9)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 10)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 11)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 12)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 13)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeDirectCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (const GGS_uint constinArgument_inCode,
                                                                  GGS_uint & ioArgument_ioWordAddress,
                                                                  const GGS_string constinArgument_inInstructionDescriptionString,
                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 23)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 24)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 24)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 24)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 25)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 25)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 26)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 27)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoMidrangeCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (const GGS_uint constinArgument_inWordAddress,
                                                          const GGS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                                          GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 36)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 36)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 36)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 36)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 37)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 38)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 39)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                   GGS_uint & ioArgument_ioAddress,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 66)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_actualInstruction enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                     GGS_uint & ioArgument_ioAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 84)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 84)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                GGS_uint & /* ioArgument_ioAddress */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                         const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                         const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
  routine_setEmitAddress_3F_ (temp_1.readProperty_mOrigin ().add_operation (temp_2.readProperty_mOrigin (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 123)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 123)) ;
  }
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_3 = this ;
  routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 124)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                                             GGS_uint & ioArgument_ioAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  GGS_uint var_code_5779 = extensionGetter_basecode (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 158)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas3", 159)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_5779 = var_code_5779.operator_or (GGS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 160)) ;
    }
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  var_code_5779 = var_code_5779.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 162)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 162)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_5779, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                            const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                            const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                            GGS_uint & ioArgument_ioAddress,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  GGS_uint var_code_6693 = extensionGetter_baseCode (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 185)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  var_code_6693 = var_code_6693.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 186)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 186)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_6693, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 187)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                                             GGS_uint & ioArgument_ioAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  GGS_uint var_code_7517 = extensionGetter_baseCode (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 210)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  var_code_7517 = var_code_7517.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 211)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 211)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  var_code_7517 = var_code_7517.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 212)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 212)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 212)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_7517, ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 213)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                      const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                                                      GGS_uint & ioArgument_ioAddress,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_8176 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_8176 = GGS_uint (uint32_t (7168U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_8176 = GGS_uint (uint32_t (6144U)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_8176 = var_code_8176.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 232)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 232)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_8176 = var_code_8176.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 233)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 233)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 233)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_8176, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 234)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (const GGS_string constinArgument_inTargetLabel,
                                                                             const GGS_uint constinArgument_inTargetAddress,
                                                                             GGS_uint & ioArgument_ioAddress,
                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_8711 = GGS_uint (uint32_t (10240U)).operator_or (constinArgument_inTargetAddress.operator_and (GGS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 244)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 244)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_8711, ioArgument_ioAddress, GGS_string ("GOTO ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 245)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 245)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (const GGS_location constinArgument_inIntructionLocation,
                                                                      GGS_uint & ioArgument_ioAddress,
                                                                      const GGS_string constinArgument_inTargetLabel,
                                                                      const GGS_uint constinArgument_inTargetAddress,
                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 256)).operator_and (GGS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 256)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GGS_string ("GOTO (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 257)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 257)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 257)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 257)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 257)).add_operation (GGS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 257)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 257)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 259)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (const GGS_string constinArgument_inTargetLabel,
                                                                             const GGS_uint constinArgument_inTargetAddress,
                                                                             GGS_uint & ioArgument_ioAddress,
                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9684 = GGS_uint (uint32_t (8192U)).operator_or (constinArgument_inTargetAddress.operator_and (GGS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 269)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 269)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_9684, ioArgument_ioAddress, GGS_string ("CALL ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 270)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 270)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_3F__26__3F__3F__26_ (const GGS_location constinArgument_inIntructionLocation,
                                                                      GGS_uint & ioArgument_ioAddress,
                                                                      const GGS_string constinArgument_inTargetLabel,
                                                                      const GGS_uint constinArgument_inTargetAddress,
                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 281)).operator_and (GGS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 281)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GGS_string ("CALL (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 282)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 282)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 282)).add_operation (GGS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 282)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 282)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 284)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JUMP generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_generateBinaryCodeAtAddress (const GGS_registerTable constinArgument_inRegisterTable,
                                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                                const GGS_uint constinArgument_inTotalBankCount,
                                                                                const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_usedRegisters_10780 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_targetAddress_10867 ;
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_10867, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 298)) ;
  GGS_registerExpression var_PCLATH_5F_register_10925 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 301)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 302)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 303)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_11211 ;
  GGS_bitSliceTable joker_11246 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_10925.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_build_binary_code.galgas3", 307)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_11211, joker_11246, var_usedRegisters_10780, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 305)) ;
  const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 318)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 318)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 318)).operator_or (var_PCLATH_5F_IPICregisterDescription_11211.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 318)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 318)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 318)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 317)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 325)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 325)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 325)).operator_or (var_PCLATH_5F_IPICregisterDescription_11211.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 325)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 325)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 325)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 325)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 324)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 335)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 335)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 335)).operator_or (var_PCLATH_5F_IPICregisterDescription_11211.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 335)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 335)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 335)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 335)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 334)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 342)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 342)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 342)).operator_or (var_PCLATH_5F_IPICregisterDescription_11211.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 342)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 342)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 342)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 342)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 341)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_10867, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 350)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_12807 ;
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_12807, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 363)) ;
  {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_12807, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 365)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_generateBinaryCodeAtAddress (const GGS_registerTable constinArgument_inRegisterTable,
                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                               const GGS_uint constinArgument_inTotalBankCount,
                                                                               const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                               GGS_uint & ioArgument_ioAddress,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_usedRegisters_13331 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_targetAddress_13424 ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_13424, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 379)) ;
  GGS_registerExpression var_PCLATH_5F_register_13482 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 382)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 383)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 384)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_13777 ;
  GGS_bitSliceTable joker_13812 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_13482.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_build_binary_code.galgas3", 388)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_13777, joker_13812, var_usedRegisters_13331, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 386)) ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 399)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 399)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 399)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 399)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 399)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 399)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 399)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 398)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 406)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 406)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 406)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 406)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 406)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 406)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 406)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 405)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 416)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 416)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 416)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 416)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 416)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 416)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 416)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 415)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 423)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 423)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 423)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 423)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 423)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 423)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 423)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 422)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  {
  const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_13424, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 430)) ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 434)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 434)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 434)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 434)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 434)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 434)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 434)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 433)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 441)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 441)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 441)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 441)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 441)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 441)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 441)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 440)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_5 = this ;
  switch (temp_5.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 451)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 451)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 451)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 451)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 451)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 451)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 451)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 450)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 458)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 458)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 458)).operator_or (var_PCLATH_5F_IPICregisterDescription_13777.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 458)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas3", 458)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 458)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 458)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 457)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_16317 ;
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_16317, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 477)) ;
  {
  const GGS_midrange_5F_intermediate_5F_CALL temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_CALL temp_2 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction_3F__26__3F__3F__26_ (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_16317, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 479)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                                     GGS_uint & ioArgument_ioAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_16866 ;
  GGS_string var_s_16885 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_16866 = GGS_uint (uint32_t (3840U)) ;
      var_s_16885 = GGS_string ("INCFSZ") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_16866 = GGS_uint (uint32_t (2816U)) ;
    var_s_16885 = GGS_string ("DECFSZ") ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas3", 498)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_code_16866 = var_code_16866.operator_or (GGS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 499)) ;
    }
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_16866 = var_code_16866.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 501)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 501)) ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
  var_s_16885.plusAssignOperation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 502)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 502)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_16866, ioArgument_ioAddress, var_s_16885, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 503)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
    test_6 = temp_7.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
      routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_8.readProperty_mInstructionLocation (), ioArgument_ioAddress, GGS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 506)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 506)) ;
      }
    }
  }
  GGS_uint var_targetAddress_17548 ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GGS_lstring::init_21__21_ (temp_9.readProperty_mTargetLabel (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 509)), inCompiler COMMA_HERE), var_targetAddress_17548, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 509)) ;
  {
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_10 = this ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_10.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_11.readProperty_mTargetLabel (), var_targetAddress_17548, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 510)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (100U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 522)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_uint & ioArgument_ioAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (256U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 534)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                              const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                              const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                              const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                                              GGS_uint & ioArgument_ioAddress,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (0U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 546)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (8U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 558)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (9U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 570)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (99U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 582)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                                           GGS_uint & ioArgument_ioAddress,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  GGS_uint var_code_21452 = extensionGetter_baseCode (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 609)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_21452 = var_code_21452.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 610)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_21452, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 611)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                           const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                           const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                           const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                           GGS_uint & ioArgument_ioAddress,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_22057 ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_22057, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 623)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_targetAddress_22057.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 625)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 625)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 626)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 626)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 626)).add_operation (var_targetAddress_22057.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 627)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 626)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 627)), fixItArray4  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 625)) ;
    }
  }
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (ioArgument_ioAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 629)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_uint & ioArgument_ioAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 642)) ;
    }
  }
  GGS_uint var_idx_22921 = GGS_uint (uint32_t (0U)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_22931 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_22931 = true ;
    while (loop_22931) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_22931 = GGS_bool (ComparisonKind::lowerThan, var_idx_22921.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_22931) {
        loop_22931 = GGS_bool (ComparisonKind::lowerThan, var_idx_22921.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_22931 && (0 == variant_22931)) {
        loop_22931 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_build_binary_code.galgas3", 645)) ;
      }
      if (loop_22931) {
        variant_22931 -= 1 ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (0U)), ioArgument_ioAddress, GGS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 648)) ;
        }
        var_idx_22921.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 649)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_ipic_binary_code??????&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (const GGS_registerTable constinArgument_inRegisterTable,
                                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                                          const GGS_uint constinArgument_inTotalBankCount,
                                                                                          const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                                          const GGS_uint constinArgument_inROMsize,
                                                                                          const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_uint & outArgument_outUsedROMsize,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GGS_midrange_5F_symbolTable var_symbolTable_23945 = GGS_midrange_5F_symbolTable::init (inCompiler COMMA_HERE) ;
  GGS_uint var_currentAddress_23995 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24021 (constinArgument_inGeneratedInstructionList) ;
  while (enumerator_24021.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24021.current_mInstruction (HERE).ptr (), var_symbolTable_23945, var_currentAddress_23995, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 672)) ;
    enumerator_24021.gotoNextObject () ;
  }
  GGS_uint var_lastAddressForFirstPass_24157 = var_currentAddress_23995 ;
  outArgument_outUsedROMsize = var_currentAddress_23995 ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 677)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 677)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 677)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("GENERATED CODE").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 678)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 678)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 678)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 678)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 679)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 679)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 679)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 680)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 681)) ;
  }
  var_currentAddress_23995 = GGS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GGS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 683)) ;
  }
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24641 (constinArgument_inGeneratedInstructionList) ;
  while (enumerator_24641.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24641.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable_23945, ioArgument_ioListFileContents, var_currentAddress_23995, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 685)) ;
    {
    routine_checkCurrentEmitAddress_3F_ (var_currentAddress_23995.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 693)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 693)) ;
    }
    enumerator_24641.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_24157.objectCompare (var_currentAddress_23995)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 696)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_23995.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 696)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 696)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 696)).add_operation (var_lastAddressForFirstPass_24157.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas3", 698)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 697)).add_operation (GGS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 698)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 696)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_24157.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 700)), GGS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24157.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas3", 700)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 700)).add_operation (GGS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 700)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas3", 702)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 701)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 702)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 700)) ;
      }
    }
  }
  UpEnumerator_actualConfigurationMap enumerator_25488 (constinArgument_inActualConfigurationMap) ;
  while (enumerator_25488.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_25488.current_mRegisterAddress (HERE).add_operation (enumerator_25488.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 706)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 706)) ;
    }
    {
    routine_emitCode_3F_ (enumerator_25488.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas3", 707)) ;
    }
    enumerator_25488.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputBaselineDeviceList",
                                         0,
                                         "baseline",
                                         "Output the list of supported baseline devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputDeviceList",
                                         68,
                                         "device-list",
                                         "Output the list of supported devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputMidrangeDeviceList",
                                         0,
                                         "midrange",
                                         "Output the list of supported mid-range devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ("piccolo_options_not_in_cocoa",
                                         "outputPic18DeviceList",
                                         0,
                                         "pic18",
                                         "Output the list of supported pic18 devices") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ("piccolo_options_not_in_cocoa",
                                         "exportDeviceFiles",
                                         69,
                                         "export",
                                         "Export device definition files to the directory named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ("piccolo_options_not_in_cocoa",
                                         "memoryDescription",
                                         77,
                                         "memory",
                                         "Output the RAM, ROM and EEPROM description of the device named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ("piccolo_options_not_in_cocoa",
                                         "configDescription",
                                         70,
                                         "configuration",
                                         "Output the configuration register description of the device named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ("piccolo_options_not_in_cocoa",
                                         "registerDescription",
                                         82,
                                         "registers",
                                         "Output the special register description of the device named by string",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_switch analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GGS_routineMap constinArgument_inRoutineMap,
                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                            const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                            const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                            GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GGS_lstring & ioArgument_ioBlockLabel,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                            const GGS_bool constinArgument_inShouldPreserveBSR,
                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_caseConstantMap var_caseConstantMap_2432 = GGS_caseConstantMap::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  GGS_lstring var_exitLabel_2488 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 63)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 64)) ;
  GGS_sint_36__34_ var_lastComparisonValue_2635 = GGS_sint_36__34_ (int64_t (0LL)) ;
  GGS_bool var_continuesInSequence_2717 = GGS_bool (false) ;
  GGS_uint var_initialBankSetting_2757 = ioArgument_ioCurrentBank ;
  GGS_uint var_finalBankSetting_2804 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 71)) ;
  GGS_bool var_finalBankSettingDefined_2847 = GGS_bool (false) ;
  const GGS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  UpEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2925 (temp_1.readProperty_mCaseList ()) ;
  while (enumerator_2925.hasCurrentObject ()) {
    const GGS_pic_31__38_Instruction_5F_switch temp_2 = this ;
    GGS_lstring var_conditionTrueLabel_2987 = GGS_lstring::init_21__21_ (GGS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 76)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    UpEnumerator_pic_31__38_CaseExpressionList enumerator_3129 (enumerator_2925.current_mCaseExpressionList (HERE)) ;
    while (enumerator_3129.hasCurrentObject ()) {
      GGS_string var_conditionLabel_3176 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 79)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 80)) ;
      callExtensionMethod_analyzeCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) enumerator_3129.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_2987, var_conditionLabel_3176, ioArgument_ioUsedRegisters, var_caseConstantMap_2432, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2635, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 81)) ;
      enumerator_3129.gotoNextObject () ;
    }
    GGS_lstring var_conditionFalseLabel_3619 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_2987 ;
    GGS_uint var_branchFinalBank_3706 = var_initialBankSetting_2757 ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_2925.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3706, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 98)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_continuesInSequence_2717 = GGS_bool (true) ;
        const GGS_pic_31__38_Instruction_5F_switch temp_4 = this ;
        ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_exitLabel_2488, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 122)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 123)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 118)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2847.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, var_finalBankSetting_2804.objectCompare (var_branchFinalBank_3706)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_string temp_7 ;
            const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, var_branchFinalBank_3706.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 130)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              temp_7 = GGS_string ("'no selection'") ;
            }else if (GalgasBool::boolFalse == test_8) {
              temp_7 = var_branchFinalBank_3706.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 130)) ;
            }
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, var_finalBankSetting_2804.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 132)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = GGS_string ("'no selection'") ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = var_finalBankSetting_2804.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 132)) ;
            }
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_2925.current_mStartOfCase (HERE), GGS_string ("this branch leaves bank setting to ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 129)).add_operation (GGS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 130)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 131)).add_operation (GGS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 132)), fixItArray11  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 129)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      var_finalBankSettingDefined_2847 = GGS_bool (true) ;
      var_finalBankSetting_2804 = var_branchFinalBank_3706 ;
    }
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3619 ;
    enumerator_2925.gotoNextObject () ;
  }
  GGS_uint var_branchFinalBank_5238 = var_initialBankSetting_2757 ;
  {
  const GGS_pic_31__38_Instruction_5F_switch temp_12 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_12.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5238, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 144)) ;
  }
  GGS_bool var_thenContinuesInSequence_5683 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5683.boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_switch temp_14 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_exitLabel_2488, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 168)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 169)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_finalBankSetting_2804.objectCompare (var_branchFinalBank_5238)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_pic_31__38_Instruction_5F_switch temp_16 = this ;
      GGS_string temp_17 ;
      const GalgasBool test_18 = GGS_bool (ComparisonKind::equal, var_branchFinalBank_5238.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 177)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string ("'no selection'") ;
      }else if (GalgasBool::boolFalse == test_18) {
        temp_17 = var_branchFinalBank_5238.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 177)) ;
      }
      GGS_string temp_19 ;
      const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, var_finalBankSetting_2804.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 179)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_string ("'no selection'") ;
      }else if (GalgasBool::boolFalse == test_20) {
        temp_19 = var_finalBankSetting_2804.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 179)) ;
      }
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mElseBranchStartLocation (), GGS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 176)).add_operation (GGS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 177)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 178)).add_operation (GGS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 179)), fixItArray21  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 176)) ;
    }
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_2804 ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = var_continuesInSequence_2717.boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      ioArgument_ioBlockLabel = var_exitLabel_2488 ;
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 187)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::method_analyzeCaseItem (const GGS_registerTable constinArgument_inRegisterTable,
                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                     const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GGS_string constinArgument_inIndexForLabels,
                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                     GGS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                     GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     GGS_lstring & ioArgument_ioBlockLabel,
                                                                     GGS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_8060 ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mCaseExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_8060, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 225)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_8060.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_8060.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 227)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_SimpleConstantCaseItem temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCaseExpressionLocation (), GGS_string ("case value is evaluated as ").add_operation (var_result_8060.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 228)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 228)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_8060.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 231)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_pic_31__38_SimpleConstantCaseItem temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mCaseExpressionLocation (), GGS_string ("the '").add_operation (var_result_8060.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 232)).add_operation (GGS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 232)) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_8060.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 233)), GGS_string ("the '").add_operation (var_result_8060.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 233)).add_operation (GGS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 233)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    const GGS_pic_31__38_SimpleConstantCaseItem temp_8 = this ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (var_result_8060.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 235)), temp_8.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 235)) ;
    }
  }
  const GGS_pic_31__38_SimpleConstantCaseItem temp_9 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_8060, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 241)).operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 241)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 243)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_8060 ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_10 = this ;
  GGS_lstring var_conditionFalseLabel_8995 = GGS_lstring::init_21__21_ (GGS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 248)), temp_10.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_11 = this ;
  GGS_ipic_31__38_AbstractBlockTerminator var_t_9190 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_11.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 252)), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 254)), var_conditionFalseLabel_8995, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 256)), inCompiler COMMA_HERE) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9190, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 263)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 258)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_8995 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::method_analyzeCaseItem (const GGS_registerTable constinArgument_inRegisterTable,
                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                               const GGS_lstring constinArgument_inConditionTrueLabel,
                                                               const GGS_string constinArgument_inIndexForLabels,
                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                               GGS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                               GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               GGS_lstring & ioArgument_ioBlockLabel,
                                                               GGS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_minBound_10274 ;
  const GGS_pic_31__38_IntervalCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mMinExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10274, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 284)) ;
  GGS_sint_36__34_ var_maxBound_10375 ;
  const GGS_pic_31__38_IntervalCaseItem temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mMaxExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10375, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 285)) ;
  GGS_bool var_ok_10415 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_minBound_10274.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_minBound_10274.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 288)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_IntervalCaseItem temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mCaseExpressionLocation (), GGS_string ("min bound is evaluated as ").add_operation (var_minBound_10274.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 289)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 289)) ;
      var_ok_10415 = GGS_bool (false) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_maxBound_10375.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_maxBound_10375.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 292)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_IntervalCaseItem temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mCaseExpressionLocation (), GGS_string ("max bound is evaluated as ").add_operation (var_maxBound_10375.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 293)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 293)) ;
      var_ok_10415 = GGS_bool (false) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::lowerOrEqual, var_maxBound_10375.objectCompare (var_minBound_10274)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_pic_31__38_IntervalCaseItem temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mCaseExpressionLocation (), GGS_string ("max bound (").add_operation (var_maxBound_10375.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 297)).add_operation (GGS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 297)).add_operation (var_minBound_10274.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 297)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 297)) ;
      var_ok_10415 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_maxBound_10375.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_and (GGS_bool (ComparisonKind::equal, var_minBound_10274.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 299)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_pic_31__38_IntervalCaseItem temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mCaseExpressionLocation (), GGS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 300)) ;
        var_ok_10415 = GGS_bool (false) ;
      }
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = var_ok_10415.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      UpEnumerator_range enumerator_11210 (GGS_range::init_21__21_ (var_minBound_10274.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 305)), var_maxBound_10375.substract_operation (var_minBound_10274, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 305)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 305)), inCompiler COMMA_HERE)) ;
      while (enumerator_11210.hasCurrentObject ()) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11210.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 306)).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_pic_31__38_IntervalCaseItem temp_16 = this ;
            GenericArray <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mCaseExpressionLocation (), GGS_string ("the '").add_operation (enumerator_11210.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 307)).add_operation (GGS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 307)) ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11210.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 308)), GGS_string ("the '").add_operation (enumerator_11210.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 308)).add_operation (GGS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 308)) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          {
          const GGS_pic_31__38_IntervalCaseItem temp_19 = this ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_11210.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 310)), temp_19.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 310)) ;
          }
        }
        enumerator_11210.gotoNextObject () ;
      }
      const GGS_pic_31__38_IntervalCaseItem temp_20 = this ;
      GGS_lstring var_firstConditionAcceptedLabel_11626 = GGS_lstring::init_21__21_ (GGS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 314)), temp_20.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_21 = this ;
      GGS_lstring var_firstConditionRejectedLabel_11748 = GGS_lstring::init_21__21_ (GGS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 315)), temp_21.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_22 = this ;
      GGS_lstring var_intervalRejectedLabel_11870 = GGS_lstring::init_21__21_ (GGS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 316)), temp_22.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_23 = this ;
      GGS_ipic_31__38_SequentialInstruction var_secondTestInstruction_12053 = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 320)), var_maxBound_10375.substract_operation (var_minBound_10274, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 321)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 321)), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_24.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 326)), ioArgument_ioLastComparisonValue.add_operation (GGS_sint_36__34_ (int64_t (255LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 327)).substract_operation (var_maxBound_10375, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 327)).operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 327)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 329)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 324)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_25 = this ;
      GGS_ipic_31__38_AbstractBlockTerminator var_t_12588 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 334)), var_firstConditionAcceptedLabel_11626, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 336)), var_firstConditionRejectedLabel_11748, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 338)), inCompiler COMMA_HERE) ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12588, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 346)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 341)) ;
      GGS_ipic_31__38_SequentialInstructionList temp_26 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 353)) ;
      temp_26.plusPlusAssignOperation (GGS_ipic_31__38_SequentialInstructionList_2E_element::init_21__21__21_ (var_secondTestInstruction_12053, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 353)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 353)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_27 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 351)), var_firstConditionRejectedLabel_11748, temp_26, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_27.readProperty_mCaseExpressionLocation (), var_intervalRejectedLabel_11870, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 354)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 355)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 350)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_28 = this ;
      GGS_ipic_31__38_AbstractBlockTerminator var_t_32__13377 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_28.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 361)), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 363)), var_intervalRejectedLabel_11870, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 365)), inCompiler COMMA_HERE) ;
      GGS_ipic_31__38_SequentialInstructionList temp_29 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 371)) ;
      temp_29.plusPlusAssignOperation (GGS_ipic_31__38_SequentialInstructionList_2E_element::init_21__21__21_ (var_secondTestInstruction_12053, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 371)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 369)), var_firstConditionAcceptedLabel_11626, temp_29, var_t_32__13377, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas3", 373)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 368)) ;
      ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11870 ;
      ioArgument_ioLastComparisonValue = var_minBound_10274 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                    GGS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  UpEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14210 (temp_0.readProperty_mCaseList ()) ;
  while (enumerator_14210.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_14210.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 391)) ;
    }
    enumerator_14210.gotoNextObject () ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas3", 393)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ReturnTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("RETURN") ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ReturnTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                   Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    RETURN"), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (18U))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 46))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 44)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ReturnTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_RetfieTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("RETFIE") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_RetfieTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mFastReturn ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult.plusAssignOperation(GGS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 68)) ;
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

GGS_uint cPtr_ipic_31__38_RetfieTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                   Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GGS_string constinArgument_inNextBlockLabel,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetfieTerminator temp_0 = this ;
  const GGS_ipic_31__38_RetfieTerminator temp_1 = this ;
  GGS_bigint temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mFastReturn ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_bigint ("17", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 89)) ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 89)) ;
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 88)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 88)), GGS_uintlist::class_func_listWithValue (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 89))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 89))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetfieTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_RetlwTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  result_outResult = GGS_string ("RETLW ").add_operation (temp_0.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas3", 109)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 109)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_RetlwTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                  Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                      const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                      const GGS_string constinArgument_inNextBlockLabel,
                                                                      GGS_codeList & outArgument_outCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  const GGS_ipic_31__38_RetlwTerminator temp_1 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 128)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 128)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (3072U)).operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 129))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 129))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 127)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetlwTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_ipic_31__38_RetlwTerminator var_t_4576 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_4576.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_RetlwTerminator temp_1 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLiteralValue ().objectCompare (var_t_4576.readProperty_mLiteralValue ())) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_JumpTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (0U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    switch (temp_2.readProperty_mKind ().enumValue ()) {
    case GGS_jumpInstructionKind::Enumeration::invalid:
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    case GGS_jumpInstructionKind::Enumeration::enum_relative:
      {
        result_outSize = GGS_uint (uint32_t (2U)) ;
      }
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_absolute:
      {
        result_outSize = GGS_uint (uint32_t (4U)) ;
      }
      break ;
    }
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                               GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mKind ().enumValue ()) {
      case GGS_jumpInstructionKind::Enumeration::invalid:
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
      case GGS_jumpInstructionKind::Enumeration::enum_relative:
        {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 183)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 183)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 184)) ;
              }
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_absolute:
        break ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                                        const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GGS_string constinArgument_inNextBlockLabel,
                                                                                        GGS_uint & ioArgument_ioConversionCount,
                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      switch (temp_3.readProperty_mKind ().enumValue ()) {
      case GGS_jumpInstructionKind::Enumeration::invalid:
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
        {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 205)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 205)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 206)) ;
              const GGS_ipic_31__38_JumpTerminator temp_6 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 207)).add_operation (GGS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 207)).add_operation (temp_6.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 207)).add_operation (GGS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 207)).add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 207)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 207)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 207)) ;
              const GGS_ipic_31__38_JumpTerminator temp_8 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_9 = this ;
              outArgument_outModifiedTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mLabel (), GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_terminators.galgas3", 208)), inCompiler COMMA_HERE) ;
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_relative:
        {
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            const GGS_ipic_31__38_JumpTerminator temp_11 = this ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 211)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 211)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              const GGS_ipic_31__38_JumpTerminator temp_12 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_13 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_13.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 213)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas3", 212)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 212)).add_operation (GGS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 213)).add_operation (temp_14.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 213)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 214)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 212)) ;
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_absolute:
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

GGS_string cPtr_ipic_31__38_JumpTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  GGS_string var_name_7351 ;
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      var_name_7351 = GGS_string ("JUMP ") ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      var_name_7351 = GGS_string ("BRA ") ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      var_name_7351 = GGS_string ("GOTO ") ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      result_outResult = GGS_string ("(").add_operation (var_name_7351, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 233)).add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 233)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 233)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
    result_outResult = var_name_7351.add_operation (temp_4.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 235)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                     const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                     const GGS_string constinArgument_inNextBlockLabel,
                                                                     GGS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = GGS_codeList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_targetAddress_8057 ;
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mLabel (), var_targetAddress_8057, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 249)) ;
    const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
    switch (temp_3.readProperty_mKind ().enumValue ()) {
    case GGS_jumpInstructionKind::Enumeration::invalid:
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    case GGS_jumpInstructionKind::Enumeration::enum_relative:
      {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8057, temp_4.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 252)) ;
      }
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_absolute:
      {
        const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8057, temp_5.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 254)) ;
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

GGS_bool cPtr_ipic_31__38_JumpTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_ipic_31__38_JumpTerminator var_t_8547 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_8547.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (var_t_8547.readProperty_mLabel ().readProperty_string ())).operator_and (GGS_bool (ComparisonKind::equal, temp_2.readProperty_mKind ().objectCompare (var_t_8547.readProperty_mKind ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 265)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_AbstractConditionTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 281)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 280)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 281)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                            const GGS_string constinArgument_inBlockLabel,
                                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GGS_string constinArgument_inNextBlockLabel,
                                                                                            GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 293)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 300)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 319)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 318)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 320)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 319)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 328)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GGS_ipic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerEqualsToW:
    {
      result_outResult.plusAssignOperation(GGS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 331)) ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerGreaterThanW:
    {
      result_outResult.plusAssignOperation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 333)) ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerLowerThanW:
    {
      result_outResult.plusAssignOperation(GGS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 335)) ;
    }
    break ;
  }
  result_outResult.plusAssignOperation(GGS_string (" W \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 337)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 338)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 338)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 339)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 340)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 340)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                     const GGS_string constinArgument_inBlockLabel,
                                                                                                     const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GGS_string constinArgument_inNextBlockLabel,
                                                                                                     GGS_uint & ioArgument_ioConversionCount,
                                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                                     GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_11597 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_11876 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_11876, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 354)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12164 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12164, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 363)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_11597)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_11876.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_11876.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_11876.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_11876.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 377)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12164.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12164.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12164.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12164.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 378)) ;
      }
    }
    const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
    const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mComparison (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                  const GGS_string constinArgument_inNextBlockLabel,
                                                                                  GGS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_12883 ;
  GGS_string var_assemblyCode_12905 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  switch (temp_0.readProperty_mComparison ().enumValue ()) {
  case GGS_ipic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerEqualsToW:
    {
      var_binCode_12883 = GGS_uint (uint32_t (25088U)) ;
      var_assemblyCode_12905 = GGS_string ("    CPFSEQ") ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerGreaterThanW:
    {
      var_binCode_12883 = GGS_uint (uint32_t (25600U)) ;
      var_assemblyCode_12905 = GGS_string ("    CPFSGT") ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerLowerThanW:
    {
      var_binCode_12883 = GGS_uint (uint32_t (24576U)) ;
      var_assemblyCode_12905 = GGS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  var_assemblyCode_12905.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 405)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  var_binCode_12883 = var_binCode_12883.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 406)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 406)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_binCode_12883 = var_binCode_12883.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 408)) ;
      var_assemblyCode_12905.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 409)) ;
    }
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_12905, GGS_uintlist::class_func_listWithValue (var_binCode_12883  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 413))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 411)) ;
  GGS_codeList var_falseTerminatorCode_13692 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 416)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_falseTerminatorCode_13692, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 415)) ;
  outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_13692, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 421)) ;
  GGS_codeList var_trueTerminatorCode_13978 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 423)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 423)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 423)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_13978, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 422)) ;
  outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_13978, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 428)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_RegisterComparisonTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_RegisterComparisonTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_RegisterComparisonTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 438)) ;
        }
      }
      GGS_pic_31__38_RegisterComparisonTerminator var_t_14397 = temp_1 ;
      const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_14397.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 439)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_14397.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 441)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mComparison ().objectCompare (var_t_14397.readProperty_mComparison ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_14397.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 447)) ;
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

GGS_uint cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 462)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 461)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 463)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 462)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString () ;
  result_outResult.plusAssignOperation(GGS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 472)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 473)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 473)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 474)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 475)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 475)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_16403 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16682 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16682, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 489)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_16970 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_16970, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 498)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_16403)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_TestRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16682.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16682.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16682.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16682.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 512)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_16970.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_16970.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_16970.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_16970.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 513)) ;
      }
    }
    const GGS_pic_31__38_TestRegisterTerminator temp_7 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GGS_string constinArgument_inNextBlockLabel,
                                                                            GGS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_17653 = GGS_uint (uint32_t (26112U)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  GGS_string var_assemblyCode_17684 = GGS_string ("    TSTFSZ ").add_operation (temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 526)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  var_binCode_17653 = var_binCode_17653.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 527)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 527)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_pic_31__38_TestRegisterTerminator temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_binCode_17653 = var_binCode_17653.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 529)) ;
      var_assemblyCode_17684.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 530)) ;
    }
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_17684, GGS_uintlist::class_func_listWithValue (var_binCode_17653  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 534))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 532)) ;
  GGS_codeList var_falseTerminatorCode_18258 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 537)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_falseTerminatorCode_18258, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 536)) ;
  outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_18258, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 542)) ;
  GGS_codeList var_trueTerminatorCode_18544 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
  const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 544)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 544)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 544)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18544, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 543)) ;
  outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_18544, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 549)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_TestRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_TestRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_TestRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 559)) ;
        }
      }
      GGS_pic_31__38_TestRegisterTerminator var_t_18945 = temp_1 ;
      const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_18945.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 560)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_18945.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 562)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.readProperty_mRegisterDescription (), var_t_18945.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 565)) ;
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

GGS_string cPtr_pic_31__38_BitTestTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 579)).add_operation (temp_1.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas3", 579)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 579)).add_operation (GGS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 579)) ;
  const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 580)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 580)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 581)) ;
  const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 582)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 582)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                          const GGS_string constinArgument_inBlockLabel,
                                                                                          const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GGS_string constinArgument_inNextBlockLabel,
                                                                                          GGS_uint & ioArgument_ioConversionCount,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_20496 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_20775 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_20775, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 596)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21063 ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21063, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 605)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_20496)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_20775.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_20775.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_20775.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_20775.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 619)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21063.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21063.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21063.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21063.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 620)) ;
      }
    }
    const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                       const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                       const GGS_string constinArgument_inNextBlockLabel,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 634)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_binCode_21919 = GGS_uint (uint32_t (45056U)) ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
      GGS_string var_assemblyCode_21952 = GGS_string ("    BTFSC ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 637)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 637)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas3", 637)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 637)) ;
      const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
      var_binCode_21919 = var_binCode_21919.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 638)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 638)) ;
      const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
      var_binCode_21919 = var_binCode_21919.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 639)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 639)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 639)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
        test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_binCode_21919 = var_binCode_21919.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 641)) ;
          var_assemblyCode_21952.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 642)) ;
        }
      }
      outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_21952, GGS_uintlist::class_func_listWithValue (var_binCode_21919  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 646))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 644)) ;
      GGS_codeList var_falseTerminatorCode_22568 ;
      const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 648)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22568, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 647)) ;
      outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_22568, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 653)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_binCode_22723 = GGS_uint (uint32_t (40960U)) ;
    const GGS_pic_31__38_BitTestTerminator temp_9 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_10 = this ;
    GGS_string var_assemblyCode_22756 = GGS_string ("    BTFSS ").add_operation (temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 657)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 657)).add_operation (temp_10.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas3", 657)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 657)) ;
    const GGS_pic_31__38_BitTestTerminator temp_11 = this ;
    var_binCode_22723 = var_binCode_22723.operator_or (temp_11.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 658)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 658)) ;
    const GGS_pic_31__38_BitTestTerminator temp_12 = this ;
    var_binCode_22723 = var_binCode_22723.operator_or (temp_12.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 659)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 659)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 659)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_BitTestTerminator temp_14 = this ;
      test_13 = temp_14.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        var_binCode_22723 = var_binCode_22723.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 661)) ;
        var_assemblyCode_22756.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 662)) ;
      }
    }
    outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_22756, GGS_uintlist::class_func_listWithValue (var_binCode_22723  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 666))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 664)) ;
    GGS_codeList var_trueTerminatorCode_23357 ;
    const GGS_pic_31__38_BitTestTerminator temp_15 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 668)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_trueTerminatorCode_23357, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 667)) ;
    outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_23357, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 673)) ;
    GGS_codeList var_falseTerminatorCode_23669 ;
    const GGS_pic_31__38_BitTestTerminator temp_16 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_17 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 675)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 675)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 675)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23669, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 674)) ;
    outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_23669, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 680)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_BitTestTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_BitTestTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 691)) ;
        }
      }
      GGS_pic_31__38_BitTestTerminator var_t_24067 = temp_1 ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_24067.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 692)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_24067.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 694)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_BitTestTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mBitNumber ().objectCompare (var_t_24067.readProperty_mBitNumber ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_24067.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 700)) ;
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

GGS_string cPtr_ipic_31__38_IncDecRegisterTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult = GGS_string ("INCF ") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_string ("DECF ") ;
  }
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 719)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      result_outResult.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 721)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    result_outResult.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 723)) ;
  }
  result_outResult.plusAssignOperation(GGS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 725)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 726)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 726)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 727)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 728)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 728)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                  const GGS_string constinArgument_inBlockLabel,
                                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GGS_string constinArgument_inNextBlockLabel,
                                                                                                  GGS_uint & ioArgument_ioConversionCount,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_25881 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26160 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26160, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 742)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26448 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26448, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 751)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_25881)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26160.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26160.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26160.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26160.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 765)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26448.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26448.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26448.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26448.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 766)) ;
      }
    }
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
    outArgument_outModifiedTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                               GGS_codeList & outArgument_outCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 780)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      GGS_bigint temp_3 ;
      const GalgasBool test_4 = temp_2.readProperty_mIncrement ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        temp_3 = GGS_bigint ("15360", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 782)) ;
      }else if (GalgasBool::boolFalse == test_4) {
        temp_3 = GGS_bigint ("11264", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 782)) ;
      }
      GGS_uint var_binCode_27350 = temp_3.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 782)) ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = temp_5.readProperty_mIncrement ().boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string ("    INCFSZ") ;
      }else if (GalgasBool::boolFalse == test_7) {
        temp_6 = GGS_string ("    DECFSZ") ;
      }
      GGS_string var_assemblyCode_27432 = temp_6 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
      var_assemblyCode_27432.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 784)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 784)) ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
      var_binCode_27350 = var_binCode_27350.operator_or (temp_9.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 785)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 785)) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          var_assemblyCode_27432.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 787)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        var_binCode_27350 = var_binCode_27350.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 789)) ;
        var_assemblyCode_27432.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 790)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_13 = this ;
        test_12 = temp_13.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          var_binCode_27350 = var_binCode_27350.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 793)) ;
          var_assemblyCode_27432.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 794)) ;
        }
      }
      outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_27432, GGS_uintlist::class_func_listWithValue (var_binCode_27350  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 798))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 796)) ;
      GGS_codeList var_falseTerminatorCode_28187 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_14 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 800)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28187, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 799)) ;
      outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_28187, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 805)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_15 = this ;
    GGS_bigint temp_16 ;
    const GalgasBool test_17 = temp_15.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      temp_16 = GGS_bigint ("18432", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 808)) ;
    }else if (GalgasBool::boolFalse == test_17) {
      temp_16 = GGS_bigint ("19456", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 808)) ;
    }
    GGS_uint var_binCode_28342 = temp_16.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 808)) ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_18 = this ;
    GGS_string temp_19 ;
    const GalgasBool test_20 = temp_18.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      temp_19 = GGS_string ("    INFSNZ") ;
    }else if (GalgasBool::boolFalse == test_20) {
      temp_19 = GGS_string ("    DCFSNZ") ;
    }
    GGS_string var_assemblyCode_28424 = temp_19 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_21 = this ;
    var_assemblyCode_28424.plusAssignOperation(GGS_string (" ").add_operation (temp_21.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 810)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 810)) ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_22 = this ;
    var_binCode_28342 = var_binCode_28342.operator_or (temp_22.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 811)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 811)) ;
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_24 = this ;
      test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        var_assemblyCode_28424.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 813)) ;
      }
    }
    if (GalgasBool::boolFalse == test_23) {
      var_binCode_28342 = var_binCode_28342.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 815)) ;
      var_assemblyCode_28424.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 816)) ;
    }
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_26 = this ;
      test_25 = temp_26.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        var_binCode_28342 = var_binCode_28342.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 819)) ;
        var_assemblyCode_28424.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 820)) ;
      }
    }
    outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_28424, GGS_uintlist::class_func_listWithValue (var_binCode_28342  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 824))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 822)) ;
    GGS_codeList var_trueTerminatorCode_29164 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_27 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 826)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_trueTerminatorCode_29164, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 825)) ;
    outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_29164, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 831)) ;
    GGS_codeList var_falseTerminatorCode_29476 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_28 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_29 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 833)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 833)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 833)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29476, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 832)) ;
    outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_29476, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 838)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 849)) ;
        }
      }
      GGS_ipic_31__38_IncDecRegisterTerminator var_t_29898 = temp_1 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_29898.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 850)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_29898.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 852)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mIncrement ().objectCompare (var_t_29898.readProperty_mIncrement ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_8.readProperty_m_5F_W_5F_isDestination ().objectCompare (var_t_29898.readProperty_m_5F_W_5F_isDestination ())) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.readProperty_mRegisterDescription (), var_t_29898.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 861)) ;
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

GGS_uint cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 880)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 880)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 880)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED RETLW") ;
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  UpEnumerator_uintlist enumerator_31259 (temp_0.readProperty_mLiteralValues ()) ;
  while (enumerator_31259.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (" ").add_operation (enumerator_31259.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas3", 890)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 890)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 890)) ;
    enumerator_31259.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GGS_uint & ioArgument_ioConversionCount,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 906)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 906)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 906)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 907)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 908)).add_operation (GGS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 908)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 908)) ;
          const GGS_ipic_31__38_ComputedRETLWTerminator temp_4 = this ;
          const GGS_ipic_31__38_ComputedRETLWTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralValues (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                                        const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 923)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 923)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 923)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 924)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                              const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                              GGS_codeList & outArgument_outCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_32_label_33049 = GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 936)) ;
  GGS_uint var_targetAddress_33139 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_33049, var_targetAddress_33139, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 937)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33139, var_goto_32_label_33049, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 939)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33139, var_goto_32_label_33049, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 941)) ;
  }
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  UpEnumerator_uintlist enumerator_33354 (temp_2.readProperty_mLiteralValues ()) ;
  while (enumerator_33354.hasCurrentObject ()) {
    outArgument_outCode.addAssignOperation (GGS_string ("    RETLW ").add_operation (enumerator_33354.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas3", 945)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 945)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (3072U)).operator_or (enumerator_33354.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 946))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 946))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 944)) ;
    enumerator_33354.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 957)) ;
        }
      }
      GGS_ipic_31__38_ComputedRETLWTerminator var_t_33851 = temp_1 ;
      const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 958)).objectCompare (var_t_33851.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 958)))) ;
      const GGS_ipic_31__38_ComputedRETLWTerminator temp_3 = this ;
      UpEnumerator_uintlist enumerator_33982 (temp_3.readProperty_mLiteralValues ()) ;
      UpEnumerator_uintlist enumerator_34016 (var_t_33851.readProperty_mLiteralValues ()) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_33982.hasCurrentObject () && enumerator_34016.hasCurrentObject () && bool_4) {
        while (enumerator_33982.hasCurrentObject () && enumerator_34016.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_33982.current_mValue (HERE).objectCompare (enumerator_34016.current_mValue (HERE))) ;
          enumerator_33982.gotoNextObject () ;
          enumerator_34016.gotoNextObject () ;
          if (enumerator_33982.hasCurrentObject () && enumerator_34016.hasCurrentObject ()) {
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

GGS_string cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED GOTO ") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult.plusAssignOperation(GGS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 976)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult.plusAssignOperation(GGS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 978)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  UpEnumerator_lstringlist enumerator_34596 (temp_2.readProperty_mTargetLabels ()) ;
  while (enumerator_34596.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (" ").add_operation (enumerator_34596.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 981)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 981)) ;
    enumerator_34596.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 995)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 995)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 995)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                const GGS_string constinArgument_inBlockLabel,
                                                                                                const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GGS_uint & ioArgument_ioConversionCount,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 1010)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1010)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1010)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1011)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1012)).add_operation (GGS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1012)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1012)) ;
          const GGS_ipic_31__38_ComputedGotoTerminator temp_4 = this ;
          const GGS_ipic_31__38_ComputedGotoTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mTargetLabels (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                       const GGS_string constinArgument_inBlockLabel,
                                                                                       const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 1027)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1027)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1027)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1028)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                             const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                             GGS_codeList & outArgument_outCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_34_label_36696 = GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 1040)) ;
  GGS_uint var_targetAddress_36786 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36696, var_targetAddress_36786, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1041)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36786, var_goto_34_label_36696, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1043)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36786, var_goto_34_label_36696, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1045)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  UpEnumerator_lstringlist enumerator_37001 (temp_2.readProperty_mTargetLabels ()) ;
  while (enumerator_37001.hasCurrentObject ()) {
    GGS_uint var_targetLabelAddress_37083 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_37001.current_mValue (HERE), var_targetLabelAddress_37083, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1048)) ;
    outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37083, enumerator_37001.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1049)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1049)) ;
    enumerator_37001.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedGotoTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1060)) ;
        }
      }
      GGS_ipic_31__38_ComputedGotoTerminator var_t_37529 = temp_1 ;
      const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 1061)).objectCompare (var_t_37529.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 1061)))) ;
      const GGS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_37657 (temp_3.readProperty_mTargetLabels ()) ;
      UpEnumerator_lstringlist enumerator_37690 (var_t_37529.readProperty_mTargetLabels ()) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37657.hasCurrentObject () && enumerator_37690.hasCurrentObject () && bool_4) {
        while (enumerator_37657.hasCurrentObject () && enumerator_37690.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_37657.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_37690.current_mValue (HERE).readProperty_string ())) ;
          enumerator_37657.gotoNextObject () ;
          enumerator_37690.gotoNextObject () ;
          if (enumerator_37657.hasCurrentObject () && enumerator_37690.hasCurrentObject ()) {
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

GGS_uint cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 1082)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1082)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1082)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED BRA") ;
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_38501 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_38501.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (" ").add_operation (enumerator_38501.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1092)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1092)) ;
    enumerator_38501.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_39012 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_39012.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_39012.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1107)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_39012.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1109)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas3", 1108)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1108)).add_operation (GGS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1109)).add_operation (enumerator_39012.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1109)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1110)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1108)) ;
      }
    }
    enumerator_39012.gotoNextObject () ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_4 = this ;
  outArgument_outModifiedTerminator = temp_4 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 1115)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1115)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1115)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1116)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1117)).add_operation (GGS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1117)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1117)) ;
          const GGS_ipic_31__38_ComputedBraTerminator temp_8 = this ;
          const GGS_ipic_31__38_ComputedBraTerminator temp_9 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabels (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                      const GGS_string constinArgument_inBlockLabel,
                                                                                      const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_address_40118 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 1133)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1133)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1133)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1134)) ;
          }
        }
      }
      var_address_40118 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1136)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_address_40118 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1138)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
  UpEnumerator_lstringlist enumerator_40399 (temp_3.readProperty_mTargetLabels ()) ;
  while (enumerator_40399.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40399.current_mValue (HERE), var_address_40118, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1141)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1141)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        {
        extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, enumerator_40399.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1142)) ;
        }
      }
    }
    var_address_40118 = var_address_40118.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1144)) ;
    enumerator_40399.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                            GGS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_32_label_40915 = GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas3", 1155)) ;
  GGS_uint var_targetAddress_41005 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_40915, var_targetAddress_41005, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1156)) ;
  GGS_uint var_address_41032 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_41005, var_goto_32_label_40915, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1159)) ;
      var_address_41032 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1160)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_41005, var_goto_32_label_40915, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1162)) ;
    var_address_41032 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1163)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  UpEnumerator_lstringlist enumerator_41296 (temp_2.readProperty_mTargetLabels ()) ;
  while (enumerator_41296.hasCurrentObject ()) {
    GGS_uint var_labelAddress_41378 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41296.current_mValue (HERE), var_labelAddress_41378, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1166)) ;
    outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_41032, var_labelAddress_41378, enumerator_41296.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1167)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1167)) ;
    var_address_41032 = var_address_41032.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1168)) ;
    enumerator_41296.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedBraTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1179)) ;
        }
      }
      GGS_ipic_31__38_ComputedBraTerminator var_t_41843 = temp_1 ;
      const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 1180)).objectCompare (var_t_41843.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas3", 1180)))) ;
      const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_41970 (temp_3.readProperty_mTargetLabels ()) ;
      UpEnumerator_lstringlist enumerator_42003 (var_t_41843.readProperty_mTargetLabels ()) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_41970.hasCurrentObject () && enumerator_42003.hasCurrentObject () && bool_4) {
        while (enumerator_41970.hasCurrentObject () && enumerator_42003.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_41970.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_42003.current_mValue (HERE).readProperty_string ())) ;
          enumerator_41970.gotoNextObject () ;
          enumerator_42003.gotoNextObject () ;
          if (enumerator_41970.hasCurrentObject () && enumerator_42003.hasCurrentObject ()) {
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

GGS_string cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mConditionalBranch ().enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      result_outResult = GGS_string ("Z") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      result_outResult = GGS_string ("N") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      result_outResult = GGS_string ("C") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      result_outResult = GGS_string ("OV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      result_outResult = GGS_string ("NZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      result_outResult = GGS_string ("NN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      result_outResult = GGS_string ("NC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      result_outResult = GGS_string ("NOV") ;
    }
    break ;
  }
  result_outResult.plusAssignOperation(GGS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1211)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      result_outResult.plusAssignOperation(GGS_string ("(").add_operation (temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1213)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1213)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1213)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    result_outResult.plusAssignOperation(temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1215)) ;
  }
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1217)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      result_outResult.plusAssignOperation(GGS_string ("(").add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1219)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1219)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1219)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    result_outResult.plusAssignOperation(temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1221)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                                                   const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GGS_string constinArgument_inNextBlockLabel,
                                                                                                   GGS_uint & ioArgument_ioConversionCount,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  GGS_conditionalBranchMode var_branchModeOnFalseLabel_43747 = temp_0.readProperty_mBranchModeOnFalseLabel () ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  GGS_conditionalBranchMode var_branchModeOnTrueLabel_43830 = temp_1.readProperty_mBranchModeOnTrueLabel () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      switch (temp_4.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1240)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1240)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              var_branchModeOnFalseLabel_43747 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1241)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1242)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1242)).add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1242)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1242)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1242)) ;
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1245)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1245)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1245)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              var_branchModeOnFalseLabel_43747 = GGS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas3", 1246)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1247)).add_operation (GGS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1247)).add_operation (temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1247)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1247)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1247)) ;
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_12 = this ;
      test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
        switch (temp_13.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1254)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1254)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                var_branchModeOnTrueLabel_43830 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1255)) ;
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1256)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1256)).add_operation (temp_16.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1256)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1256)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1256)) ;
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            GalgasBool test_17 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_17) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1259)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1259)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1259)).boolEnum () ;
              if (GalgasBool::boolTrue == test_17) {
                var_branchModeOnTrueLabel_43830 = GGS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas3", 1260)) ;
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1261)).add_operation (GGS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1261)).add_operation (temp_19.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1261)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1261)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1261)) ;
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
      switch (temp_20.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
          switch (temp_21.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1270)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1270)).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  var_branchModeOnFalseLabel_43747 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1271)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1272)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1272)).add_operation (temp_24.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1272)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1272)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1272)) ;
                }
              }
              GalgasBool test_25 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1274)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1274)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1274)).boolEnum () ;
                if (GalgasBool::boolTrue == test_25) {
                  var_branchModeOnTrueLabel_43830 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1275)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1276)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1276)).add_operation (temp_27.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1276)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1276)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1276)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
          switch (temp_28.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_29 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_29) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1283)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1283)).boolEnum () ;
                if (GalgasBool::boolTrue == test_29) {
                  var_branchModeOnTrueLabel_43830 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1284)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1285)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1285)).add_operation (temp_31.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1285)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1285)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1285)) ;
                }
              }
              GalgasBool test_32 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_32) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1287)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1287)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1287)).boolEnum () ;
                if (GalgasBool::boolTrue == test_32) {
                  var_branchModeOnFalseLabel_43747 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1288)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1289)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1289)).add_operation (temp_34.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1289)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1289)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1289)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_35 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_35) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1292)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1292)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1292)).boolEnum () ;
                if (GalgasBool::boolTrue == test_35) {
                  var_branchModeOnFalseLabel_43747 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1293)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1294)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1294)).add_operation (temp_37.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1294)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1294)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1294)) ;
                }
              }
              GalgasBool test_38 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_38) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1296)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1296)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1296)).boolEnum () ;
                if (GalgasBool::boolTrue == test_38) {
                  var_branchModeOnTrueLabel_43830 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1297)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1298)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1298)).add_operation (temp_40.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1298)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1298)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1298)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              GalgasBool test_41 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_41) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1301)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1301)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1301)).boolEnum () ;
                if (GalgasBool::boolTrue == test_41) {
                  var_branchModeOnFalseLabel_43747 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1302)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1303)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1303)).add_operation (temp_43.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1303)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1303)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
          switch (temp_44.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_45 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_45) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1309)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1309)).boolEnum () ;
                if (GalgasBool::boolTrue == test_45) {
                  var_branchModeOnTrueLabel_43830 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1310)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1311)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1311)).add_operation (temp_47.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1311)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1311)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1311)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_48 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_48) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_49 = this ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1314)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1314)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1314)).boolEnum () ;
                if (GalgasBool::boolTrue == test_48) {
                  var_branchModeOnTrueLabel_43830 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas3", 1315)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_50 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1316)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1316)).add_operation (temp_50.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1316)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1316)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1316)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      }
    }
  }
  GalgasBool test_51 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_51) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_52 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_53 = this ;
    test_51 = GGS_bool (ComparisonKind::equal, var_branchModeOnFalseLabel_43747.objectCompare (temp_52.readProperty_mBranchModeOnFalseLabel ())).operator_and (GGS_bool (ComparisonKind::equal, var_branchModeOnTrueLabel_43830.objectCompare (temp_53.readProperty_mBranchModeOnTrueLabel ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1322)).boolEnum () ;
    if (GalgasBool::boolTrue == test_51) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_54 = this ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (GalgasBool::boolFalse == test_51) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_55 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_56 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_57 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_58 = this ;
    outArgument_outModifiedTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_55.readProperty_mInstructionLocation (), temp_56.readProperty_mConditionalBranch (), temp_57.readProperty_mTargetLabelWhenTrue (), var_branchModeOnTrueLabel_43830, temp_58.readProperty_mTargetLabelWhenFalse (), var_branchModeOnFalseLabel_43747, inCompiler COMMA_HERE) ;
    ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1332)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                          const GGS_string constinArgument_inBlockLabel,
                                                                                          const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GGS_string constinArgument_inNextBlockLabel,
                                                                                          GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_4.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1347)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1347)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1348)) ;
              }
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
            test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_7.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1351)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1351)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1351)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1352)) ;
              }
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        switch (temp_11.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
              test_12 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_13.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1359)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1359)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1360)) ;
                }
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
              test_15 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_16.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1363)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1363)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1363)).boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_17.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1364)) ;
                }
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      switch (temp_18.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
          switch (temp_19.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_20 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_20) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
                test_20 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_21.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1373)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1373)).boolEnum () ;
                if (GalgasBool::boolTrue == test_20) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1374)) ;
                  }
                }
              }
              GalgasBool test_23 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_23) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                test_23 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_24.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1376)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1376)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1376)).boolEnum () ;
                if (GalgasBool::boolTrue == test_23) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_25.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1377)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
          switch (temp_26.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_27 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_27) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
                test_27 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_28.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1384)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1384)).boolEnum () ;
                if (GalgasBool::boolTrue == test_27) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_29.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1385)) ;
                  }
                }
              }
              GalgasBool test_30 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_30) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                test_30 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_31.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1387)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1387)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1387)).boolEnum () ;
                if (GalgasBool::boolTrue == test_30) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_32.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1388)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_33 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_33) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                test_33 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_34.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1391)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1391)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1391)).boolEnum () ;
                if (GalgasBool::boolTrue == test_33) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_35.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1392)) ;
                  }
                }
              }
              GalgasBool test_36 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_36) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                test_36 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_37.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1394)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1394)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1394)).boolEnum () ;
                if (GalgasBool::boolTrue == test_36) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_38.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1395)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              GalgasBool test_39 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_39) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                test_39 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_40.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1398)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1398)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1398)).boolEnum () ;
                if (GalgasBool::boolTrue == test_39) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_41.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1399)) ;
                  }
                }
              }
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
          switch (temp_42.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_43 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_43) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
                test_43 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_44.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1405)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1405)).boolEnum () ;
                if (GalgasBool::boolTrue == test_43) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_45.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1407)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_46 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_46) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                test_46 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_47.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1410)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1410)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas3", 1410)).boolEnum () ;
                if (GalgasBool::boolTrue == test_46) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_48.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1412)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
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

GGS_uint cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          result_outSize = GGS_uint (uint32_t (2U)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          result_outSize = GGS_uint (uint32_t (4U)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          result_outSize = GGS_uint (uint32_t (6U)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
        switch (temp_5.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            result_outSize = GGS_uint (uint32_t (2U)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            result_outSize = GGS_uint (uint32_t (4U)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          {
            result_outSize = GGS_uint (uint32_t (6U)) ;
          }
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      switch (temp_6.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          switch (temp_7.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (4U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          switch (temp_8.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              result_outSize = GGS_uint (uint32_t (4U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (8U)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          switch (temp_9.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (8U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (10U)) ;
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
//Overriding extension method '@ipic18ConditionalJumpTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                                const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                const GGS_string constinArgument_inNextBlockLabel,
                                                                                GGS_codeList & outArgument_outCode,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueTargetAddress_55110 ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabelWhenTrue (), var_trueTargetAddress_55110, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1467)) ;
  GGS_uint var_falseTargetAddress_55195 ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabelWhenFalse (), var_falseTargetAddress_55195, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1468)) ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  GGS_lstring var_Zlabel_55221 = GGS_lstring::init_21__21_ (GGS_string ("_Bcc_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_terminators.galgas3", 1469)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1469)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      switch (temp_5.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_55195, temp_6.readProperty_mTargetLabelWhenFalse (), temp_7.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1473)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1475)), var_Zlabel_55221, temp_8.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1475)) ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1476)), var_falseTargetAddress_55195, temp_9.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1476)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1476)) ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1477)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1479)), var_Zlabel_55221, temp_10.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1479)) ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_55195, temp_11.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1480)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1480)) ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1481)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1481)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
      test_12 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
        switch (temp_14.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_55110, temp_15.readProperty_mTargetLabelWhenTrue (), temp_16.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1486)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1488)), var_Zlabel_55221, temp_17.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1488)) ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1489)), var_trueTargetAddress_55110, temp_18.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1489)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1489)) ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1490)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1490)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1492)), var_Zlabel_55221, temp_19.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1492)) ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_55110, temp_20.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1493)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1493)) ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1494)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1494)) ;
          }
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
      switch (temp_21.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
          switch (temp_22.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_55195, temp_23.readProperty_mTargetLabelWhenFalse (), temp_24.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1501)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1502)), var_trueTargetAddress_55110, temp_25.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1502)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1502)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_55195, temp_26.readProperty_mTargetLabelWhenFalse (), temp_27.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1504)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_55110, temp_28.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1505)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1505)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
          switch (temp_29.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_55110, temp_30.readProperty_mTargetLabelWhenTrue (), temp_31.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1510)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1511)), var_falseTargetAddress_55195, temp_32.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1511)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1511)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1513)), var_Zlabel_55221, temp_33.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1513)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1514)), var_falseTargetAddress_55195, temp_34.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1514)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1514)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1515)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1515)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_55110, temp_35.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1516)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1516)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1518)), var_Zlabel_55221, temp_36.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1518)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1519)), var_falseTargetAddress_55195, temp_37.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1519)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1519)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1520)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1520)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_55110, temp_38.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1521)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1521)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
          switch (temp_39.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_55110, temp_40.readProperty_mTargetLabelWhenTrue (), temp_41.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1526)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_55195, temp_42.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1527)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1527)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1529)), var_Zlabel_55221, temp_43.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1529)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_55195, temp_44.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1530)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1530)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1531)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1531)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1532)), var_trueTargetAddress_55110, temp_45.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1532)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1532)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1534)), var_Zlabel_55221, temp_46.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1534)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_55195, temp_47.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1535)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1535)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_55221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1536)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1536)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_55110, temp_48.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1537)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1537)) ;
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

GGS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas3", 1550)) ;
        }
      }
      GGS_ipic_31__38_ConditionalJumpTerminator var_t_60479 = temp_1 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mConditionalBranch ().objectCompare (var_t_60479.readProperty_mConditionalBranch ())) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_t_60479.readProperty_mTargetLabelWhenTrue ().readProperty_string ())) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mBranchModeOnTrueLabel ().objectCompare (var_t_60479.readProperty_mBranchModeOnTrueLabel ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_t_60479.readProperty_mTargetLabelWhenFalse ().readProperty_string ())) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mBranchModeOnFalseLabel ().objectCompare (var_t_60479.readProperty_mBranchModeOnFalseLabel ())) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentWordAdress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioCurrentWordAdress = temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 25)) ;
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
  result_outIsReachable = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas3", 124)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 148)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 162)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 169)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GGS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GGS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 189)) ;
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
  GGS_uint var_currentAddress_7966 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_8132 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 203)).isValid ()) {
    uint32_t variant_8148 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 203)).uintValue () ;
    bool loop_8148 = true ;
    while (loop_8148) {
      loop_8148 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7966.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 204)))).operator_and (var_found_8132.operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 204)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 204)).isValid () ;
      if (loop_8148) {
        loop_8148 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7966.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 204)))).operator_and (var_found_8132.operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 204)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 204)).boolValue () ;
      }
      if (loop_8148 && (0 == variant_8148)) {
        loop_8148 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas3", 203)) ;
      }
      if (loop_8148) {
        variant_8148 -= 1 ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_baseline_5F_intermediate_5F_actualInstruction var_instr_8276 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7966, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 206)).ptr ())) ;
          if (nullptr == var_instr_8276.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8276 ;
            var_found_8132 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_currentAddress_7966.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 212)) ;
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
  outArgument_outReachedLabelSet = GGS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_optimizations.galgas3", 224)) ;
  GGS_uint var_currentAddress_9039 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_9205 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 230)).isValid ()) {
    uint32_t variant_9221 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 230)).uintValue () ;
    bool loop_9221 = true ;
    while (loop_9221) {
      loop_9221 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_9039.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 231)))).operator_and (var_found_9205.operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 231)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 231)).isValid () ;
      if (loop_9221) {
        loop_9221 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_9039.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 231)))).operator_and (var_found_9205.operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 231)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 231)).boolValue () ;
      }
      if (loop_9221 && (0 == variant_9221)) {
        loop_9221 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas3", 230)) ;
      }
      if (loop_9221) {
        variant_9221 -= 1 ;
        GGS_baseline_5F_intermediate_5F_instruction var_instruction_9346 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_9039, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 233)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_baseline_5F_intermediate_5F_actualInstruction var_instr_9436 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (var_instruction_9346.ptr ())) ;
          if (nullptr == var_instr_9436.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_9436 ;
            var_found_9205 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE var_instr_9711 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (var_instruction_9346.ptr ())) ;
            if (nullptr == var_instr_9711.ptr ()) {
              test_1 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_9711 ;
              var_found_9205 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var_instr_9898 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_9346.ptr ())) ;
              if (nullptr == var_instr_9898.ptr ()) {
                test_2 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_9898 ;
                outArgument_outReachedLabelSet.plusPlusAssignOperation (var_instr_9898.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 246)) ;
                var_currentAddress_9039.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 247)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              var_currentAddress_9039.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 249)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 531)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 531)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 531)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CODE OPTIMIZATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 532)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 532)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 532)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 532)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 533)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 533)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 533)) ;
  GGS_baselineSymbolTableForOptimizations var_symbolTable_21928 = GGS_baselineSymbolTableForOptimizations::init (inCompiler COMMA_HERE) ;
  UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21988 (ioArgument_ioGeneratedInstructionList) ;
  GGS_uint index_21983 (uint32_t (0)) ;
  while (enumerator_21988.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_21988.current_mInstruction (HERE).ptr (), var_symbolTable_21928, index_21983, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 537)) ;
    enumerator_21988.gotoNextObject () ;
    index_21983.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 536)) ;
  }
  GGS_bool var_optimizationsDone_22180 = GGS_bool (true) ;
  GGS_uint var_iteration_22217 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 542)).isValid ()) {
    uint32_t variant_22233 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas3", 542)).uintValue () ;
    bool loop_22233 = true ;
    while (loop_22233) {
      loop_22233 = var_optimizationsDone_22180.isValid () ;
      if (loop_22233) {
        loop_22233 = var_optimizationsDone_22180.boolValue () ;
      }
      if (loop_22233 && (0 == variant_22233)) {
        loop_22233 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas3", 542)) ;
      }
      if (loop_22233) {
        variant_22233 -= 1 ;
        var_optimizationsDone_22180 = GGS_bool (false) ;
        var_iteration_22217.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 546)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_iteration_22217.getter_string (SOURCE_FILE ("baseline_optimizations.galgas3", 547)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 547)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 547)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 547)) ;
        UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22449 (ioArgument_ioGeneratedInstructionList) ;
        GGS_uint index_22444 (uint32_t (0)) ;
        while (enumerator_22449.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE var_inst_22515 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (enumerator_22449.current_mInstruction (HERE).ptr ())) ;
            if (nullptr == var_inst_22515.ptr ()) {
              test_0 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_0) {
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) var_inst_22515.ptr (), index_22444, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22180, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 553)) ;
            }
          }
          if (GalgasBool::boolFalse == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              GGS_baseline_5F_intermediate_5F_GOTO var_inst_22806 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (enumerator_22449.current_mInstruction (HERE).ptr ())) ;
              if (nullptr == var_inst_22806.ptr ()) {
                test_1 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_1) {
                callExtensionMethod_optimizeGOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_inst_22806.ptr (), var_symbolTable_21928, index_22444, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22180, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 556)) ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                GGS_baseline_5F_intermediate_5F_JUMP var_inst_23044 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (enumerator_22449.current_mInstruction (HERE).ptr ())) ;
                if (nullptr == var_inst_23044.ptr ()) {
                  test_2 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_2) {
                  callExtensionMethod_optimizeJUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) var_inst_23044.ptr (), var_symbolTable_21928, index_22444, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22180, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 559)) ;
                }
              }
              if (GalgasBool::boolFalse == test_2) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  GGS_baseline_5F_intermediate_5F_CALL var_inst_23282 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_CALL *> (enumerator_22449.current_mInstruction (HERE).ptr ())) ;
                  if (nullptr == var_inst_23282.ptr ()) {
                    test_3 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_3) {
                    callExtensionMethod_optimizeCALL ((cPtr_baseline_5F_intermediate_5F_CALL *) var_inst_23282.ptr (), var_symbolTable_21928, index_22444, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22180, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 562)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_3) {
                  GalgasBool test_4 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_4) {
                    GGS_baseline_5F_intermediate_5F_JSR var_inst_23520 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JSR *> (enumerator_22449.current_mInstruction (HERE).ptr ())) ;
                    if (nullptr == var_inst_23520.ptr ()) {
                      test_4 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_4) {
                      callExtensionMethod_optimizeJSR ((cPtr_baseline_5F_intermediate_5F_JSR *) var_inst_23520.ptr (), var_symbolTable_21928, index_22444, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22180, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 565)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_4) {
                    GalgasBool test_5 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_5) {
                      GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition var_inst_23755 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (enumerator_22449.current_mInstruction (HERE).ptr ())) ;
                      if (nullptr == var_inst_23755.ptr ()) {
                        test_5 = GalgasBool::boolFalse ;
                      }
                      if (GalgasBool::boolTrue == test_5) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) var_inst_23755.ptr (), var_symbolTable_21928, index_22444, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22180, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 568)) ;
                      }
                    }
                  }
                }
              }
            }
          }
          enumerator_22449.gotoNextObject () ;
          index_22444.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 549)) ;
        }
        GGS_stringset var_referencedLabels_24101 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24142 (ioArgument_ioGeneratedInstructionList) ;
        while (enumerator_24142.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24142.current_mInstruction (HERE).ptr (), var_referencedLabels_24101, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 575)) ;
          enumerator_24142.gotoNextObject () ;
        }
        UpEnumerator_baselineSymbolTableForOptimizations enumerator_24273 (var_symbolTable_21928) ;
        while (enumerator_24273.hasCurrentObject ()) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_referencedLabels_24101.getter_hasKey (enumerator_24273.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 578)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 578)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              GGS_uint var_definitionLine_24400 ;
              var_symbolTable_21928.method_searchKey (enumerator_24273.current_lkey (HERE), var_definitionLine_24400, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 579)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (var_definitionLine_24400.getter_string (SOURCE_FILE ("baseline_optimizations.galgas3", 580)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 580)).add_operation (GGS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 580)).add_operation (enumerator_24273.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 580)).add_operation (GGS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 580)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 580)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), var_definitionLine_24400, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 581)) ;
              }
              {
              GGS_uint joker_24682 ; // Joker input parameter
              var_symbolTable_21928.setter_removeKey (enumerator_24273.current_lkey (HERE), joker_24682, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 582)) ;
              }
            }
          }
          enumerator_24273.gotoNextObject () ;
        }
        GGS_bool var_reachable_24748 = GGS_bool (true) ;
        GGS_bool var_skippingInstruction_24779 = GGS_bool (false) ;
        GGS_bool var_previousWasSkippingInstruction_24821 = GGS_bool (false) ;
        UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24869 (ioArgument_ioGeneratedInstructionList) ;
        GGS_uint index_24864 (uint32_t (0)) ;
        while (enumerator_24869.hasCurrentObject ()) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = var_reachable_24748.operator_or (var_previousWasSkippingInstruction_24821 COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 590)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              var_reachable_24748 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24869.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 591)) ;
              var_previousWasSkippingInstruction_24821 = var_skippingInstruction_24779 ;
              var_skippingInstruction_24779 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24869.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 593)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GGS_bool var_isLABEL_25200 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24869.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 595)) ;
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = var_isLABEL_25200.operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 596)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24869.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 596)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 596)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 596)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (index_24864.getter_string (SOURCE_FILE ("baseline_optimizations.galgas3", 597)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 597)).add_operation (GGS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 597)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 597)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), index_24864, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 598)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_8) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = var_isLABEL_25200.boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  var_reachable_24748 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24869.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 600)) ;
                  var_previousWasSkippingInstruction_24821 = GGS_bool (false) ;
                  var_skippingInstruction_24779 = GGS_bool (false) ;
                }
              }
            }
          }
          enumerator_24869.gotoNextObject () ;
          index_24864.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 589)) ;
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_optimizationsDone_22180.operator_not (SOURCE_FILE ("baseline_optimizations.galgas3", 606)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 607)) ;
            GGS_uint var_currentAddress_25812 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_25842 (ioArgument_ioGeneratedInstructionList) ;
            while (enumerator_25842.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_25842.current_mInstruction (HERE).ptr (), var_currentAddress_25812, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 611)) ;
              enumerator_25842.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Minimum code size: ").add_operation (var_currentAddress_25812.getter_string (SOURCE_FILE ("baseline_optimizations.galgas3", 613)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 613)).add_operation (GGS_string (" words\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 613)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 613)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_piccoloOptions_doNotReorderCluster ("piccoloOptions",
                                         "doNotReorderCluster",
                                         78,
                                         "no-relative-resolution",
                                         "Do not try to re order blocks for using relatives branches (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccoloOptions_doNotWarnRecursive ("piccoloOptions",
                                         "doNotWarnRecursive",
                                         82,
                                         "no-warning-on-recursive-routines",
                                         "Do not warn when there are recursive routines (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccoloOptions_generateGraphvizFiles ("piccoloOptions",
                                         "generateGraphvizFiles",
                                         71,
                                         "generate-graphviz-files",
                                         "Generate Graphviz files  containing block invocation, block sorting constraints, ...") ;

BoolCommandLineOption gOption_piccoloOptions_generateAssembly ("piccoloOptions",
                                         "generateAssembly",
                                         83,
                                         "asm",
                                         "Generate also an assembly language text file (with .asm extension)") ;

BoolCommandLineOption gOption_piccoloOptions_output_5F_C_5F_Array ("piccoloOptions",
                                         "output_C_Array",
                                         67,
                                         "output-c-files",
                                         "Generate output code in a C header file and C source file") ;

BoolCommandLineOption gOption_piccoloOptions_ouputListingFile ("piccoloOptions",
                                         "ouputListingFile",
                                         76,
                                         "list",
                                         "Output a list file") ;

BoolCommandLineOption gOption_piccoloOptions_performOptimizations ("piccoloOptions",
                                         "performOptimizations",
                                         79,
                                         "optimize",
                                         "Perform code optimizations") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_piccoloOptions_optimizationFlags ("piccoloOptions",
                                         "optimizationFlags",
                                         0,
                                         "optimization-flags",
                                         "Fine tuning of optimizations (PIC18 compiler only)",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList?&?'
//
//--------------------------------------------------------------------------------------------------

void routine_displayBlockList_3F__26__3F_ (const GGS_string constinArgument_inTitle,
                                           GGS_string & ioArgument_ioListFileContents,
                                           const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 38)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 38)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 38)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (constinArgument_inTitle.getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 39)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 39)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 39)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 39)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 40)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 40)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_1365 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_1360 (uint32_t (0)) ;
  while (enumerator_1365.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_1429 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_1360.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 43)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_display_block_list.galgas3", 43)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_1429 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1360.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 44)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 44)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_1429 = GGS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1365.current_mBlock (HERE), var_nextBlockLabel_1429, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 48)) ;
    enumerator_1365.gotoNextObject () ;
    index_1360.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas3", 41)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBCC'
//
//--------------------------------------------------------------------------------------------------

GGS_bool function_pic_31__38__5F_checkBCC (const GGS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                           const GGS_lstring & constinArgument_inTargetLabel,
                                           const GGS_uint & constinArgument_inCurrentAddress,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outDisplacementOK ; // Returned variable
  GGS_uint var_targetAddress_18736 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_18736, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 513)) ;
  GGS_sint var_displacement_18763 = var_targetAddress_18736.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 514)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 514)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 514)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 514)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 514)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 514)) ;
  result_outDisplacementOK = GGS_bool (ComparisonKind::lowerOrEqual, var_displacement_18763.objectCompare (GGS_sint (int32_t (127L)))).operator_and (GGS_bool (ComparisonKind::greaterOrEqual, var_displacement_18763.objectCompare (GGS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 515)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_checkBCC [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_checkBCC (Compiler * inCompiler,
                                                                     const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution operand0 = GGS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_uint operand2 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

GGS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const GGS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                    const GGS_lstring & constinArgument_inTargetLabel,
                                                    const GGS_uint & constinArgument_inCurrentAddress,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outDisplacementOK ; // Returned variable
  GGS_uint var_targetAddress_19271 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_19271, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 526)) ;
  GGS_sint var_displacement_19298 = var_targetAddress_19271.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 527)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 527)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 527)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 527)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 527)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 527)) ;
  result_outDisplacementOK = GGS_bool (ComparisonKind::lowerOrEqual, var_displacement_19298.objectCompare (GGS_sint (int32_t (1023L)))).operator_and (GGS_bool (ComparisonKind::greaterOrEqual, var_displacement_19298.objectCompare (GGS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 528)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_checkBRA_5F_RCALL [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution operand0 = GGS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_uint operand2 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

GGS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const GGS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                               const GGS_lstring & constinArgument_inTargetLabel,
                                                               const GGS_uint & constinArgument_inCurrentAddress,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint result_outDisplacement ; // Returned variable
  GGS_uint var_targetAddress_19772 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_19772, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 538)) ;
  result_outDisplacement = var_targetAddress_19772.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 539)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 539)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 539)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 539)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 539)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 539)) ;
//---
  return result_outDisplacement ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (Compiler * inCompiler,
                                                                                         const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                         const GGS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution operand0 = GGS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_uint operand2 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

GGS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const GGS_uint & constinArgument_inConditionalBranchInstructionAddress,
                                                                 const GGS_uint & constinArgument_inTargetAddress,
                                                                 const GGS_lstring & constinArgument_inTargetLabel,
                                                                 const GGS_conditional_5F_branch & constinArgument_inConditionalBranch,
                                                                 const GGS_bool & constinArgument_inComplemented,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_sint var_displacement_20348 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 555)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 555)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 555)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 555)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 555)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 555)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_displacement_20348.objectCompare (GGS_sint (int32_t (127L)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_displacement_20348.objectCompare (GGS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 556)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GGS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 557)) ;
    }
  }
  GGS_conditional_5F_branch var_conditionalBranch_20637 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inComplemented.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      switch (constinArgument_inConditionalBranch.enumValue ()) {
      case GGS_conditional_5F_branch::Enumeration::invalid:
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bz:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("ipic18_block_representation.galgas3", 563)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnz:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("ipic18_block_representation.galgas3", 564)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bn:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("ipic18_block_representation.galgas3", 565)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnn:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("ipic18_block_representation.galgas3", 566)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bc:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("ipic18_block_representation.galgas3", 567)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnc:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("ipic18_block_representation.galgas3", 568)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bov:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("ipic18_block_representation.galgas3", 569)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnov:
        {
          var_conditionalBranch_20637 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("ipic18_block_representation.galgas3", 570)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    var_conditionalBranch_20637 = constinArgument_inConditionalBranch ;
  }
  GGS_uint var_baseCode_21275 ;
  GGS_string var_mnemonic_21298 ;
  switch (var_conditionalBranch_20637.enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (57344U)) ;
      var_mnemonic_21298 = GGS_string ("BZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (57600U)) ;
      var_mnemonic_21298 = GGS_string ("BNZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (58880U)) ;
      var_mnemonic_21298 = GGS_string ("BN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (59136U)) ;
      var_mnemonic_21298 = GGS_string ("BNN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (57856U)) ;
      var_mnemonic_21298 = GGS_string ("BC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (58112U)) ;
      var_mnemonic_21298 = GGS_string ("BNC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (58368U)) ;
      var_mnemonic_21298 = GGS_string ("BOV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      var_baseCode_21275 = GGS_uint (uint32_t (58624U)) ;
      var_mnemonic_21298 = GGS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (var_mnemonic_21298, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 589)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 589)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 589)), GGS_uintlist::class_func_listWithValue (var_baseCode_21275.operator_or (var_displacement_20348.operator_and (GGS_sint (int32_t (255L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 590)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 590)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 590))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 590))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 588)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code [6] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_conditional_5F_branch,
  & kTypeDescriptor_GALGAS_bool,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                       const GGS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_conditional_5F_branch operand3 = GGS_conditional_5F_branch::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                       inCompiler
                                                                                       COMMA_THERE) ;
  const GGS_bool operand4 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
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

GGS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const GGS_uint & constinArgument_inRCALLinstructionAddress,
                                                                   const GGS_uint & constinArgument_inTargetAddress,
                                                                   const GGS_lstring & constinArgument_inTargetLabel,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_sint var_displacement_22173 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 600)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 600)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 600)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 600)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 600)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 600)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_displacement_22173.objectCompare (GGS_sint (int32_t (1023L)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_displacement_22173.objectCompare (GGS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 601)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GGS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_22173.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas3", 602)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 602)).add_operation (GGS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 602)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 603)).add_operation (GGS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 603)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 602)) ;
    }
  }
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 606)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (55296U)).operator_or (var_displacement_22173.operator_and (GGS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 607)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 607)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 607))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 607))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 605)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                         const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                         const GGS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

GGS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const GGS_uint & constinArgument_inRCALLinstructionAddress,
                                                                 const GGS_uint & constinArgument_inTargetAddress,
                                                                 const GGS_lstring & constinArgument_inTargetLabel,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_sint var_displacement_22920 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 617)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 617)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 617)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 617)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 617)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 617)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_displacement_22920.objectCompare (GGS_sint (int32_t (1023L)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_displacement_22920.objectCompare (GGS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 618)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GGS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_22920.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas3", 619)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 619)).add_operation (GGS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 619)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 620)).add_operation (GGS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 620)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 619)) ;
    }
  }
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 623)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (53248U)).operator_or (var_displacement_22920.operator_and (GGS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 624)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 624)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 624))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 624))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 622)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                       const GGS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

GGS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const GGS_uint & constinArgument_inTargetAddress,
                                                                  const GGS_lstring & constinArgument_inTargetLabel,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_uintlist var_binaryCode_23619 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  var_binaryCode_23619.addAssignOperation (GGS_uint (uint32_t (60416U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 634)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 634)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 634)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 634))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 634)) ;
  var_binaryCode_23619.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 635)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 635)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 635))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 635)) ;
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 637)), var_binaryCode_23619  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 636)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                        const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                        const GGS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GGS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const GGS_uint & constinArgument_inTargetAddress,
                                                                  const GGS_lstring & constinArgument_inTargetLabel,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_uintlist var_binaryCode_24062 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  var_binaryCode_24062.addAssignOperation (GGS_uint (uint32_t (61184U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 648)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 648)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 648)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 648))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 648)) ;
  var_binaryCode_24062.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 649)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 649)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 649))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 649)) ;
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 651)), var_binaryCode_24062  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 650)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                        const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                        const GGS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GGS_codeList function_pic_31__38__5F_definition_5F_label (const GGS_lstring & constinArgument_inTargetLabel,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  result_outCode = GGS_codeList::class_func_listWithValue (constinArgument_inTargetLabel.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 661)), GGS_uintlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 660)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_definition_5F_label [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_definition_5F_label (Compiler * inCompiler,
                                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 36)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outLength.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 37)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 39)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      result_outLength.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 40)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 49)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outLength = result_outLength.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 50)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 52)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      result_outLength = result_outLength.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas3", 53)) ;
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


