#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_intermediate_instruction_F generateAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_F::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction, object->mProperty_mRegisterDescription  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@baseline_intermediate_instruction_FB generateAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction, object->mProperty_mRegisterDescription, object->mProperty_mBitNumber  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_intermediate_instruction_BitTestSkip generateAssemblyCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mSkipIfSet, object->mProperty_mRegisterDescription, object->mProperty_mBitNumber  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_intermediate_WO_OPERAND generateAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                            const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                            GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_TRIS generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_TRIS * object = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_TRIS::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOperand, object->mProperty_mOpcode  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@baseline_intermediate_instruction_literalOperation generateAssemblyCode'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                              const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                              GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction, object->mProperty_mLiteralValue  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_intermediate_pseudo_LABEL generateAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                              const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                              GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_new (object->mProperty_mLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_intermediate_instruction_MNOP generateAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                  const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                  GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mOccurrenceFactor.getter_location (SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)), GALGAS_string ("No generated code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)) ;
  }
  GALGAS_uint var_idx_6804 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)).isValid ()) {
    uint32_t variant_6815 = object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)).uintValue () ;
    bool loop_6815 = true ;
    while (loop_6815) {
      loop_6815 = GALGAS_bool (kIsStrictInf, var_idx_6804.objectCompare (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 156)))).isValid () ;
      if (loop_6815) {
        loop_6815 = GALGAS_bool (kIsStrictInf, var_idx_6804.objectCompare (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_build_assembly_code.galgas", 156)))).boolValue () ;
      }
      if (loop_6815 && (0 == variant_6815)) {
        loop_6815 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)) ;
      }
      if (loop_6815) {
        variant_6815 -- ;
        ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (object->mProperty_mInstructionLocation, GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_NOP (SOURCE_FILE ("baseline_build_assembly_code.galgas", 160))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158)) ;
        var_idx_6804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 161)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_GOTO generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_JUMP generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                                   const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  GALGAS_uint var_pageChangeFlags_7859 = object->mProperty_mCurrentPage.operator_xor (object->mProperty_mTargetPage COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 183)) ;
  GALGAS_uint var_targetPageFlags_7912 = object->mProperty_mTargetPage ;
  GALGAS_uint var_idx_7938 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
    uint32_t variant_7949 = GALGAS_uint ((uint32_t) 8U).uintValue () ;
    bool loop_7949 = true ;
    while (loop_7949) {
      loop_7949 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_7859.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_7949) {
        loop_7949 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_7859.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_7949 && (0 == variant_7949)) {
        loop_7949 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 186)) ;
      }
      if (loop_7949) {
        variant_7949 -- ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_7859.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_uint var_bitIndex_8043 ;
          const enumGalgasBool test_1 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 189)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_uint var_sliceIndex_8240 ;
            GALGAS_uint var_sliceSize_8271 ;
            constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 191)), var_sliceIndex_8240, var_sliceSize_8271, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 190)) ;
            const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_idx_7938.objectCompare (var_sliceSize_8271)).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error, idx (").add_operation (var_idx_7938.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (var_sliceSize_8271.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)) ;
            }
            var_bitIndex_8043 = var_sliceIndex_8240.add_operation (var_idx_7938, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 198)) ;
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_7938.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)).boolEnum () ;
            if (kBoolTrue == test_4) {
              GALGAS_uint var_sliceIndex_8680 ;
              GALGAS_uint var_sliceSize_8711 ;
              constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA").add_operation (var_idx_7938.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), var_sliceIndex_8680, var_sliceSize_8711, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 200)) ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_sliceSize_8711.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_8711.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), fixItArray6  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)) ;
              }
              var_bitIndex_8043 = var_sliceIndex_8680 ;
            }else if (kBoolFalse == test_4) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error, cannot solve page bit addressing"), fixItArray7  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 210)) ;
              var_bitIndex_8043.drop () ; // Release error dropped variable
            }
          }
          GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_targetPageFlags_7912.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
          }else if (kBoolFalse == test_9) {
            temp_8 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
          }
          ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, temp_8, constinArgument_inSTATUSregister, var_bitIndex_8043  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212)) ;
        }
        var_pageChangeFlags_7859 = var_pageChangeFlags_7859.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 218)) ;
        var_targetPageFlags_7912 = var_targetPageFlags_7912.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 219)) ;
        var_idx_7938 = var_idx_7938.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 220)) ;
      }
    }
  }
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_CALL generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_JSR generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                                  const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                                  GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  GALGAS_uint var_pageChangeFlags_10313 = object->mProperty_mCurrentPage.operator_xor (object->mProperty_mTargetPage COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 245)) ;
  GALGAS_uint var_targetPageFlags_10366 = object->mProperty_mTargetPage ;
  GALGAS_uint var_idx_10392 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_pageRestoreInstructions_10426 = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_build_assembly_code.galgas", 248)) ;
  if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
    uint32_t variant_10481 = GALGAS_uint ((uint32_t) 8U).uintValue () ;
    bool loop_10481 = true ;
    while (loop_10481) {
      loop_10481 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10313.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_10481) {
        loop_10481 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10313.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_10481 && (0 == variant_10481)) {
        loop_10481 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 249)) ;
      }
      if (loop_10481) {
        variant_10481 -- ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_pageChangeFlags_10313.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_uint var_bitIndex_10575 ;
          const enumGalgasBool test_1 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 252)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_uint var_sliceIndex_10772 ;
            GALGAS_uint var_sliceSize_10803 ;
            constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 254)), var_sliceIndex_10772, var_sliceSize_10803, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 253)) ;
            const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_idx_10392.objectCompare (var_sliceSize_10803)).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error, idx (").add_operation (var_idx_10392.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (var_sliceSize_10803.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)) ;
            }
            var_bitIndex_10575 = var_sliceIndex_10772.add_operation (var_idx_10392, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 261)) ;
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_10392.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)).boolEnum () ;
            if (kBoolTrue == test_4) {
              GALGAS_uint var_sliceIndex_11212 ;
              GALGAS_uint var_sliceSize_11243 ;
              constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("PA").add_operation (var_idx_10392.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), var_sliceIndex_11212, var_sliceSize_11243, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 263)) ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_sliceSize_11243.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_11243.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), fixItArray6  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)) ;
              }
              var_bitIndex_10575 = var_sliceIndex_11212 ;
            }else if (kBoolFalse == test_4) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error, cannot solve page bit addressing"), fixItArray7  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 273)) ;
              var_bitIndex_10575.drop () ; // Release error dropped variable
            }
          }
          GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_targetPageFlags_10366.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
          }else if (kBoolFalse == test_9) {
            temp_8 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
          }
          ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, temp_8, constinArgument_inSTATUSregister, var_bitIndex_10575  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275)) ;
          GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_10 ;
          const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_targetPageFlags_10366.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_11) {
            temp_10 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
          }else if (kBoolFalse == test_11) {
            temp_10 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
          }
          var_pageRestoreInstructions_10426.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, temp_10, constinArgument_inSTATUSregister, var_bitIndex_10575  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280)) ;
        }
        var_pageChangeFlags_10313 = var_pageChangeFlags_10313.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 286)) ;
        var_targetPageFlags_10366 = var_targetPageFlags_10366.divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 287)) ;
        var_idx_10392 = var_idx_10392.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 288)) ;
      }
    }
  }
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290)) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12331 (var_pageRestoreInstructions_10426, kENUMERATION_UP) ;
  while (enumerator_12331.hasCurrentObject ()) {
    ioArgument_ioAssemblyInstructionList.addAssign_operation (enumerator_12331.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 294)) ;
    enumerator_12331.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_intermediate_incDecRegisterInCondition generateAssemblyCode'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                        const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                        GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mRegisterDescription, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304)) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_SKIP::constructor_new (object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311)) ;
  }
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (object->mProperty_mTargetLabel, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 317))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'build_baseline_assembly_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_baseline_5F_assembly_5F_code (const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                    const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                    const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                    GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_13977 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_13977.hasCurrentObject ()) {
    callExtensionMethod_generateAssemblyCode ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13977.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 333)) ;
    enumerator_13977.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_14193 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
  while (enumerator_14193.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_14193.current_mRegisterAddress (HERE).add_operation (enumerator_14193.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)) ;
    }
    {
    routine_emitCode (enumerator_14193.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 338)) ;
    }
    enumerator_14193.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitBaselineCodeAtWordAddress'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitBaselineCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                            GALGAS_uint & ioArgument_ioWordAddress,
                                            const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 15)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'emitNoBaselineCodeAtWordAddress'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitNoBaselineCodeAtWordAddress (const GALGAS_uint constinArgument_inWordAddress,
                                              const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 25)) ;
  callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 27)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_pseudo_LABEL enterLabelAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                         GALGAS_baseline_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                         GALGAS_uint & ioArgument_ioWordAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mProperty_mLabel, ioArgument_ioWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 54)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_assembly_pseudo_ORG enterLabelAtAddress'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                       GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                       GALGAS_uint & ioArgument_ioWordAddress,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  ioArgument_ioWordAddress = object->mProperty_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_assembly_actualInstruction enterLabelAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                           GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                           GALGAS_uint & ioArgument_ioWordAddress,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_actualInstruction * object = (const cPtr_baseline_5F_assembly_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
  const GALGAS_baseline_5F_assembly_5F_actualInstruction temp_0 = object ;
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_assembly_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction.mSlotID,
                                            extensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_actualInstruction_enterLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE generateBinaryCodeAtAddress'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                          const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                          GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  const enumGalgasBool test_0 = object->mProperty_mIsRegular.operator_and (GALGAS_bool (kIsNotEqual, ioArgument_ioWordAddress.operator_and (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("baseline_build_binary_code.galgas", 91)), GALGAS_string ("the 8th bit of the routine address is not 0; a regular routine should be begin in the first half of a page"), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 91)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_2 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 93)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE generateBinaryCodeAtAddress'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                        const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioWordAddress.objectCompare (object->mProperty_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)).add_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), GALGAS_string ("the routine is too large, it does not lie in page ").add_operation (object->mProperty_mPage.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (ioArgument_ioWordAddress.substract_operation (object->mProperty_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" word(s) in excess)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_2 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 105)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_assembly_pseudo_ORG generateBinaryCodeAtAddress'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioWordAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  ioArgument_ioWordAddress = object->mProperty_mOrigin ;
  {
  routine_setEmitAddress (object->mProperty_mOrigin.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 116)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_assembly_instruction_FD generateBinaryCodeAtAddress'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                   const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  GALGAS_uint var_code_4961 ;
  switch (object->mProperty_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 448U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 320U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 576U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 192U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 704U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 640U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 15360U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 256U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 512U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 832U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 768U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 128U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 896U) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      var_code_4961 = GALGAS_uint ((uint32_t) 384U) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = object->mProperty_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 143)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code_4961 = var_code_4961.operator_or (GALGAS_uint ((uint32_t) 32U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 144)) ;
  }
  var_code_4961 = var_code_4961.operator_or (object->mProperty_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 146)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_4961, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 147)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_assembly_instruction_F generateBinaryCodeAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                  const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  GALGAS_uint var_code_5907 ;
  switch (object->mProperty_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_5907 = GALGAS_uint ((uint32_t) 96U) ;
    }
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_5907 = GALGAS_uint ((uint32_t) 32U) ;
    }
    break ;
  }
  var_code_5907 = var_code_5907.operator_or (object->mProperty_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 161)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_5907, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 162)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_assembly_instruction_FB generateBinaryCodeAtAddress'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                   const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  GALGAS_uint var_code_6437 ;
  switch (object->mProperty_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_6437 = GALGAS_uint ((uint32_t) 1024U) ;
    }
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_6437 = GALGAS_uint ((uint32_t) 1280U) ;
    }
    break ;
  }
  var_code_6437 = var_code_6437.operator_or (object->mProperty_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 176)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) ;
  var_code_6437 = var_code_6437.operator_or (object->mProperty_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_6437, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 178)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_assembly_instruction_BitTestSkip generateBinaryCodeAtAddress'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                            const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code_7019 ;
  const enumGalgasBool test_0 = object->mProperty_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code_7019 = GALGAS_uint ((uint32_t) 1792U) ;
  }else if (kBoolFalse == test_0) {
    var_code_7019 = GALGAS_uint ((uint32_t) 1536U) ;
  }
  var_code_7019 = var_code_7019.operator_or (object->mProperty_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 194)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) ;
  var_code_7019 = var_code_7019.operator_or (object->mProperty_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_7019, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 196)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_GOTO generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_GOTO * object = (const cPtr_baseline_5F_assembly_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_GOTO) ;
  GALGAS_uint var_targetAddress_7627 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_targetAddress_7627, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 206)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2560U).operator_or (var_targetAddress_7627.operator_and (GALGAS_uint ((uint32_t) 511U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_GOTO_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_SKIP generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_SKIP * object = (const cPtr_baseline_5F_assembly_5F_SKIP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_SKIP) ;
  {
  const GALGAS_baseline_5F_assembly_5F_SKIP temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2560U).operator_or (ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)).operator_and (GALGAS_uint ((uint32_t) 511U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_SKIP_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_CALL generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_CALL * object = (const cPtr_baseline_5F_assembly_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_CALL) ;
  GALGAS_uint var_targetAddress_8415 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_targetAddress_8415, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 228)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_CALL temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (GALGAS_uint ((uint32_t) 2304U).operator_or (var_targetAddress_8415.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 230)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_CALL_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@baseline_assembly_incDecRegisterInCondition generateBinaryCodeAtAddress'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                           const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_code_8871 ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code_8871 = GALGAS_uint ((uint32_t) 960U) ;
  }else if (kBoolFalse == test_0) {
    var_code_8871 = GALGAS_uint ((uint32_t) 704U) ;
  }
  const enumGalgasBool test_1 = object->mProperty_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 245)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code_8871 = var_code_8871.operator_or (GALGAS_uint ((uint32_t) 32U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 246)) ;
  }
  var_code_8871 = var_code_8871.operator_or (object->mProperty_mRegisterDescription.getter_mRegisterAddress (SOURCE_FILE ("baseline_build_binary_code.galgas", 248)).operator_and (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_2 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_8871, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 249)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_assembly_WO_OPERAND generateBinaryCodeAtAddress'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                               const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioWordAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  GALGAS_uint var_code_9456 ;
  switch (object->mProperty_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 64U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 2U) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP:
    {
      var_code_9456 = GALGAS_uint ((uint32_t) 3U) ;
    }
    break ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_9456, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 266)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_TRIS generateBinaryCodeAtAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_uint & ioArgument_ioWordAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_TRIS * object = (const cPtr_baseline_5F_assembly_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_TRIS) ;
  {
  const GALGAS_baseline_5F_assembly_5F_TRIS temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (object->mProperty_mOpcode, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 275)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_TRIS_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@baseline_assembly_instruction_literalOperation generateBinaryCodeAtAddress'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                                 const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code_10379 ;
  switch (object->mProperty_mInstruction.enumValue ()) {
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3072U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_10379 = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  }
  var_code_10379 = var_code_10379.operator_or (object->mProperty_mLiteralValue COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 292)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = object ;
  routine_emitBaselineCodeAtWordAddress (var_code_10379, ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 293)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@baseline_assembly_pseudo_LABEL generateBinaryCodeAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                 const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress_10955 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mProperty_mLabel, var_targetAddress_10955, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetAddress_10955.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLabel.getter_location (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), GALGAS_string ("Internal second pass error: the '").add_operation (object->mProperty_mLabel.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (var_targetAddress_10955.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 306)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 307)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_2 = object ;
  routine_emitNoBaselineCodeAtWordAddress (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 309)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                                                    extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'build_baseline_binary_code'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_baseline_5F_binary_5F_code (const GALGAS_baseline_5F_assembly_5F_instructionList constinArgument_inAssemblyInstructionList,
                                                  const GALGAS_uint constinArgument_inROMsize,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  GALGAS_uint & outArgument_outUsedROMsize,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GALGAS_baseline_5F_symbolTable var_symbolTable_12007 = GALGAS_baseline_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("baseline_build_binary_code.galgas", 324)) ;
  GALGAS_uint var_currentWordAddress_12068 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12111 (constinArgument_inAssemblyInstructionList, kENUMERATION_UP) ;
  while (enumerator_12111.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12111.current_mInstruction (HERE).ptr (), var_symbolTable_12007, var_currentWordAddress_12068, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 327)) ;
    enumerator_12111.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_12226 = var_currentWordAddress_12068 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12068 ;
  var_currentWordAddress_12068 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
  }
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12434 (constinArgument_inAssemblyInstructionList, kENUMERATION_UP) ;
  while (enumerator_12434.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12434.current_mInstruction (HERE).ptr (), var_symbolTable_12007, ioArgument_ioListFileContents, var_currentWordAddress_12068, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 335)) ;
    {
    routine_checkCurrentEmitAddress (var_currentWordAddress_12068.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)) ;
    }
    enumerator_12434.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_12226.objectCompare (var_currentWordAddress_12068)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12068.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (var_lastAddressForFirstPass_12226.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 344)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_12226.objectCompare (constinArgument_inROMsize)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12226.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 348)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_instruction_IF_BitTest addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) object->mProperty_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_IF_SEMI_COLON addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) object->mProperty_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_IF_IncDec addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) object->mProperty_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_JUMP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JUMP * object = (const cPtr_midrange_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_GOTO addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_GOTO * object = (const cPtr_midrange_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_GOTO) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_CALL addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CALL * object = (const cPtr_midrange_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CALL) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CALL_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_instruction_FOREVER addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FOREVER * object = (const cPtr_midrange_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FOREVER) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mProperty_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 54)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_STATIC_REPEAT addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mProperty_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 61)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_MNOP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@midrange_instruction_F addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_F_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_F_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_CLRW addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CLRW_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_instruction_CLRWDT addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_instruction_SLEEP addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_FB addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FB_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FB_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_NOP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_NOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_instruction_banksel addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_banksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrangeInstruction_checkbank addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank.mSlotID,
                                        extensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checkbank_addUsedRoutines (defineExtensionMethod_midrangeInstruction_5F_checkbank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrangeInstruction_checknobank addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank.mSlotID,
                                        extensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checknobank_addUsedRoutines (defineExtensionMethod_midrangeInstruction_5F_checknobank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_instruction_banksel_register addUsedRoutines'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_do_while addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_do_5F_while * object = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mProperty_mRepeatedInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 134)) ;
  }
  cEnumerator_midrange_5F_partList enumerator_4317 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_4317.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_4317.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 136)) ;
    }
    enumerator_4317.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_nobanksel addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_instruction_savebank addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_savebank * object = (const cPtr_midrange_5F_instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_savebank) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mProperty_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 150)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_savebank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_structured_if addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_structured_5F_if * object = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mProperty_mThenInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 157)) ;
  }
  {
  routine_addMidRangeUsedRoutinesFromInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 158)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_FD addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FD_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_FD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_instruction_JSR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JSR * object = (const cPtr_midrange_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_instruction_literalOperation addUsedRoutines'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'addMidRangeUsedRoutinesFromInstructionList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addMidRangeUsedRoutinesFromInstructionList (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_midrange_5F_instructionList enumerator_6043 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_6043.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) enumerator_6043.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 186)) ;
    enumerator_6043.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'midrange_computeUsedRoutines'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_midrange_5F_computeUsedRoutines (const GALGAS_midrange_5F_interruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                           const GALGAS_midrange_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 197)) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_6562 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_6562.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_6562.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 200)) ;
    }
    enumerator_6562.gotoNextObject () ;
  }
  GALGAS_stringset var_s_6727 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_used_routines.galgas", 206)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).isValid ()) {
    uint32_t variant_6757 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).uintValue () ;
    bool loop_6757 = true ;
    while (loop_6757) {
      loop_6757 = GALGAS_bool (kIsNotEqual, var_s_6727.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6757) {
        loop_6757 = GALGAS_bool (kIsNotEqual, var_s_6727.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6757 && (0 == variant_6757)) {
        loop_6757 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas", 207)) ;
      }
      if (loop_6757) {
        variant_6757 -- ;
        var_s_6727 = result_outUsedRoutineSet ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_6891 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_6891.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_6891.current_mRoutineName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 211)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_6891.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 212)) ;
            }
          }
          enumerator_6891.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_midrange_5F_computeUsedRoutines [3] = {
  & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList,
  & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_midrange_5F_computeUsedRoutines (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_midrange_5F_interruptDefinitionList operand0 = GALGAS_midrange_5F_interruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                         inCompiler
                                                                                                                         COMMA_THERE) ;
  const GALGAS_midrange_5F_routineDefinitionList operand1 = GALGAS_midrange_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_midrange_5F_computeUsedRoutines (operand0,
                                                   operand1,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_midrange_5F_computeUsedRoutines ("midrange_computeUsedRoutines",
                                                                                 functionWithGenericHeader_midrange_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 2,
                                                                                 functionArgs_midrange_5F_computeUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@midrange_intermediate_NULL instructionLength'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_NULL_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_NULL_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@midrange_intermediate_pseudo_ORG instructionLength'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@midrange_intermediate_pseudo_LABEL instructionLength'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@midrange_intermediate_actualInstruction instructionLength'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_actualInstruction_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@midrange_intermediate_JUMP instructionLength'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mBit_31__31_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 36)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 37)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mBit_31__32_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 39)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outLength.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 40)) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JUMP_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@midrange_intermediate_JSR instructionLength'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mBit_31__31_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 49)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength = result_outLength.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mBit_31__32_.objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 52)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outLength = result_outLength.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 53)) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JSR_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_JSR_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@midrange_intermediate_instruction_MNOP instructionLength'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  result_outLength = object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 61)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_MNOP_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@midrange_intermediate_incDecRegisterInCondition instructionLength'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 3U) ;
  }else if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 2U) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (void) {
  enterExtensionGetter_instructionLength (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          extensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength (defineExtensionGetter_midrange_5F_intermediate_5F_incDecRegisterInCondition_instructionLength, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_NULL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_NULL_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 11)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_NULL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_print (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@midrange_intermediate_pseudo_ORG print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (object->mProperty_mOrigin.getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_intermediate_pseudo_LABEL print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mLabel.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_instruction_FD print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mInstruction_5F_FD_5F_base_5F_code, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)) ;
  const enumGalgasBool test_0 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_instruction_F print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mFinstruction, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_instruction_FB print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_intermediate_instruction_BitTestSkip print'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  const enumGalgasBool test_0 = object->mProperty_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 57)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 59)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_JUMP print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_JUMP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_print (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_GOTO print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_GOTO_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_print (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_CALL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_CALL_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_CALL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_print (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@midrange_intermediate_JSR print'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_JSR_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_print (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_CLRWDT print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_instruction_CLRW print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_instruction_NOP print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_RETURN print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_RETFIE print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_instruction_SLEEP print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_literalOperation print'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (object->mProperty_mLiteralValue.getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_instruction_MNOP print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)).getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_incDecRegisterInCondition print'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 153)) ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 155)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 157)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)) ;
  const enumGalgasBool test_1 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 161)) ;
  }
  const enumGalgasBool test_2 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 164)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 166)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mProperty_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_intermediate_pseudo_ORG setCurrentAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_uint & ioArgument_ioCurrentAddress,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioCurrentAddress = object->mProperty_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_setCurrentAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                          GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_structured_if instructionUsesGOTOorCALL'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                                   GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_instruction_CALL instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_CALL_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_instruction_JSR instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                      GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_JSR_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_instruction_GOTO instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_instruction_JUMP instructionUsesGOTOorCALL'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                                       GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (void) {
  enterExtensionMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                                  extensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_instructionUsesGOTOorCALL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleMidrangeInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleMidrangeInstructionList (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
                                            const GALGAS_routineMap constinArgument_inRoutineMap,
                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            const GALGAS_uint constinArgument_inTotalBankCount,
                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                            const GALGAS_bool constinArgument_inShouldPreserveBank,
                                            GALGAS_bool & outArgument_outContinuesInSequence,
                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GALGAS_bool (true) ;
  cEnumerator_midrange_5F_instructionList enumerator_2948 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2948.hasCurrentObject ()) {
    const enumGalgasBool test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 89)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2948.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
      outArgument_outContinuesInSequence = GALGAS_bool (true) ;
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) enumerator_2948.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 93)) ;
    enumerator_2948.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                               const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                               const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_nobanksel * object = (const cPtr_midrange_5F_instruction_5F_nobanksel *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_nobanksel) ;
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 126)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_nobanksel_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_savebank build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                              const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                              GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                                              const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                              GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                              const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                              GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                              const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_savebank * object = (const cPtr_midrange_5F_instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_savebank) ;
  GALGAS_registerExpression var_STATUS_5F_register_5002 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 151))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 148)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5195 ;
  GALGAS_bitSliceTable joker_5375 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_5002.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 156)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5195, joker_5375, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 154)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5520 ;
  GALGAS_bitSliceTable joker_5692 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegister.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 167)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5520, joker_5692, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 165)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mProperty_mInstructionLocation, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 177)), var_STATUS_5F_IPICregisterDescription_5195, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mProperty_mInstructionLocation, GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 183)), var_save_5F_IPICregisterDescription_5520  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181)) ;
  GALGAS_uint var_finalBank_6237 = ioArgument_ioCurrentBank ;
  {
  routine_handleMidrangeInstructionList (object->mProperty_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6237, GALGAS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 187)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 202)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does reach the end of \"savebank\" instruction list"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 203)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mProperty_mInstructionLocation, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 208)), var_save_5F_IPICregisterDescription_5520, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mProperty_mInstructionLocation, GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 214)), var_STATUS_5F_IPICregisterDescription_5195  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_savebank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_instruction_banksel build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                             GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                                             const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                             const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                             GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_banksel * object = (const cPtr_midrange_5F_instruction_5F_banksel *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_banksel) ;
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 234)) ;
  }
  GALGAS_registerExpression var_STATUS_5F_register_8030 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 240))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 237)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8224 ;
  GALGAS_bitSliceTable var_bitSliceTable_8255 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_8030.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8224, var_bitSliceTable_8255, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 244)) ;
  GALGAS_lstring var_RP_8467 = GALGAS_lstring::constructor_new (GALGAS_string ("RP"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 253)) ;
  GALGAS_uint var_rpIndex_8563 ;
  GALGAS_uint var_sliceSize_8584 ;
  var_bitSliceTable_8255.method_searchKey (var_RP_8467, var_rpIndex_8563, var_sliceSize_8584, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 254)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_sliceSize_8584.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8584.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 259)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const enumGalgasBool test_5 = object->mProperty_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticWarning (object->mProperty_mBankIndex.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)) ;
    }
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 263)).objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mBankIndex.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), GALGAS_string ("the bank ").add_operation (object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 265)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_uint var_n_9287 = constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 266)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 266)) ;
        GALGAS_uint var_shiftedBank_9354 = object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 267)) ;
        GALGAS_uint var_idx_9388 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_8584.isValid ()) {
          uint32_t variant_9401 = var_sliceSize_8584.uintValue () ;
          bool loop_9401 = true ;
          while (loop_9401) {
            loop_9401 = GALGAS_bool (kIsStrictInf, var_idx_9388.objectCompare (var_sliceSize_8584)).isValid () ;
            if (loop_9401) {
              loop_9401 = GALGAS_bool (kIsStrictInf, var_idx_9388.objectCompare (var_sliceSize_8584)).boolValue () ;
            }
            if (loop_9401 && (0 == variant_9401)) {
              loop_9401 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 269)) ;
            }
            if (loop_9401) {
              variant_9401 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_9473 ;
              const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_shiftedBank_9354.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 271)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_op_9473 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 272)) ;
              }else if (kBoolFalse == test_10) {
                var_op_9473 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 274)) ;
              }
              ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, var_op_9473, var_STATUS_5F_IPICregisterDescription_8224, var_rpIndex_8563.add_operation (var_idx_9388, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 280))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 276))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 276)) ;
              var_idx_9388.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)) ;
              var_shiftedBank_9354 = var_shiftedBank_9354.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 282)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 284)) ;
      }else if (kBoolFalse == test_9) {
        GALGAS_bool var_optimize_9937 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) ;
        GALGAS_uint var_shiftedBank_10013 = object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 287)) ;
        GALGAS_uint var_shiftedXorBank_10058 = object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 288)).operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 288)) ;
        GALGAS_uint var_idx_10108 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_8584.isValid ()) {
          uint32_t variant_10121 = var_sliceSize_8584.uintValue () ;
          bool loop_10121 = true ;
          while (loop_10121) {
            loop_10121 = GALGAS_bool (kIsStrictInf, var_idx_10108.objectCompare (var_sliceSize_8584)).isValid () ;
            if (loop_10121) {
              loop_10121 = GALGAS_bool (kIsStrictInf, var_idx_10108.objectCompare (var_sliceSize_8584)).boolValue () ;
            }
            if (loop_10121 && (0 == variant_10121)) {
              loop_10121 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 290)) ;
            }
            if (loop_10121) {
              variant_10121 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_10193 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_shiftedBank_10013.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 292)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_op_10193 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 293)) ;
              }else if (kBoolFalse == test_11) {
                var_op_10193 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 295)) ;
              }
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_shiftedXorBank_10058.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_optimize_9937.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)).boolEnum () ;
              if (kBoolTrue == test_12) {
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, var_op_10193, var_STATUS_5F_IPICregisterDescription_8224, var_rpIndex_8563.add_operation (var_idx_10108, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 302))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 298))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 298)) ;
              }else if (kBoolFalse == test_12) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10193, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_8563.add_operation (var_idx_10108, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 306)) ;
              }
              var_idx_10108.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)) ;
              var_shiftedBank_10013 = var_shiftedBank_10013.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)) ;
              var_shiftedXorBank_10058 = var_shiftedXorBank_10058.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 310)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 312)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_banksel_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                                         const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                                         GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_banksel_5F_register * object = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 332)) ;
  }
  GALGAS_registerExpression var_STATUS_5F_register_11819 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 338))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 335)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12142 ;
  GALGAS_bitSliceTable var_bitSliceTable_12180 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_11819.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12142, var_bitSliceTable_12180, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 340)) ;
  GALGAS_lstring var_RP_12215 = GALGAS_lstring::constructor_new (GALGAS_string ("RP"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 349)) ;
  GALGAS_uint var_rpIndex_12311 ;
  GALGAS_uint var_sliceSize_12332 ;
  var_bitSliceTable_12180.method_searchKey (var_RP_12215, var_rpIndex_12311, var_sliceSize_12332, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_sliceSize_12332.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12332.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 352)) ;
  }
  GALGAS_uintlist var_registerAddressList_12649 ;
  GALGAS_uint var_size_12669 ;
  GALGAS_registerProtection var_protection_12697 ;
  GALGAS_bitSliceTable joker_12675_2 ; // Joker input parameter
  GALGAS_string joker_12675_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 356)), var_registerAddressList_12649, var_size_12669, joker_12675_2, joker_12675_1, var_protection_12697, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 355)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 362)), GALGAS_bool (false), var_protection_12697, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 362)) ;
  GALGAS_uint var_address_12840 ;
  var_registerAddressList_12649.method_first (var_address_12840, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)) ;
  GALGAS_uint var_newBank_12861 = var_address_12840.right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 364)) ;
  GALGAS_sint_36__34_ var_offset_12961 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRegister.getter_mOffset (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 366)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_12961, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 366)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_offset_12961.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)), GALGAS_string ("index value (").add_operation (var_offset_12961.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)).add_operation (GALGAS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsSupOrEqual, var_offset_12961.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)).objectCompare (var_size_12669)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)), GALGAS_string ("maximum index value is ").add_operation (var_size_12669.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 370)) ;
    }
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_newBank_12861.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = object->mProperty_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticWarning (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 375)) ;
    }
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsSupOrEqual, var_newBank_12861.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
    if (kBoolTrue == test_11) {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)), GALGAS_string ("the bank ").add_operation (var_newBank_12861.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)) ;
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 379)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_uint var_n_13715 = constinArgument_inTotalBankCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 380)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 380)) ;
        GALGAS_uint var_shiftedBank_13782 = var_newBank_12861 ;
        GALGAS_uint var_idx_13806 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_12332.isValid ()) {
          uint32_t variant_13819 = var_sliceSize_12332.uintValue () ;
          bool loop_13819 = true ;
          while (loop_13819) {
            loop_13819 = GALGAS_bool (kIsStrictInf, var_idx_13806.objectCompare (var_sliceSize_12332)).isValid () ;
            if (loop_13819) {
              loop_13819 = GALGAS_bool (kIsStrictInf, var_idx_13806.objectCompare (var_sliceSize_12332)).boolValue () ;
            }
            if (loop_13819 && (0 == variant_13819)) {
              loop_13819 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 383)) ;
            }
            if (loop_13819) {
              variant_13819 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_13891 ;
              const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_shiftedBank_13782.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_op_13891 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 386)) ;
              }else if (kBoolFalse == test_14) {
                var_op_13891 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 388)) ;
              }
              ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, var_op_13891, var_STATUS_5F_IPICregisterDescription_12142, var_rpIndex_12311.add_operation (var_idx_13806, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 390))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 390)) ;
              var_idx_13806.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 395)) ;
              var_shiftedBank_13782 = var_shiftedBank_13782.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 396)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_12861 ;
      }else if (kBoolFalse == test_13) {
        GALGAS_bool var_optimize_14345 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) ;
        GALGAS_uint var_shiftedBank_14421 = var_newBank_12861 ;
        GALGAS_uint var_shiftedXorBank_14456 = var_newBank_12861.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 402)) ;
        GALGAS_uint var_idx_14496 = GALGAS_uint ((uint32_t) 0U) ;
        if (var_sliceSize_12332.isValid ()) {
          uint32_t variant_14509 = var_sliceSize_12332.uintValue () ;
          bool loop_14509 = true ;
          while (loop_14509) {
            loop_14509 = GALGAS_bool (kIsStrictInf, var_idx_14496.objectCompare (var_sliceSize_12332)).isValid () ;
            if (loop_14509) {
              loop_14509 = GALGAS_bool (kIsStrictInf, var_idx_14496.objectCompare (var_sliceSize_12332)).boolValue () ;
            }
            if (loop_14509 && (0 == variant_14509)) {
              loop_14509 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 404)) ;
            }
            if (loop_14509) {
              variant_14509 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_14581 ;
              const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, var_shiftedBank_14421.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 406)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_15) {
                var_op_14581 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 407)) ;
              }else if (kBoolFalse == test_15) {
                var_op_14581 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)) ;
              }
              const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_shiftedXorBank_14456.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_optimize_14345.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 411)).boolEnum () ;
              if (kBoolTrue == test_16) {
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, var_op_14581, var_STATUS_5F_IPICregisterDescription_12142, var_rpIndex_12311.add_operation (var_idx_14496, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 412))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 412)) ;
              }else if (kBoolFalse == test_16) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14581, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 419)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_12311.add_operation (var_idx_14496, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)) ;
              }
              var_idx_14496.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)) ;
              var_shiftedBank_14421 = var_shiftedBank_14421.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 423)) ;
              var_shiftedXorBank_14456 = var_shiftedXorBank_14456.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 424)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_12861 ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_banksel_5F_register_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_FD build_midrange_ipic_instructionList'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                        const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                        GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                        const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                        GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                        const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                        GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FD) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16205 ;
  GALGAS_bitSliceTable joker_16211 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16205, joker_16211, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 445)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction_5F_FD_5F_base_5F_code, var_IPICregisterDescription_16205, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 454))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 454)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FD_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_instruction_F build_midrange_ipic_instructionList'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                       const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                       GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                       const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                       GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                       const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                       GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                       const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_F * object = (const cPtr_midrange_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_F) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17118 ;
  GALGAS_bitSliceTable joker_17279 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17118, joker_17279, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 478)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mFAinstruction, var_IPICregisterDescription_17118  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 487))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 487)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_F_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_FB build_midrange_ipic_instructionList'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                        const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                        GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                        const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                        GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                        const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                        GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FB) ;
  GALGAS_bitSliceTable var_bitSliceTable_18115 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18183 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18183, var_bitSliceTable_18115, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 512)) ;
  GALGAS_uint var_bitNumber_18401 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18115, var_bitNumber_18401, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 522)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mBitOrientedOp, var_IPICregisterDescription_18183, var_bitNumber_18401  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 529))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 529)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FB_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_JSR build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                         const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                         const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                         GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JSR * object = (const cPtr_midrange_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JSR) ;
  GALGAS_bool var_isNoReturn_19386 ;
  GALGAS_uint var_requiredBank_19407 ;
  GALGAS_uint var_returnedBank_19428 ;
  GALGAS_bool var_preservesBank_19450 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_19386, var_requiredBank_19407, var_returnedBank_19428, var_preservesBank_19450, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_19407.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_19407.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 558)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_19644 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)).add_operation (var_requiredBank_19407.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 559)) ;
    var_errorMessage_19644.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 560)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 561)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_19644.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 562)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_19644.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 564)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 566)), var_errorMessage_19644, fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 566)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_19386.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 569)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 569)) ;
  }
  const enumGalgasBool test_5 = var_preservesBank_19450.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 571)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioCurrentBank = var_returnedBank_19428 ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 578)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 579))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 575))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 575)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_JSR_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                           GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                           const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                           GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                           const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrangeInstruction_5F_checkbank * object = (const cPtr_midrangeInstruction_5F_checkbank *) inObject ;
  macroValidSharedObject (object, cPtr_midrangeInstruction_5F_checkbank) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mBankIndex.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("Bank index should be <= 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 599)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 600)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 601)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (object->mProperty_mBankIndex)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)).add_operation (object->mProperty_mBankIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 603)) ;
      }
    }
  }
  ioArgument_ioCurrentBank = object->mProperty_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank.mSlotID,
                                                                     extensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrangeInstruction_5F_checkbank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                             const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                             const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                             GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                             const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                             const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                             GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                             GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrangeInstruction_5F_checknobank * object = (const cPtr_midrangeInstruction_5F_checknobank *) inObject ;
  macroValidSharedObject (object, cPtr_midrangeInstruction_5F_checknobank) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 624)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 625)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 626)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank.mSlotID,
                                                                     extensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrangeInstruction_5F_checknobank_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                          GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CALL * object = (const cPtr_midrange_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CALL) ;
  GALGAS_bool var_isNoReturn_22974 ;
  GALGAS_uint var_requiredBank_22995 ;
  GALGAS_uint var_returnedBank_23016 ;
  GALGAS_bool var_preservesBank_23038 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_22974, var_requiredBank_22995, var_returnedBank_23016, var_preservesBank_23038, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 650)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_22995.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_22995.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_23232 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)).add_operation (var_requiredBank_22995.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 652)) ;
    var_errorMessage_23232.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 653)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 654)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_23232.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_23232.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 657)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 659)), var_errorMessage_23232, fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 659)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_22974.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 662)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 662)) ;
  }
  const enumGalgasBool test_5 = var_preservesBank_23038.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 664)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioCurrentBank = var_returnedBank_23016 ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 668))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 668)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CALL_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                          GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_JUMP * object = (const cPtr_midrange_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_JUMP) ;
  GALGAS_bool var_isNoReturn_24581 ;
  GALGAS_uint var_requiredBank_24602 ;
  GALGAS_uint joker_24670 ; // Joker input parameter
  GALGAS_bool joker_24673 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_24581, var_requiredBank_24602, joker_24670, joker_24673, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 691)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_24602.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_24602.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_24773 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)).add_operation (var_requiredBank_24602.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 693)) ;
    var_errorMessage_24773.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 694)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 695)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_24773.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 696)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_24773.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 698)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 698)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 700)), var_errorMessage_24773, fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 700)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_24581.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 702)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 703)), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 703)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 710)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 711))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 707))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 707)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_JUMP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                          GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_GOTO * object = (const cPtr_midrange_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_GOTO) ;
  GALGAS_bool var_isNoReturn_26163 ;
  GALGAS_uint var_requiredBank_26184 ;
  GALGAS_uint joker_26252 ; // Joker input parameter
  GALGAS_bool joker_26255 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_26163, var_requiredBank_26184, joker_26252, joker_26255, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 732)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_26184.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_26184.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 733)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_26355 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)).add_operation (var_requiredBank_26184.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 734)) ;
    var_errorMessage_26355.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 735)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 736)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_26355.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 737)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_26355.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 739)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 739)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 739)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 741)), var_errorMessage_26355, fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 741)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_26163.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 743)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 744)), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 744)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 748))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 748)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_GOTO_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                            const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                            GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                            const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CLRWDT * object = (const cPtr_midrange_5F_instruction_5F_CLRWDT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::constructor_new (object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 768))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 768)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CLRWDT_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                          GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                          GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_CLRW * object = (const cPtr_midrange_5F_instruction_5F_CLRW *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_CLRW) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::constructor_new (object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 787))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 787)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_CLRW_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                         GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                         const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                         GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_NOP * object = (const cPtr_midrange_5F_instruction_5F_NOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_NOP) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::constructor_new (object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 806))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 806)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_NOP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                           GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                           const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                           GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                           const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_SLEEP * object = (const cPtr_midrange_5F_instruction_5F_SLEEP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_SLEEP) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::constructor_new (object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 825))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 825)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_SLEEP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                                      GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                      const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_literalOperation) ;
  GALGAS_sint_36__34_ var_result_30785 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30785, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 844)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_30785.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_30785.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 846)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_30785.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 847)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mLiteralInstruction, var_result_30785.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 853)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 853)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 853))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 850))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 850)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_literalOperation_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                          GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                          GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 872)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mOccurrenceFactor.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 873)), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 873)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOccurrenceFactor  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 876))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 876)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_MNOP_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                             const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                             GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                             GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                                             const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                             const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                             GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                             const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_FOREVER * object = (const cPtr_midrange_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_FOREVER) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray0  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 898)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 901)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_33050 = ioArgument_ioCurrentBank ;
  GALGAS_string var_label_30__33083 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 905)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 906)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__33083, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)) ;
  {
  routine_handleMidrangeInstructionList (object->mProperty_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33050, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 908)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33050)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstructionList, GALGAS_string ("instruction list does not leave bank selection unchanged"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 924)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_30__33083, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 929))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 927))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 927)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_FOREVER_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                      GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                      const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                                      const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                                      GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  GALGAS_sint_36__34_ var_lowerBound_34666 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34666, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 950)) ;
  GALGAS_sint_36__34_ var_upperBound_34771 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_34771, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 951)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound_34666.objectCompare (var_upperBound_34771)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound_34666.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)).add_operation (var_upperBound_34771.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 954)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_upperBound_34771.substract_operation (var_lowerBound_34666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 955)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound_34771.substract_operation (var_lowerBound_34666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 956)) ;
    }
  }
  GALGAS_uint var_finalBank_35164 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_35202 = constinArgument_inConstantMap ;
  {
  var_tempConstantMap_35202.setter_insertKey (object->mProperty_mConstantName, var_lowerBound_34666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 961)) ;
  }
  {
  routine_handleMidrangeInstructionList (object->mProperty_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35202, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35164, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 962)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35164)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstruction, GALGAS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 978)) ;
  }
  const enumGalgasBool test_6 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 980)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstruction, GALGAS_string ("enclosed instruction list contains an endless loop"), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 981)) ;
  }
  GALGAS_sint_36__34_ var_idx_35902 = var_lowerBound_34666.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 984)) ;
  if (var_upperBound_34771.substract_operation (var_lowerBound_34666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).isValid ()) {
    uint32_t variant_35926 = var_upperBound_34771.substract_operation (var_lowerBound_34666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).uintValue () ;
    bool loop_35926 = true ;
    while (loop_35926) {
      GALGAS_bool test_8 = GALGAS_bool (kIsInfOrEqual, var_idx_35902.objectCompare (var_upperBound_34771)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_35926 = test_8.isValid () ;
      if (loop_35926) {
        loop_35926 = test_8.boolValue () ;
      }
      if (loop_35926 && (0 == variant_35926)) {
        loop_35926 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 985)) ;
      }
      if (loop_35926) {
        variant_35926 -- ;
        GALGAS_constantMap var_constantMap_36039 = constinArgument_inConstantMap ;
        {
        var_constantMap_36039.setter_insertKey (object->mProperty_mConstantName, var_idx_35902, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 987)) ;
        }
        {
        routine_handleMidrangeInstructionList (object->mProperty_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36039, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 988)) ;
        }
        var_idx_35902.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1003)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                   const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                   GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                   const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                                   const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                                   GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                   const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  GALGAS_bitSliceTable var_bitSliceTable_37113 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37181 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37181, var_bitSliceTable_37113, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1024)) ;
  GALGAS_uint var_bitNumber_37399 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37113, var_bitNumber_37399, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1034)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mSkipIfSet, var_IPICregisterDescription_37181, var_bitNumber_37399  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1041))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1041)) ;
  GALGAS_bool var_unusedContinuesInSequence_37761 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) object->mProperty_mInstruction.ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_37761, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1049)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                    const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                    const GALGAS_uint constinArgument_inCurrentBank,
                                                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                    GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                    const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                    const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                    const GALGAS_string constinArgument_inTargetLabel,
                                                                                                    GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                    GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_incDecRegisterInCondition) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39535 ;
  GALGAS_bitSliceTable joker_39696 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39535, joker_39696, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1102)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_IPICregisterDescription_39535, constinArgument_inTargetLabel, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination, object->mProperty_mBranchIfZero.operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1118))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1112))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition.mSlotID,
                                                         extensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_incDecRegisterInCondition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                       const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                       GALGAS_uint & outArgument_outInstructionCount,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1126)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 3U) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 2U) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition.mSlotID,
                                                            extensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_incDecRegisterInCondition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                          const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                          const GALGAS_uint constinArgument_inCurrentBank,
                                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                          GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                          const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                          const GALGAS_location constinArgument_inInstructionLocation,
                                                                                          const GALGAS_string constinArgument_inTargetLabel,
                                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_negateCondition * object = (const cPtr_midrange_5F_negateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_negateCondition) ;
  callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mCondition.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1153)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_negateCondition.mSlotID,
                                                         extensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_negateCondition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                             const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                             GALGAS_uint & outArgument_outInstructionCount,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_negateCondition * object = (const cPtr_midrange_5F_negateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_negateCondition) ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mCondition.ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1168)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1167)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_negateCondition.mSlotID,
                                                            extensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_negateCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_negateCondition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                       const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                       const GALGAS_uint constinArgument_inCurrentBank,
                                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                       GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                       const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                       const GALGAS_location constinArgument_inInstructionLocation,
                                                                                       const GALGAS_string constinArgument_inTargetLabel,
                                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_andCondition * object = (const cPtr_midrange_5F_andCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_andCondition) ;
  const enumGalgasBool test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
  if (kBoolTrue == test_0) {
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1188)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1201)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__42785 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1215)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1215)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1215)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__42785, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1216)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1229)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__42785, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1242)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1242))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1242)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_andCondition.mSlotID,
                                                         extensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_andCondition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_andCondition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                          const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                          GALGAS_uint & outArgument_outInstructionCount,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_andCondition * object = (const cPtr_midrange_5F_andCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_andCondition) ;
  GALGAS_uint var_countLeft_43865 ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inComplementaryBranch, var_countLeft_43865, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1252)) ;
  GALGAS_uint var_countRight_43985 ;
  callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inComplementaryBranch, var_countRight_43985, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1257)) ;
  outArgument_outInstructionCount = var_countLeft_43865.add_operation (var_countRight_43985, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1261)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_andCondition.mSlotID,
                                                            extensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_andCondition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_andCondition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                         const GALGAS_uint constinArgument_inCurrentBank,
                                                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                         const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                                         const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                         const GALGAS_string constinArgument_inTargetLabel,
                                                                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  GALGAS_bitSliceTable var_bitSliceTable_44750 ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_44818 ;
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_44818, var_bitSliceTable_44750, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1280)) ;
  GALGAS_uint var_bitNumber_45036 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_44750, var_bitNumber_45036, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1290)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_44818, var_bitNumber_45036  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1297))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1297)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1305)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1306)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1307))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1303))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1303)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (void) {
  enterExtensionMethod_buildIPICinstructionForCondition (kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                         extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition (defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_buildIPICinstructionForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * /* inObject */,
                                                                                                                            const GALGAS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                            GALGAS_uint & outArgument_outInstructionCount,
                                                                                                                            C_Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GALGAS_uint ((uint32_t) 2U) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (void) {
  enterExtensionMethod_computeInstructionCountForCondition (kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                            extensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition (defineExtensionMethod_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_computeInstructionCountForCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                      GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                      const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                                      const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                                      GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_structured_5F_if * object = (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
  GALGAS_bool var_generateComplementaryCondition_46538 = GALGAS_bool (false) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_directCount_46665 ;
    callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mIfCondition.ptr (), GALGAS_bool (true), var_directCount_46665, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1337)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_directCount_46665.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1339)) ;
    }
    GALGAS_uint var_complementaryCount_46839 ;
    callExtensionMethod_computeInstructionCountForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mIfCondition.ptr (), GALGAS_bool (false), var_complementaryCount_46839, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1341)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mProperty_mThenInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1342)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_complementaryCount_46839.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1343)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_complementaryCount_46839.objectCompare (var_directCount_46665)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_generateComplementaryCondition_46538 = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).add_operation (GALGAS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).add_operation (var_directCount_46665.substract_operation (var_complementaryCount_46839, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1348)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)).add_operation (GALGAS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1348)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1347)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_directCount_46665.substract_operation (var_complementaryCount_46839, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1349)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1350)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1352)) ;
    }
  }
  GALGAS_uint var_elseBranchFinalBank_47458 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_47502 = ioArgument_ioCurrentBank ;
  GALGAS_bool var_elseContinuesInSequence_47550 ;
  GALGAS_bool var_thenContinuesInSequence_47582 ;
  const enumGalgasBool test_5 = var_generateComplementaryCondition_46538.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_label_5F_nextCondition_47662 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1361)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_47756 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1362)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1362)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mIfCondition.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mProperty_mInstructionLocation, var_label_5F_nextCondition_47662, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1364)) ;
    {
    routine_handleMidrangeInstructionList (object->mProperty_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47458, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47550, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1378)) ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mProperty_mThenInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1394)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47756, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_47662, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1397)) ;
    {
    routine_handleMidrangeInstructionList (object->mProperty_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47502, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47582, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1398)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mProperty_mThenInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1413)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_47756, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1414)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1414))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1414)) ;
    }
  }else if (kBoolFalse == test_5) {
    GALGAS_string var_label_5F_nextCondition_49592 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1418)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_49686 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1419)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1419)) ;
    callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) object->mProperty_mIfCondition.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mProperty_mInstructionLocation, var_label_5F_nextCondition_49592, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1421)) ;
    {
    routine_handleMidrangeInstructionList (object->mProperty_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47502, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47582, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1435)) ;
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49686, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_49592, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1454)) ;
    {
    routine_handleMidrangeInstructionList (object->mProperty_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47458, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47550, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1455)) ;
    }
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1470)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_49686, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1471)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1471))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1471)) ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_47458.objectCompare (var_thenBranchFinalBank_47502)).boolEnum () ;
  if (kBoolTrue == test_10) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank_47458 ;
  }else if (kBoolFalse == test_10) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1477)) ;
    var_elseBranchFinalBank_47458 = GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1478)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47582.operator_or (var_elseContinuesInSequence_47550 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1481)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_structured_5F_if_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                 const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                 GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                 const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                 GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                                 const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                                 GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                 const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_do_5F_while * object = (const cPtr_midrange_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
  GALGAS_string var_labelInstructionBegin_52486 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_52486, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1502)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1502))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1502)) ;
  GALGAS_uint var_finalBank_52752 = ioArgument_ioCurrentBank ;
  {
  routine_handleMidrangeInstructionList (object->mProperty_mRepeatedInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_52752, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1505)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_52752)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1521)) ;
  }
  cEnumerator_midrange_5F_partList enumerator_53296 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_53296.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_53296.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1525)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_53296.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mProperty_mInstructionLocation, var_labelInstructionBegin_52486, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1526)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_nextBranchLabel_53733 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1540)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1540)) ;
      callExtensionMethod_buildIPICinstructionForCondition ((const cPtr_midrange_5F_conditionExpression *) enumerator_53296.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mProperty_mInstructionLocation, var_nextBranchLabel_53733, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1541)) ;
      GALGAS_uint var_bank_54152 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList (enumerator_53296.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54152, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1555)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54152)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_53296.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1571)) ;
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (var_labelInstructionBegin_52486, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_53733, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1574)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1574))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1574)) ;
    }
    enumerator_53296.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_do_5F_while_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                                                                  const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                  const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                  GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                  GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                  const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                  GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                                  const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                  const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_55655 ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode_55655 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1597)) ;
  }else if (kBoolFalse == test_0) {
    var_baseCode_55655 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1599)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_55878 ;
  GALGAS_bitSliceTable joker_56039 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_55878, joker_56039, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1603)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mProperty_mInstructionLocation, var_baseCode_55655, var_IPICregisterDescription_55878, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1613))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1613)) ;
  GALGAS_bool var_unusedContinuesInSequence_56284 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) object->mProperty_mInstruction.ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56284, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1621)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  enterExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                                                     extensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_IncDec_build_5F_midrange_5F_ipic_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'build_midrange_assembly_instruction_list'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (const GALGAS_uint constinArgument_inTotalPageCount,
                                                                   const GALGAS_uint constinArgument_inTotalBankCount,
                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                   const GALGAS_string constinArgument_inSharedRAMBankName,
                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                   const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                   const GALGAS_bool constinArgument_inHasInterrupt,
                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  GALGAS_string var_generationOptimizationMessages_57189 = GALGAS_string::makeEmptyString () ;
  GALGAS_routineMap var_routineMap_57263 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_57340 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1654)), kENUMERATION_UP) ;
  while (enumerator_57340.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_57340.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1655)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1655)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57340.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1655)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1655)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_57340.current_mRequiredBank (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_57340.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57340.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_57340.current_mReturnedBank (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
    }
    {
    var_routineMap_57263.setter_insertKey (enumerator_57340.current_mRoutineName (HERE), enumerator_57340.current_mIsNoReturn (HERE), enumerator_57340.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)), enumerator_57340.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)), enumerator_57340.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)) ;
    }
    enumerator_57340.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_4) {
    {
    routine_print_5F_constant_5F_definition (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1679)) ;
    }
  }
  const enumGalgasBool test_5 = var_routineMap_57263.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1685)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bool var_isNoReturn_58896 ;
    GALGAS_uint var_requiredBank_58920 ;
    GALGAS_uint joker_58922 ; // Joker input parameter
    GALGAS_bool joker_58925 ; // Joker input parameter
    var_routineMap_57263.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686)), var_isNoReturn_58896, var_requiredBank_58920, joker_58922, joker_58925, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686)) ;
    GALGAS_location var_mainDeclarationLocation_58969 = var_routineMap_57263.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1687)) ;
    const enumGalgasBool test_6 = var_isNoReturn_58896.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1688)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (var_mainDeclarationLocation_58969, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1689)) ;
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_58920.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (var_mainDeclarationLocation_58969, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1692)) ;
    }
  }else if (kBoolFalse == test_5) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mEndOfProgram (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1695)), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1695)) ;
  }
  GALGAS_uint var_localLabelIndex_59542 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_handleInterruptRoutine (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57263, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57189, var_localLabelIndex_59542, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1699)) ;
  }
  GALGAS_uint var_currentPage_59964 = GALGAS_uint ((uint32_t) 0U) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_59975 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_59975 = true ;
    while (loop_59975) {
      loop_59975 = GALGAS_bool (kIsStrictInf, var_currentPage_59964.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_59975) {
        loop_59975 = GALGAS_bool (kIsStrictInf, var_currentPage_59964.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_59975 && (0 == variant_59975)) {
        loop_59975 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1716)) ;
      }
      if (loop_59975) {
        variant_59975 -- ;
        GALGAS_bool var_orgGenerated_60057 = GALGAS_bool (kIsEqual, var_currentPage_59964.objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_60155 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1718)), kENUMERATION_UP) ;
        while (enumerator_60155.hasCurrentObject ()) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_60155.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719)).objectCompare (var_currentPage_59964)).boolEnum () ;
          if (kBoolTrue == test_11) {
            const enumGalgasBool test_12 = var_orgGenerated_60057.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).boolEnum () ;
            if (kBoolTrue == test_12) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (var_currentPage_59964.multiply_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)) ;
              var_orgGenerated_60057 = GALGAS_bool (true) ;
            }
            GALGAS_bool var_continuesInSequence_60413 ;
            GALGAS_uint var_currentBank_60439 = enumerator_60155.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1725)) ;
            GALGAS_routineKind var_routineKind_60495 ;
            const enumGalgasBool test_13 = enumerator_60155.current_mIsNoReturn (HERE).boolEnum () ;
            if (kBoolTrue == test_13) {
              var_routineKind_60495 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
            }else if (kBoolFalse == test_13) {
              var_routineKind_60495 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730)) ;
            }
            outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_60155.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732)) ;
            {
            routine_handleMidrangeInstructionList (enumerator_60155.current_mInstructionList (HERE), var_routineMap_57263, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_59542, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57189, constinArgument_inTotalBankCount, var_currentBank_60439, enumerator_60155.current_mPreservesBank (HERE), var_continuesInSequence_60413, var_routineKind_60495, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1733)) ;
            }
            const enumGalgasBool test_14 = enumerator_60155.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_60155.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_60439.objectCompare (enumerator_60155.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1748)).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_60155.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_60155.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)) ;
            }
            const enumGalgasBool test_16 = enumerator_60155.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_60413 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1751)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_60155.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1752)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1752)) ;
            }
            const enumGalgasBool test_18 = enumerator_60155.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1755)).boolEnum () ;
            if (kBoolTrue == test_18) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (enumerator_60155.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1756))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1756))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1756)) ;
            }
          }
          enumerator_60155.gotoNextObject () ;
        }
        var_currentPage_59964.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1760)) ;
      }
    }
  }
  const enumGalgasBool test_19 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_19) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1766)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1766)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1766)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1767)) ;
    GALGAS_uint var_idx_62248 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_currentAddress_62277 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62324 (outArgument_outGeneratedInstructionList, kENUMERATION_UP) ;
    while (enumerator_62324.hasCurrentObject ()) {
      callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62324.current_mInstruction (HERE).ptr (), var_currentAddress_62277, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_idx_62248.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)) ;
      callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62324.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1774)) ;
      var_idx_62248.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1775)) ;
      enumerator_62324.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1777)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62277.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).add_operation (GALGAS_string (" instructions.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'interruptRoutineShouldSavePCLATH'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_interruptRoutineShouldSavePCLATH (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                               const GALGAS_uint constinArgument_inTotalPageCount,
                                               GALGAS_string & ioArgument_ioListFileContents,
                                               GALGAS_bool & outArgument_outShouldSavePCLATH,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outShouldSavePCLATH.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1789)) ;
  outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_63139 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1792)), kENUMERATION_UP) ;
  while (enumerator_63139.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_63139.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1793)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outShouldSavePCLATH = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, enumerator_63139.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1796)).objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_63139.current_mPage (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)), GALGAS_string ("invalid value (").add_operation (enumerator_63139.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1797)) ;
    }
    enumerator_63139.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1800)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1801)) ;
  }
  const enumGalgasBool test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
    cEnumerator_midrange_5F_interruptDefinitionList enumerator_63702 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)), kENUMERATION_UP) ;
    bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)).isValidAndTrue () ;
    if (enumerator_63702.hasCurrentObject () && bool_5) {
      while (enumerator_63702.hasCurrentObject () && bool_5) {
        cEnumerator_midrange_5F_instructionList enumerator_63769 (enumerator_63702.current_mInstructionList (HERE), kENUMERATION_UP) ;
        bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1807)).isValidAndTrue () ;
        if (enumerator_63769.hasCurrentObject () && bool_6) {
          while (enumerator_63769.hasCurrentObject () && bool_6) {
            callExtensionMethod_instructionUsesGOTOorCALL ((const cPtr_midrange_5F_instruction *) enumerator_63769.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1808)) ;
            enumerator_63769.gotoNextObject () ;
            if (enumerator_63769.hasCurrentObject ()) {
              bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1807)).isValidAndTrue () ;
            }
          }
        }
        enumerator_63702.gotoNextObject () ;
        if (enumerator_63702.hasCurrentObject ()) {
          bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1812)) ;
    }else if (kBoolFalse == test_7) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1814)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'handleInterruptRoutine'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleInterruptRoutine (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                     const GALGAS_bool constinArgument_inHasInterrupt,
                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                     const GALGAS_string constinArgument_inSharedRAMBankName,
                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                     const GALGAS_uint constinArgument_inTotalBankCount,
                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                     const GALGAS_uint constinArgument_inTotalPageCount,
                                     GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                     GALGAS_string & ioArgument_ioListFileContents,
                                     GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outGeneratedInstructionList = GALGAS_midrange_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1841)) ;
  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1844)), GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1845))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1845)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1846)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1847))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1843))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1843)) ;
  const enumGalgasBool test_0 = constinArgument_inHasInterrupt.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1851)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
    GALGAS_bool var_shouldSavePCLATH_66021 ;
    {
    routine_interruptRoutineShouldSavePCLATH (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_66021, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1854)) ;
    }
    outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint ((uint32_t) 4U)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1861))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1861)) ;
    cEnumerator_midrange_5F_interruptDefinitionList enumerator_66174 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1862)), kENUMERATION_UP) ;
    while (enumerator_66174.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSharedRAMBankName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_generateInterruptRoutineForControllerWithSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66174.current_mFirstSaveRegister (HERE), enumerator_66174.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66021, enumerator_66174.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66174.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1864)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        routine_generateInterruptRoutineForControllerWithoutSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66174.current_mFirstSaveRegister (HERE), enumerator_66174.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66021, enumerator_66174.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66174.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1880)) ;
        }
      }
      enumerator_66174.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Routine 'generateInterruptRoutineForControllerWithSharedRAM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInterruptRoutineForControllerWithSharedRAM (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                 const GALGAS_lstring constinArgument_inFirstSaveRegister,
                                                                 const GALGAS_lstring constinArgument_inSecondSaveRegister,
                                                                 const GALGAS_bool constinArgument_inNeedsToSavePCLATH,
                                                                 const GALGAS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                 const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                 const GALGAS_location constinArgument_inEndOfInterruptLocation,
                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                 GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_registerAddressList_68046 ;
  GALGAS_uint var_size_68058 ;
  GALGAS_registerProtection var_firstProtection_68083 ;
  GALGAS_bitSliceTable joker_68060_2 ; // Joker input parameter
  GALGAS_string joker_68060_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_68046, var_size_68058, joker_68060_2, joker_68060_1, var_firstProtection_68083, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1917)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_68083, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) ;
  GALGAS_uint var_bankAccessibility_68199 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_68236 (var_registerAddressList_68046, kENUMERATION_UP) ;
  while (enumerator_68236.hasCurrentObject ()) {
    var_bankAccessibility_68199 = var_bankAccessibility_68199.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_68236.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) ;
    enumerator_68236.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_bankAccessibility_68199.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)).objectCompare (GALGAS_uint ((uint32_t) 1U).left_shift_operation (constinArgument_inTotalBankCount COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_size_68058.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)).add_operation (var_size_68058.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)) ;
  }
  GALGAS_registerProtection var_secondProtection_68847 ;
  GALGAS_bitSliceTable joker_68823_2 ; // Joker input parameter
  GALGAS_string joker_68823_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_68046, var_size_68058, joker_68823_2, joker_68823_1, var_secondProtection_68847, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_68847, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1931)) ;
  var_bankAccessibility_68199 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_68996 (var_registerAddressList_68046, kENUMERATION_UP) ;
  while (enumerator_68996.hasCurrentObject ()) {
    var_bankAccessibility_68199 = var_bankAccessibility_68199.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_68996.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)) ;
    enumerator_68996.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_bankAccessibility_68199.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)) ;
  }
  const enumGalgasBool test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_68058.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1939)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)).add_operation (var_size_68058.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1940)) ;
  }else if (kBoolFalse == test_6) {
    const enumGalgasBool test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1941)).operator_and (GALGAS_bool (kIsNotEqual, var_size_68058.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1941)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)).add_operation (var_size_68058.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)) ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1945)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_registerExpression var_first_5F_register_69673 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1946)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_69871 ;
    GALGAS_bitSliceTable joker_70035 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_69673.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_69871, joker_70035, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1952)) ;
    GALGAS_registerExpression var_second_5F_register_70090 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_70290 ;
    GALGAS_bitSliceTable joker_70487 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_second_5F_register_70090.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_70290, joker_70487, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1967)) ;
    GALGAS_registerExpression var_STATUS_5F_register_70580 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1978))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1978)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1980))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1977)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_70792 ;
    GALGAS_bitSliceTable joker_70967 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_70580.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_70792, joker_70967, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992)), var_first_5F_IPICregisterDescription_69871  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1992)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)), var_STATUS_5F_IPICregisterDescription_70792, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994)), var_STATUS_5F_IPICregisterDescription_70792  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1994)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)), var_second_5F_IPICregisterDescription_70290  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)) ;
    const enumGalgasBool test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_registerExpression var_reg_71730 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2000))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72189 ;
      GALGAS_bitSliceTable joker_72199 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_71730.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72189, joker_72199, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2003)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_72300 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2016))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2013)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_72533 ;
      GALGAS_bitSliceTable joker_72722 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_72300.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2021)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_72533, joker_72722, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2019)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028)), var_PCLATH_5F_IPICregisterDescription_72533, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2028)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72189  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2029)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030)), var_PCLATH_5F_IPICregisterDescription_72533  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2030)) ;
    }
    GALGAS_bool var_continuesInSequence_73355 ;
    GALGAS_uint var_currentBank_73377 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73377, GALGAS_bool (false), var_continuesInSequence_73355, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2047)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2035)) ;
    }
    const enumGalgasBool test_12 = var_continuesInSequence_73355.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)) ;
    }
    const enumGalgasBool test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_registerExpression var_reg_74014 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74359 ;
      GALGAS_bitSliceTable joker_74369 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_74014.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74359, joker_74369, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_74470 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2070))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2070)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2072))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2069)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_74702 ;
      GALGAS_bitSliceTable joker_74891 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_74470.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2077)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_74702, joker_74891, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2075)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74359, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), var_PCLATH_5F_IPICregisterDescription_74702  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)), var_second_5F_IPICregisterDescription_70290, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)), var_STATUS_5F_IPICregisterDescription_70792  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)), var_first_5F_IPICregisterDescription_69871, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), var_first_5F_IPICregisterDescription_69871, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'generateInterruptRoutineForControllerWithoutSharedRAM'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInterruptRoutineForControllerWithoutSharedRAM (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                    const GALGAS_lstring constinArgument_inFirstSaveRegister,
                                                                    const GALGAS_lstring constinArgument_inSecondSaveRegister,
                                                                    const GALGAS_bool constinArgument_inNeedsToSavePCLATH,
                                                                    const GALGAS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                    const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                    const GALGAS_location constinArgument_inEndOfInterruptLocation,
                                                                    GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                    GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                    GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inFirstSaveRegister.getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2115)) ;
  GALGAS_uintlist var_registerAddressList_77039 ;
  GALGAS_uint var_size_77051 ;
  GALGAS_registerProtection var_firstProtection_77076 ;
  GALGAS_bitSliceTable joker_77053_2 ; // Joker input parameter
  GALGAS_string joker_77053_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_77039, var_size_77051, joker_77053_2, joker_77053_1, var_firstProtection_77076, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2116)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_77076, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2117)) ;
  GALGAS_bool var_accessibleFromBank_30__77194 = GALGAS_bool (false) ;
  GALGAS_uint var_offset_77217 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_77266 (var_registerAddressList_77039, kENUMERATION_UP) ;
  bool bool_0 = var_accessibleFromBank_30__77194.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).isValidAndTrue () ;
  if (enumerator_77266.hasCurrentObject () && bool_0) {
    while (enumerator_77266.hasCurrentObject () && bool_0) {
      var_offset_77217 = enumerator_77266.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)) ;
      var_accessibleFromBank_30__77194 = GALGAS_bool (kIsEqual, enumerator_77266.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_77266.gotoNextObject () ;
      if (enumerator_77266.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__77194.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_accessibleFromBank_30__77194.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2125)) ;
  }
  const enumGalgasBool test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_77051.objectCompare (GALGAS_uint ((uint32_t) 3U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2127)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)).add_operation (var_size_77051.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)).operator_and (GALGAS_bool (kIsNotEqual, var_size_77051.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)).add_operation (var_size_77051.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)) ;
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList_78023 = var_registerAddressList_77039 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2134)) ;
  GALGAS_registerProtection var_secondProtection_78199 ;
  GALGAS_bitSliceTable joker_78175_2 ; // Joker input parameter
  GALGAS_string joker_78175_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_77039, var_size_77051, joker_78175_2, joker_78175_1, var_secondProtection_78199, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2135)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_78199, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)) ;
  var_saveStatusRegisterAddressList_78023 = var_saveStatusRegisterAddressList_78023.add_operation (var_registerAddressList_77039, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2137)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_size_77051.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).add_operation (var_size_77051.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)) ;
  }
  GALGAS_bool var_accessibleFromBank_31__78606 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_78647 (var_registerAddressList_77039, kENUMERATION_UP) ;
  bool bool_9 = var_accessibleFromBank_31__78606.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)).isValidAndTrue () ;
  if (enumerator_78647.hasCurrentObject () && bool_9) {
    while (enumerator_78647.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78606 = GALGAS_bool (kIsEqual, enumerator_78647.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2144)).objectCompare (GALGAS_uint ((uint32_t) 128U))) ;
      enumerator_78647.gotoNextObject () ;
      if (enumerator_78647.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78606.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_10 = var_accessibleFromBank_31__78606.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)).boolEnum () ;
  if (kBoolTrue == test_10) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)) ;
  }
  GALGAS_bool var_offsetOk_78998 = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_79038 (var_registerAddressList_77039, kENUMERATION_UP) ;
  bool bool_12 = var_offsetOk_78998.isValidAndTrue () ;
  if (enumerator_79038.hasCurrentObject () && bool_12) {
    while (enumerator_79038.hasCurrentObject () && bool_12) {
      var_offsetOk_78998 = GALGAS_bool (kIsEqual, var_offset_77217.objectCompare (enumerator_79038.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2152)))) ;
      const enumGalgasBool test_13 = var_offsetOk_78998.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2153)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)).add_operation (enumerator_79038.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (var_offset_77217.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2155)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)) ;
      }
      enumerator_79038.gotoNextObject () ;
      if (enumerator_79038.hasCurrentObject ()) {
        bool_12 = var_offsetOk_78998.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_registerExpression var_first_5F_register_79503 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2164))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2161)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_79701 ;
    GALGAS_bitSliceTable joker_79865 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_79503.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_79701, joker_79865, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2167)) ;
    GALGAS_registerExpression var_first_5F_register_5F_second_5F_byte_79931 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2179))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2176)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80154 ;
    GALGAS_bitSliceTable joker_80347 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_79931.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80154, joker_80347, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2182)) ;
    GALGAS_registerExpression var_STATUS_5F_register_80440 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2194)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2195))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80671 ;
    GALGAS_bitSliceTable joker_80846 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_80440.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80671, joker_80846, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2198)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), var_first_5F_IPICregisterDescription_79701  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)), var_STATUS_5F_IPICregisterDescription_80671, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209)), var_STATUS_5F_IPICregisterDescription_80671  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2209)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80154  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)) ;
    const enumGalgasBool test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_81648 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2214))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2214))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2214)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2215))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2212)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81879 ;
      GALGAS_bitSliceTable joker_82083 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81648.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81879, joker_82083, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2218)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_82184 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2230))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2230))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2230)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2228)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_82423 ;
      GALGAS_bitSliceTable joker_82612 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_82184.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_82423, joker_82612, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2234)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)), var_PCLATH_5F_IPICregisterDescription_82423, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81879  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), var_PCLATH_5F_IPICregisterDescription_82423  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)) ;
    }
    GALGAS_bool var_continuesInSequence_83251 ;
    GALGAS_uint var_currentBank_83273 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_83273, GALGAS_bool (true), var_continuesInSequence_83251, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2250)) ;
    }
    const enumGalgasBool test_17 = var_continuesInSequence_83251.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)).boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)) ;
    }
    const enumGalgasBool test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_83915 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 2U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2271))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2271))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2271)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2272))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2269)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84295 ;
      GALGAS_bitSliceTable joker_84305 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83915.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84295, joker_84305, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2274)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_84406 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2285))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2285)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2286))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2286))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2286)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2287))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2284)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_84646 ;
      GALGAS_bitSliceTable joker_84835 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_84406.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_84646, joker_84835, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2290)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84295, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300)), var_PCLATH_5F_IPICregisterDescription_84646  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2300)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80154, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2303)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304)), var_STATUS_5F_IPICregisterDescription_80671  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2304)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305)), var_first_5F_IPICregisterDescription_79701, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2305)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306)), var_first_5F_IPICregisterDescription_79701, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2306)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2308))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2308))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2308)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@midrange_intermediate_pseudo_ORG isLABELorORG'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (void) {
  enterExtensionGetter_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                     extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_ORG_isLABELorORG, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@midrange_intermediate_pseudo_LABEL isLABELorORG'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (void) {
  enterExtensionGetter_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                     extensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG (defineExtensionGetter_midrange_5F_intermediate_5F_pseudo_5F_LABEL_isLABELorORG, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@midrange_intermediate_NULL isNULL'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_NULL_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_NULL_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_midrange_5F_intermediate_5F_NULL_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_NULL_isNULL (defineExtensionGetter_midrange_5F_intermediate_5F_NULL_isNULL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_JUMP enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 53))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_GOTO enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 59))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_CALL enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 65))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_JSR enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 71))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                              extensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@midrange_intermediate_JUMP nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@midrange_intermediate_GOTO nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETURN_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_RETFIE_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension getter '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, object->mProperty_mLiteralInstruction.objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 135)))) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   extensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineExtensionGetter_midrange_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                     GALGAS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mProperty_mLabel, constinArgument_inLineIndex, object->mProperty_mIsDeletable, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'findMidRangeFirstInstructionFromAddress'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findMidRangeFirstInstructionFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                      const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                      GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress_6804 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 167)) ;
  GALGAS_bool var_found_6957 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).isValid ()) {
    uint32_t variant_6972 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).uintValue () ;
    bool loop_6972 = true ;
    while (loop_6972) {
      loop_6972 = GALGAS_bool (kIsStrictInf, var_currentAddress_6804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6957.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).isValid () ;
      if (loop_6972) {
        loop_6972 = GALGAS_bool (kIsStrictInf, var_currentAddress_6804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6957.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).boolValue () ;
      }
      if (loop_6972 && (0 == variant_6972)) {
        loop_6972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 169)) ;
      }
      if (loop_6972) {
        variant_6972 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6804, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6804, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_7223_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6804, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ()) ;
            outArgument_outFirstInstruction = cast_7223_instr ;
            var_found_6957 = GALGAS_bool (true) ;
          }else{
            var_currentAddress_6804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 177)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Routine 'findMidRangeFirstInstructionOrLabelFromAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findMidRangeFirstInstructionOrLabelFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                             const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                             GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 189)) ;
  GALGAS_uint var_currentAddress_7734 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 193)) ;
  GALGAS_bool var_found_7887 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).isValid ()) {
    uint32_t variant_7902 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).uintValue () ;
    bool loop_7902 = true ;
    while (loop_7902) {
      loop_7902 = GALGAS_bool (kIsStrictInf, var_currentAddress_7734.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found_7887.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid () ;
      if (loop_7902) {
        loop_7902 = GALGAS_bool (kIsStrictInf, var_currentAddress_7734.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found_7887.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).boolValue () ;
      }
      if (loop_7902 && (0 == variant_7902)) {
        loop_7902 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 195)) ;
      }
      if (loop_7902) {
        variant_7902 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_8153_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8153_instr ;
            var_found_7887 = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG cast_8260_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8260_instr ;
            var_found_7887 = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL cast_8369_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8369_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_8369_instr.getter_mLabel (SOURCE_FILE ("midrange_optimizations.galgas", 207)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 207))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 207)) ;
            var_currentAddress_7734.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 208)) ;
          }else{
            var_currentAddress_7734.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 210)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'perform_midrange_optimizations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_midrange_5F_optimizations (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)) ;
  GALGAS_symbolTableForOptimizations var_symbolTable_22357 = GALGAS_symbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("midrange_optimizations.galgas", 534)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22438 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_22404 ((uint32_t) 0) ;
  while (enumerator_22438.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_22438.current_mInstruction (HERE).ptr (), var_symbolTable_22357, index_22404, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 536)) ;
    enumerator_22438.gotoNextObject () ;
    index_22404.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 535)) ;
  }
  GALGAS_bool var_optimizationsDone_22598 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_22623 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 541)).isValid ()) {
    uint32_t variant_22634 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 541)).uintValue () ;
    bool loop_22634 = true ;
    while (loop_22634) {
      loop_22634 = var_optimizationsDone_22598.isValid () ;
      if (loop_22634) {
        loop_22634 = var_optimizationsDone_22598.boolValue () ;
      }
      if (loop_22634 && (0 == variant_22634)) {
        loop_22634 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
      }
      if (loop_22634) {
        variant_22634 -- ;
        var_optimizationsDone_22598 = GALGAS_bool (false) ;
        var_iteration_22623.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 545)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_22623.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22880 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_22846 ((uint32_t) 0) ;
        while (enumerator_22880.hasCurrentObject ()) {
          if (enumerator_22880.current_mInstruction (HERE).isValid ()) {
            if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
              GALGAS_midrange_5F_intermediate_5F_GOTO cast_22964_ipic_GOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeGOTO ((const cPtr_midrange_5F_intermediate_5F_GOTO *) cast_22964_ipic_GOTO.ptr (), var_symbolTable_22357, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 551)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
              GALGAS_midrange_5F_intermediate_5F_JUMP cast_23139_ipic_JUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJUMP ((const cPtr_midrange_5F_intermediate_5F_JUMP *) cast_23139_ipic_JUMP.ptr (), var_symbolTable_22357, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 553)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
              GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_23507_ipic_literal ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeMOVLW ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) cast_23507_ipic_literal.ptr (), index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition cast_23696_ipic_decInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeTestDecInc ((const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) cast_23696_ipic_decInc.ptr (), var_symbolTable_22357, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 559)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) {
              GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip cast_23905_ipic_bitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeBitTestSkip ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) cast_23905_ipic_bitTestSkip.ptr (), index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 561)) ;
            }
          }
          enumerator_22880.gotoNextObject () ;
          index_22846.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 548)) ;
        }
        GALGAS_stringset var_referencedLabels_24119 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 566)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24184 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_24184.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24184.current_mInstruction (HERE).ptr (), var_referencedLabels_24119, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
          enumerator_24184.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_24283 (var_symbolTable_22357, kENUMERATION_UP) ;
        while (enumerator_24283.hasCurrentObject ()) {
          const enumGalgasBool test_0 = var_referencedLabels_24119.getter_hasKey (enumerator_24283.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 571)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 571)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 571)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_uint var_definitionLine_24408 ;
            GALGAS_bool joker_24410 ; // Joker input parameter
            var_symbolTable_22357.method_searchKey (enumerator_24283.current_lkey (HERE), var_definitionLine_24408, joker_24410, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 572)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_24408.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (enumerator_24283.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 574)), var_definitionLine_24408, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 574)) ;
            }
            {
            GALGAS_uint joker_24685 ; // Joker input parameter
            GALGAS_bool joker_24688 ; // Joker input parameter
            var_symbolTable_22357.setter_removeKey (enumerator_24283.current_lkey (HERE), joker_24685, joker_24688, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 575)) ;
            }
          }
          enumerator_24283.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_24757 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_24794 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_24843 = GALGAS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24893 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_24859 ((uint32_t) 0) ;
        while (enumerator_24893.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_reachable_24757.operator_or (var_previousWasSkippingInstruction_24843 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 583)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_reachable_24757 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 584)) ;
            var_previousWasSkippingInstruction_24843 = var_skippingInstruction_24794 ;
            var_skippingInstruction_24794 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 586)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABELorORG_25196 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 588)) ;
            const enumGalgasBool test_2 = var_isLABELorORG_25196.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 589)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 589)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 589)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 589)).boolEnum () ;
            if (kBoolTrue == test_2) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_24859.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).add_operation (GALGAS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 591)), index_24859, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              }
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = var_isLABELorORG_25196.boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachable_24757 = GALGAS_bool (true) ;
                var_previousWasSkippingInstruction_24843 = GALGAS_bool (false) ;
                var_skippingInstruction_24794 = GALGAS_bool (false) ;
              }
            }
          }
          enumerator_24893.gotoNextObject () ;
          index_24859.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)) ;
        }
        const enumGalgasBool test_4 = var_optimizationsDone_22598.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 599)).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 600)) ;
          GALGAS_uint var_currentAddress_25819 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_25867 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
          while (enumerator_25867.hasCurrentObject ()) {
            callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25867.current_mInstruction (HERE).ptr (), var_currentAddress_25819, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 604)) ;
            enumerator_25867.gotoNextObject () ;
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_25819.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)).add_operation (GALGAS_string (" instructions\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                              GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                              GALGAS_uint & ioArgument_ioAddress,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mProperty_mLabel, ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 28)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                            GALGAS_uint & ioArgument_ioAddress,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioAddress.objectCompare (object->mProperty_mOrigin)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GALGAS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GALGAS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (object->mProperty_mOrigin.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
  }
  ioArgument_ioAddress = object->mProperty_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_actualInstruction * object = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = object ;
  GALGAS_uint var_nextAddress_1907 = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_nextAddress_1907.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("Routine too long, crosses page boundary at this instruction"), fixItArray2  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
  }
  ioArgument_ioAddress = var_nextAddress_1907 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@midrange_intermediate_NULL compute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_NULL_compute (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                      const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                      GALGAS_uint & /* ioArgument_ioAddress */,
                                                                      GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                      const GALGAS_uint /* constinArgument_inIndex */,
                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_NULL_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_compute (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@midrange_intermediate_actualInstruction compute'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                                   GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                   GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                   const GALGAS_uint /* constinArgument_inIndex */,
                                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_compute (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@midrange_intermediate_pseudo_ORG compute'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                               GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                               GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                               const GALGAS_uint /* constinArgument_inIndex */,
                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioAddress = object->mProperty_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@midrange_intermediate_JUMP compute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                      const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                      GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                      const GALGAS_uint constinArgument_inIndex,
                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_uint var_targetAddress_4598 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_targetAddress_4598, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 117)) ;
  GALGAS_uint var_flags_4700 = ioArgument_ioAddress.operator_xor (var_targetAddress_4598 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 119)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__4761 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_flags_4700.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_bit_31__31__4761 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 122)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetAddress_4598.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__4761 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 124)) ;
    }else if (kBoolFalse == test_1) {
      var_bit_31__31__4761 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 126)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__5038 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_flags_4700.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_bit_31__32__5038 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 131)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetAddress_4598.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 132)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__5038 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 133)) ;
    }else if (kBoolFalse == test_3) {
      var_bit_31__32__5038 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 135)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_bit_31__31__4761.objectCompare (object->mProperty_mBit_31__31_)).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__5038.objectCompare (object->mProperty_mBit_31__32_)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_5382 = GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, var_bit_31__31__4761, var_bit_31__32__5038  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 139)) ;
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_5382, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 144)) ;
    }
    ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)).add_operation (GALGAS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 146)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_JUMP_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_compute (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@midrange_intermediate_JSR compute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                     const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                     GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                                     GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                     const GALGAS_uint constinArgument_inIndex,
                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  GALGAS_uint var_targetAddress_6128 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_targetAddress_6128, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 161)) ;
  GALGAS_uint var_flags_6230 = ioArgument_ioAddress.operator_xor (var_targetAddress_6128 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 163)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__6291 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_flags_6230.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_bit_31__31__6291 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 166)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetAddress_6128.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__6291 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 168)) ;
    }else if (kBoolFalse == test_1) {
      var_bit_31__31__6291 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 170)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__6568 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_flags_6230.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_bit_31__32__6568 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 175)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetAddress_6128.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__6568 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 177)) ;
    }else if (kBoolFalse == test_3) {
      var_bit_31__32__6568 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 179)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_bit_31__31__6291.objectCompare (object->mProperty_mBit_31__31_)).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__6568.objectCompare (object->mProperty_mBit_31__32_)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 182)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_6912 = GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, var_bit_31__31__6291, var_bit_31__32__6568  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 183)) ;
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_6912, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)) ;
    }
    ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)).add_operation (GALGAS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 190)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_JSR_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_compute (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                 const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                 GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                 const GALGAS_uint /* constinArgument_inIndex */,
                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress_7667 ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mProperty_mLabel, var_targetAddress_7667, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetAddress_7667.objectCompare (ioArgument_ioAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLabel.getter_location (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)), GALGAS_string ("Internal second pass error: the '").add_operation (object->mProperty_mLabel.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (var_targetAddress_7667.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 207)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 208)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 206)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'midrange_compute_JSR_JUMP'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_compute_5F_JSR_5F_JUMP (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("COMPUTE JSR and JUMP").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)) ;
  GALGAS_bool var_JUMP_5F_or_5F_JSR_5F_fixed_13072 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_13097 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)).isValid ()) {
    uint32_t variant_13108 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)).uintValue () ;
    bool loop_13108 = true ;
    while (loop_13108) {
      loop_13108 = var_JUMP_5F_or_5F_JSR_5F_fixed_13072.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).isValid () ;
      if (loop_13108) {
        loop_13108 = var_JUMP_5F_or_5F_JSR_5F_fixed_13072.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).boolValue () ;
      }
      if (loop_13108 && (0 == variant_13108)) {
        loop_13108 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)) ;
      }
      if (loop_13108) {
        variant_13108 -- ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_13072 = GALGAS_bool (false) ;
        var_iteration_13097.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 327)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_13097.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)) ;
        GALGAS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_13398 = GALGAS_midrange_5F_symbolTableForConvertingRelatives::constructor_emptyMap (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
        GALGAS_uint var_currentAddress_13479 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13525 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_13525.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13525.current_mInstruction (HERE).ptr (), var_symbolTable_13398, var_currentAddress_13479, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 333)) ;
          enumerator_13525.gotoNextObject () ;
        }
        GALGAS_uint var_lastAddressForFirstPass_13643 = var_currentAddress_13479 ;
        var_currentAddress_13479 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13788 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_13754 ((uint32_t) 0) ;
        while (enumerator_13788.hasCurrentObject ()) {
          callExtensionMethod_compute ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13788.current_mInstruction (HERE).ptr (), var_symbolTable_13398, var_currentAddress_13479, var_JUMP_5F_or_5F_JSR_5F_fixed_13072, ioArgument_ioGeneratedInstructionList, index_13754, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 339)) ;
          var_currentAddress_13479 = var_currentAddress_13479.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13788.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          enumerator_13788.gotoNextObject () ;
          index_13754.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 338)) ;
        }
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_13643.objectCompare (var_currentAddress_13479)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13479.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (GALGAS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (var_lastAddressForFirstPass_13643.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).add_operation (GALGAS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)) ;
        }
        const enumGalgasBool test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_13072.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 347)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No JUMP, no JSR to fix\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 348)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Program size: ").add_operation (var_currentAddress_13479.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)).add_operation (GALGAS_string (" instructions\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_NULL buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                GALGAS_string & /* ioArgument_ioString */,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioString,
                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (object->mProperty_mOrigin.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioString.plusAssign_operation(object->mProperty_mLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_instruction_FD buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_string & ioArgument_ioString,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mInstruction_5F_FD_5F_base_5F_code, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  const enumGalgasBool test_0 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 41)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 43)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_instruction_FB buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_string & ioArgument_ioString,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      GALGAS_string & ioArgument_ioString,
                                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  const enumGalgasBool test_0 = object->mProperty_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@midrange_intermediate_instruction_F buildAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_string & ioArgument_ioString,
                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mFinstruction, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     GALGAS_string & ioArgument_ioString,
                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  ioArgument_ioString.plusAssign_operation(object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  const enumGalgasBool test_1 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 96)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 98)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 100)) ;
  const enumGalgasBool test_2 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_localLabel_2920 = GALGAS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (var_localLabel_2920, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (object->mProperty_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
    ioArgument_ioString.plusAssign_operation(var_localLabel_2920.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (object->mProperty_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  switch (object->mProperty_mBit_31__31_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 117)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 118)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  switch (object->mProperty_mBit_31__32_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 122)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 123)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  switch (object->mProperty_mBit_31__31_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 143)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 144)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  switch (object->mProperty_mBit_31__32_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 148)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 149)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  switch (object->mProperty_mBit_31__31_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 154)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 155)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  switch (object->mProperty_mBit_31__32_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 159)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 160)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                              GALGAS_string & ioArgument_ioString,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                GALGAS_string & ioArgument_ioString,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (object->mProperty_mLiteralValue.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mOccurrenceFactor.getter_location (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)), GALGAS_string ("No generated code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
  }
  GALGAS_uint var_idx_6825 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).isValid ()) {
    uint32_t variant_6836 = object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)).uintValue () ;
    bool loop_6836 = true ;
    while (loop_6836) {
      loop_6836 = GALGAS_bool (kIsStrictInf, var_idx_6825.objectCompare (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).isValid () ;
      if (loop_6836) {
        loop_6836 = GALGAS_bool (kIsStrictInf, var_idx_6825.objectCompare (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 239)))).boolValue () ;
      }
      if (loop_6836 && (0 == variant_6836)) {
        loop_6836 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_6836) {
        variant_6836 -- ;
        ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6825.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'midrange_build_assembly_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_build_5F_assembly_5F_code (const GALGAS_string constinArgument_inProcessorName,
                                                    const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                    const GALGAS_registerTable constinArgument_inAllRegisters,
                                                    const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inInstructionList,
                                                    const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                    GALGAS_string & outArgument_outAssemblyCode,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAssemblyCode.drop () ; // Release 'out' argument
  outArgument_outAssemblyCode = GALGAS_string ("  errorlevel -302 ; No Warning on registers not in bank 0\n") ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 304)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 307)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  ORG 0\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 308)) ;
  GALGAS_uint var_bccLabelIndex_8995 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9030 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_9030.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9030.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_8995, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9030.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9246 (constinArgument_inPredefinedRegisters, kENUMERATION_UP) ;
  while (enumerator_9246.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_9273 ;
    enumerator_9246.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9273, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssign_operation(enumerator_9246.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9273.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9246.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9556 (constinArgument_inAllRegisters, kENUMERATION_UP) ;
  while (enumerator_9556.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9556.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_firstRegister_9647 ;
      enumerator_9556.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9647, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
      outArgument_outAssemblyCode.plusAssign_operation(enumerator_9556.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9647.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
    }
    enumerator_9556.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("W EQU 1\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Configuration\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
    cEnumerator_actualConfigurationMap enumerator_10119 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
    while (enumerator_10119.hasCurrentObject ()) {
      outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_10119.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10119.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
      enumerator_10119.gotoNextObject () ;
    }
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";---\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 341)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  END\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 342)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitMidrangeCodeAtWordAddress'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitMidrangeCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                            GALGAS_uint & ioArgument_ioWordAddress,
                                            const GALGAS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 15)) ;
}


