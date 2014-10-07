#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18AbstractBlockTerminator.h"
#include "class-ipic18ComputedBraTerminator.h"
#include "class-ipic18ComputedGotoTerminator.h"
#include "class-ipic18ComputedRETLWTerminator.h"
#include "class-ipic18ConditionalJumpTerminator.h"
#include "class-ipic18IncDecRegisterTerminator.h"
#include "class-ipic18InstructionWithNoOperand.h"
#include "class-ipic18SequentialInstruction.h"
#include "class-ipic18SingleInstructionTerminator.h"
#include "class-ipic18_condition_skip_instruction.h"
#include "class-ipic18_intermediate_JSR.h"
#include "class-ipic18_intermediate_MOV_LABEL_W.h"
#include "class-ipic18_intermediate_instruction_BLANK.h"
#include "class-ipic18_intermediate_instruction_FA.h"
#include "class-ipic18_intermediate_instruction_FBA.h"
#include "class-ipic18_intermediate_instruction_FDA.h"
#include "class-ipic18_intermediate_instruction_FNOP.h"
#include "class-ipic18_intermediate_instruction_LFSR.h"
#include "class-ipic18_intermediate_instruction_MNOP.h"
#include "class-ipic18_intermediate_instruction_MOVFF.h"
#include "class-ipic18_intermediate_instruction_MOVLB.h"
#include "class-ipic18_intermediate_instruction_TBLRD.h"
#include "class-ipic18_intermediate_instruction_TBLWT.h"
#include "class-ipic18_intermediate_instruction_computed_rcall.h"
#include "class-ipic18_intermediate_instruction_literalOperation.h"
#include "class-ipic18_skip_instruction_BitTestSkip.h"
#include "class-ipic18_skip_instruction_FDA.h"
#include "class-ipic18_skip_instruction_compare_register.h"
#include "class-pic18BitTestTerminator.h"
#include "class-pic18Instruction_FOREVER.h"
#include "class-pic18Instruction_IF_BitTest.h"
#include "class-pic18Instruction_IF_FA_SEMI_COLON.h"
#include "class-pic18Instruction_IF_IncDec.h"
#include "class-pic18Instruction_JUMP.h"
#include "class-pic18Instruction_JUMPCC.h"
#include "class-pic18Instruction_LDATAPTR.h"
#include "class-pic18Instruction_LTBLPTR.h"
#include "class-pic18Instruction_MNOP.h"
#include "class-pic18Instruction_banksel.h"
#include "class-pic18Instruction_banksel_register.h"
#include "class-pic18Instruction_checkbank.h"
#include "class-pic18Instruction_checknobank.h"
#include "class-pic18Instruction_computed_bra.h"
#include "class-pic18Instruction_computed_goto.h"
#include "class-pic18Instruction_repetitionStatique.h"
#include "class-pic18PiccoloSimpleInstruction.h"
#include "enum-FA_sequential_instruction_base_code.h"
#include "enum-bit_oriented_op.h"
#include "enum-conditionalBranchMode.h"
#include "enum-conditional_branch.h"
#include "enum-ipic18_compare_register_instruction_base_code.h"
#include "enum-jumpInstructionKind.h"
#include "enum-literal_instruction_opcode.h"
#include "enum-pic18InstructionWithNoOperandKind.h"
#include "enum-pic18Instruction_FDA_base_code_AST.h"
#include "enum-skip_instruction_FDA_base_code.h"
#include "enum-tableAccessOption.h"
#include "func-pic18_BRA_RCALL_displacement.h"
#include "func-pic18_BRA_instruction_code.h"
#include "func-pic18_Bcc_instruction_code.h"
#include "func-pic18_CALL_instruction_code.h"
#include "func-pic18_GOTO_instruction_code.h"
#include "func-pic18_RCALL_instruction_code.h"
#include "func-pic18_checkBCC.h"
#include "func-pic18_checkBRA_RCALL.h"
#include "func-pic18_definition_label.h"
#include "getter-bit_oriented_op-mnemonic.h"
#include "getter-ipic18AbstractBlockTerminator-isEqualToTerminator.h"
#include "getter-ipic18AbstractBlockTerminator-terminatorDisplay.h"
#include "getter-ipic18AbstractBlockTerminator-terminatorSize.h"
#include "getter-ipic18SequentialInstruction-instructionDisplay.h"
#include "getter-ipic18SequentialInstruction-instructionSize.h"
#include "getter-ipic18_intermediate_registerExpression-isEqualToRegister.h"
#include "getter-literal_instruction_opcode-mnemonic.h"
#include "getter-pic18InstructionWithNoOperandKind-mnemonic.h"
#include "getter-tableAccessOption-mnemonic.h"
#include "list-codeList.h"
#include "list-ipic18SequentialInstructionList.h"
#include "list-pic18InstructionList.h"
#include "listmap-branchOverflowMap.h"
#include "map-pic18_dataAddressMap.h"
#include "map-symbolTableForRelativesResolution.h"
#include "method-ipic18AbstractBlockTerminator-generateTerminatorCode.h"
#include "method-ipic18AbstractBlockTerminator-performTerminatorRelativeBranchResolution.h"
#include "method-ipic18AbstractBlockTerminator-terminatorRelativeBranchOverflow.h"
#include "method-ipic18SequentialInstruction-generateCode.h"
#include "method-ipic18SequentialInstruction-instructionRelativeBranchOverflow.h"
#include "method-ipic18SequentialInstruction-performInstructionRelativeBranchResolution.h"
#include "method-pic18PiccoloInstruction-addUsedRoutines.h"
#include "proc-addPic18UsedRoutinesFromInstructionList.h"
#include "struct-ipic18_intermediate_registerExpression.h"
#include "struct-ipic18_intermediate_registerExpressionWithoutBSRIndication.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@pic18BitTestTerminator terminatorDisplay'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_pic_31__38_BitTestTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  result_outResult = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 572)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 572)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 572)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 572)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 573))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 573)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 574)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 575))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 575)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_BitTestTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                         categoryReader_pic_31__38_BitTestTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_BitTestTerminator_terminatorDisplay (defineCategoryReader_pic_31__38_BitTestTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                   GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 589)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 598)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
    outArgument_outModifiedTerminator = temp_1 ;
  }else if (kBoolFalse == test_0) {
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_2 ;
    if (var_outModifiedTrueTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator.ptr ())) {
        temp_2 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 612)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 613)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 610)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                                 categoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18BitTestTerminator generateTerminatorCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 626)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_binCode = GALGAS_uint ((uint32_t) 45056U) ;
    GALGAS_string var_assemblyCode = GALGAS_string ("    BTFSC ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 629)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 629)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 629)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 630)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 630)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 630)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 631)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 631)) ;
    const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 632)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 633)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 634)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 638))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 636)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_binCode = GALGAS_uint ((uint32_t) 40960U) ;
    GALGAS_string var_assemblyCode = GALGAS_string ("    BTFSS ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 650)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 651)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 651)) ;
    const enumGalgasBool test_2 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 652)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 653)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 654)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 658))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 656)) ;
    GALGAS_codeList var_trueTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)) ;
    outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 672)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                              categoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (defineCategoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@pic18BitTestTerminator isEqualToTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_pic_31__38_BitTestTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)) ;
      }
    }
    GALGAS_pic_31__38_BitTestTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 684)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 686)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mBitNumber.objectCompare (var_t.reader_mBitNumber (SOURCE_FILE ("ipic18_terminators.galgas", 689)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 692)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                           categoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_BitTestTerminator_isEqualToTerminator (defineCategoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18IncDecRegisterTerminator terminatorDisplay'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string ("INCF ") ;
  }else if (kBoolFalse == test_0) {
    result_outResult = GALGAS_string ("DECF ") ;
  }
  result_outResult.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 711))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 711)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 713)) ;
  }else if (kBoolFalse == test_1) {
    result_outResult.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 715)) ;
  }
  result_outResult.dotAssign_operation (GALGAS_string (" Z \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 717)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 718))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 718)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 719)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 720))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 720)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                         categoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                           GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 743)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
    outArgument_outModifiedTerminator = temp_1 ;
  }else if (kBoolFalse == test_0) {
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_2 ;
    if (var_outModifiedTrueTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator.ptr ())) {
        temp_2 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 757)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 758)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 755)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18IncDecRegisterTerminator generateTerminatorCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                        GALGAS_codeList & outArgument_outCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 772)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_uint ((uint32_t) 15360U) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_uint ((uint32_t) 11264U) ;
    }
    GALGAS_uint var_binCode = temp_1 ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("    INCFSZ") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string ("    DECFSZ") ;
    }
    GALGAS_string var_assemblyCode = temp_3 ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 776))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 776)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 777)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 777)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 777)) ;
    const enumGalgasBool test_5 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
    if (kBoolTrue == test_5) {
      var_assemblyCode.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 779)) ;
    }else if (kBoolFalse == test_5) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 781)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 782)) ;
    }
    const enumGalgasBool test_6 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 784)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 785)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 788)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 791)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 797)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_uint ((uint32_t) 18432U) ;
    }else if (kBoolFalse == test_8) {
      temp_7 = GALGAS_uint ((uint32_t) 19456U) ;
    }
    GALGAS_uint var_binCode = temp_7 ;
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string ("    INFSNZ") ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string ("    DCFSNZ") ;
    }
    GALGAS_string var_assemblyCode = temp_9 ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 803)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 803)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 803)) ;
    const enumGalgasBool test_11 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
    if (kBoolTrue == test_11) {
      var_assemblyCode.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 805)) ;
    }else if (kBoolFalse == test_11) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 808)) ;
    }
    const enumGalgasBool test_12 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 810)).boolEnum () ;
    if (kBoolTrue == test_12) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 811)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 814)) ;
    GALGAS_codeList var_trueTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 817)) ;
    outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 823)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 825)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 825)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 830)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18IncDecRegisterTerminator isEqualToTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)) ;
      }
    }
    GALGAS_ipic_31__38_IncDecRegisterTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 842)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 844)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 844)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mIncrement.objectCompare (var_t.reader_mIncrement (SOURCE_FILE ("ipic18_terminators.galgas", 847)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_m_5F_W_5F_isDestination.objectCompare (var_t.reader_m_5F_W_5F_isDestination (SOURCE_FILE ("ipic18_terminators.galgas", 850)))) ;
    }
    const enumGalgasBool test_5 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_5) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 853)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                           categoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@ipic18ComputedRETLWTerminator terminatorSize'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (object->mAttribute_mLiteralValues.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 872)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 872)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 872)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ComputedRETLWTerminator terminatorDisplay'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED RETLW") ;
  cEnumerator_uintlist enumerator_30540 (object->mAttribute_mLiteralValues, kEnumeration_up) ;
  while (enumerator_30540.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_30540.current_mValue (HERE).reader_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882)) ;
    enumerator_30540.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                          const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 898)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 898)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 899)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 900)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 900))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 900)) ;
      outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLiteralValues, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 901)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 915)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 915)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 915)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ComputedRETLWTerminator generateTerminatorCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_uint constinArgument_inAddress,
                                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GALGAS_codeList & outArgument_outCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  GALGAS_lstring var_goto_32_label = GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 928)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 929)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 931)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 933)) ;
  }
  cEnumerator_uintlist enumerator_32596 (object->mAttribute_mLiteralValues, kEnumeration_up) ;
  while (enumerator_32596.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GALGAS_string ("    RETLW ").add_operation (enumerator_32596.current_mValue (HERE).reader_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 937)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 3072U).operator_or (enumerator_32596.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 938))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 938))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 936)) ;
    enumerator_32596.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18ComputedRETLWTerminator isEqualToTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 949)) ;
      }
    }
    GALGAS_ipic_31__38_ComputedRETLWTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mLiteralValues.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 950)).objectCompare (var_t.reader_mLiteralValues (SOURCE_FILE ("ipic18_terminators.galgas", 950)).reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 950)))) ;
    cEnumerator_uintlist enumerator_33217 (object->mAttribute_mLiteralValues, kEnumeration_up) ;
    cEnumerator_uintlist enumerator_33247 (var_t.reader_mLiteralValues (SOURCE_FILE ("ipic18_terminators.galgas", 951)), kEnumeration_up) ;
    bool bool_2 = result_outResult.isValidAndTrue () ;
    if (enumerator_33217.hasCurrentObject () && enumerator_33247.hasCurrentObject () && bool_2) {
      while (enumerator_33217.hasCurrentObject () && enumerator_33247.hasCurrentObject () && bool_2) {
        result_outResult = GALGAS_bool (kIsEqual, enumerator_33217.current_mValue (HERE).objectCompare (enumerator_33247.current_mValue (HERE))) ;
        enumerator_33217.gotoNextObject () ;
        enumerator_33247.gotoNextObject () ;
        if (enumerator_33217.hasCurrentObject () && enumerator_33247.hasCurrentObject ()) {
          bool_2 = result_outResult.isValidAndTrue () ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ComputedGotoTerminator terminatorDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED GOTO ") ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (" (uses RCALL)")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 968)) ;
  }else if (kBoolFalse == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (" (uses CALL)")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 970)) ;
  }
  cEnumerator_lstringlist enumerator_33812 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_33812.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string ("\n"
      "                                                                       ").add_operation (enumerator_33812.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 973)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 973))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 973)) ;
    enumerator_33812.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18ComputedGotoTerminator terminatorSize'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 987)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1002)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1002)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1002)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1004)).add_operation (GALGAS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1004))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1004)) ;
      outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1005)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1019)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1019)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1019)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18ComputedGotoTerminator generateTerminatorCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  GALGAS_lstring var_goto_34_label = GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1032)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1033)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, var_goto_34_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1035)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, var_goto_34_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1037)) ;
  }
  cEnumerator_lstringlist enumerator_36240 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_36240.hasCurrentObject ()) {
    GALGAS_uint var_targetLabelAddress ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_36240.current_mValue (HERE), var_targetLabelAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1040)) ;
    outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress, enumerator_36240.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1041))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1041)) ;
    enumerator_36240.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18ComputedGotoTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1052)) ;
      }
    }
    GALGAS_ipic_31__38_ComputedGotoTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1053)).objectCompare (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1053)).reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1053)))) ;
    cEnumerator_lstringlist enumerator_36887 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    cEnumerator_lstringlist enumerator_36916 (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1054)), kEnumeration_up) ;
    bool bool_2 = result_outResult.isValidAndTrue () ;
    if (enumerator_36887.hasCurrentObject () && enumerator_36916.hasCurrentObject () && bool_2) {
      while (enumerator_36887.hasCurrentObject () && enumerator_36916.hasCurrentObject () && bool_2) {
        result_outResult = GALGAS_bool (kIsEqual, enumerator_36887.current_mValue (HERE).mAttribute_string.objectCompare (enumerator_36916.current_mValue (HERE).mAttribute_string)) ;
        enumerator_36887.gotoNextObject () ;
        enumerator_36916.gotoNextObject () ;
        if (enumerator_36887.hasCurrentObject () && enumerator_36916.hasCurrentObject ()) {
          bool_2 = result_outResult.isValidAndTrue () ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18ComputedBraTerminator terminatorSize'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1074)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@ipic18ComputedBraTerminator terminatorDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED BRA") ;
  cEnumerator_lstringlist enumerator_37710 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_37710.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_37710.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084)) ;
    enumerator_37710.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                        const GALGAS_uint constinArgument_inAddress,
                                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                        const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                        GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  cEnumerator_lstringlist enumerator_38209 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_38209.hasCurrentObject ()) {
    const enumGalgasBool test_0 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_38209.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1099)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1099)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_38209.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1101)).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)).add_operation (GALGAS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1101)).add_operation (enumerator_38209.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1101)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1102))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)) ;
    }
    enumerator_38209.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
  outArgument_outModifiedTerminator = temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1107)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1107)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1107)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1108)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1109)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1109))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1109)) ;
      outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1110)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_uint var_address ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1125)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1125)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1126)) ;
    }
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1128)) ;
  }else if (kBoolFalse == test_0) {
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1130)) ;
  }
  cEnumerator_lstringlist enumerator_39549 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_39549.hasCurrentObject ()) {
    const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_39549.current_mValue (HERE), var_address, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1133)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1133)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, enumerator_39549.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1134)) ;
    }
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1136)) ;
    enumerator_39549.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18ComputedBraTerminator generateTerminatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_lstring var_goto_32_label = GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1147)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1148)) ;
  GALGAS_uint var_address ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1151)) ;
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1152)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1154)) ;
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1155)) ;
  }
  cEnumerator_lstringlist enumerator_40416 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_40416.hasCurrentObject ()) {
    GALGAS_uint var_labelAddress ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_40416.current_mValue (HERE), var_labelAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1158)) ;
    outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address, var_labelAddress, enumerator_40416.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1159))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1159)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1160)) ;
    enumerator_40416.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ComputedBraTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ComputedBraTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1171)) ;
      }
    }
    GALGAS_ipic_31__38_ComputedBraTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1172)).objectCompare (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1172)).reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1172)))) ;
    cEnumerator_lstringlist enumerator_41081 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    cEnumerator_lstringlist enumerator_41110 (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1173)), kEnumeration_up) ;
    bool bool_2 = result_outResult.isValidAndTrue () ;
    if (enumerator_41081.hasCurrentObject () && enumerator_41110.hasCurrentObject () && bool_2) {
      while (enumerator_41081.hasCurrentObject () && enumerator_41110.hasCurrentObject () && bool_2) {
        result_outResult = GALGAS_bool (kIsEqual, enumerator_41081.current_mValue (HERE).mAttribute_string.objectCompare (enumerator_41110.current_mValue (HERE).mAttribute_string)) ;
        enumerator_41081.gotoNextObject () ;
        enumerator_41110.gotoNextObject () ;
        if (enumerator_41081.hasCurrentObject () && enumerator_41110.hasCurrentObject ()) {
          bool_2 = result_outResult.isValidAndTrue () ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18ConditionalJumpTerminator terminatorDisplay'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  if (object->mAttribute_mConditionalBranch.isValid ()) {
    switch (object->mAttribute_mConditionalBranch.enumValue ()) {
    case GALGAS_conditional_5F_branch::kNotBuilt:
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bz: {
      result_outResult = GALGAS_string ("Z") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bn: {
      result_outResult = GALGAS_string ("N") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bc: {
      result_outResult = GALGAS_string ("C") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bov: {
      result_outResult = GALGAS_string ("OV") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnz: {
      result_outResult = GALGAS_string ("NZ") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnn: {
      result_outResult = GALGAS_string ("NN") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnc: {
      result_outResult = GALGAS_string ("NC") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnov: {
      result_outResult = GALGAS_string ("NOV") ;
      } break ;
    }
  }
  result_outResult.dotAssign_operation (GALGAS_string (" \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1284)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string ("(").add_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1286)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1286))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1286)) ;
  }else if (kBoolFalse == test_0) {
    result_outResult.dotAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1288)) ;
  }
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1290)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.dotAssign_operation (GALGAS_string ("(").add_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1292)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1292))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1292)) ;
  }else if (kBoolFalse == test_1) {
    result_outResult.dotAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1294)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                            GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  GALGAS_conditionalBranchMode var_branchModeOnFalseLabel = object->mAttribute_mBranchModeOnFalseLabel ;
  GALGAS_conditionalBranchMode var_branchModeOnTrueLabel = object->mAttribute_mBranchModeOnTrueLabel ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native: {
        const enumGalgasBool test_1 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1313)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1313)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1314)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1315)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1315)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1315)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1315)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1315))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1315)) ;
        }
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
        const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1318)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1318)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1318)).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1319)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1320)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1320)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1320)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1320)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1320))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1320)) ;
        }
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
        } break ;
      }
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          const enumGalgasBool test_4 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1327)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1327)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1328)) ;
            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1329)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)) ;
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          const enumGalgasBool test_5 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1332)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1332)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1332)).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1333)) ;
            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)) ;
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          } break ;
        }
      }
    }else if (kBoolFalse == test_3) {
      if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              const enumGalgasBool test_6 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1343)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1343)).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1345)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)) ;
              }
              const enumGalgasBool test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1347)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1347)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1348)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1349)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              const enumGalgasBool test_8 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1356)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1356)).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1357)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1358)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1358)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1358)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1358)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1358))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1358)) ;
              }
              const enumGalgasBool test_9 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1360)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1360)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1360)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1361)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              const enumGalgasBool test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1365)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1365)).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1366)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1367)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1367)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1367)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1367)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1367))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1367)) ;
              }
              const enumGalgasBool test_11 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1369)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1369)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1369)).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1370)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1371)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              const enumGalgasBool test_12 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1374)).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1375)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1376)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)) ;
              }
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              const enumGalgasBool test_13 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1382)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1382)).boolEnum () ;
              if (kBoolTrue == test_13) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1383)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              const enumGalgasBool test_14 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1387)).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1388)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1389)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1389)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1389)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1389)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1389))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1389)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              } break ;
            }
          }
          } break ;
        }
      }
    }
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, var_branchModeOnFalseLabel.objectCompare (object->mAttribute_mBranchModeOnFalseLabel)).operator_and (GALGAS_bool (kIsEqual, var_branchModeOnTrueLabel.objectCompare (object->mAttribute_mBranchModeOnTrueLabel)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1395)).boolEnum () ;
  if (kBoolTrue == test_15) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
    outArgument_outModifiedTerminator = temp_16 ;
  }else if (kBoolFalse == test_15) {
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, object->mAttribute_mTargetLabelWhenTrue, var_branchModeOnTrueLabel, object->mAttribute_mTargetLabelWhenFalse, var_branchModeOnFalseLabel  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1398)) ;
    ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                   GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native: {
        const enumGalgasBool test_1 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1420)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1420)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1421)) ;
        }
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
        const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1424)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1424)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1424)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1425)) ;
        }
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
        } break ;
      }
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          const enumGalgasBool test_4 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1432)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1432)).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1433)) ;
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          const enumGalgasBool test_5 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1436)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1436)).boolEnum () ;
          if (kBoolTrue == test_5) {
            ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1437)) ;
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          } break ;
        }
      }
    }else if (kBoolFalse == test_3) {
      if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              const enumGalgasBool test_6 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1446)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1446)).boolEnum () ;
              if (kBoolTrue == test_6) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1447)) ;
              }
              const enumGalgasBool test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1449)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1449)).boolEnum () ;
              if (kBoolTrue == test_7) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1450)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              const enumGalgasBool test_8 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1457)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1457)).boolEnum () ;
              if (kBoolTrue == test_8) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1458)) ;
              }
              const enumGalgasBool test_9 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1460)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1460)).boolEnum () ;
              if (kBoolTrue == test_9) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1461)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              const enumGalgasBool test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1464)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1464)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1464)).boolEnum () ;
              if (kBoolTrue == test_10) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)) ;
              }
              const enumGalgasBool test_11 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1467)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1467)).boolEnum () ;
              if (kBoolTrue == test_11) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1468)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              const enumGalgasBool test_12 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1471)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1471)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1471)).boolEnum () ;
              if (kBoolTrue == test_12) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1472)) ;
              }
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              const enumGalgasBool test_13 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1478)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1478)).boolEnum () ;
              if (kBoolTrue == test_13) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1479)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              const enumGalgasBool test_14 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1482)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1482)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1482)).boolEnum () ;
              if (kBoolTrue == test_14) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)) ;
              }
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              } break ;
            }
          }
          } break ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ConditionalJumpTerminator terminatorSize'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native: {
        result_outSize = GALGAS_uint ((uint32_t) 2U) ;
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
        result_outSize = GALGAS_uint ((uint32_t) 4U) ;
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
        result_outSize = GALGAS_uint ((uint32_t) 6U) ;
        } break ;
      }
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          result_outSize = GALGAS_uint ((uint32_t) 2U) ;
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          result_outSize = GALGAS_uint ((uint32_t) 4U) ;
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          result_outSize = GALGAS_uint ((uint32_t) 6U) ;
          } break ;
        }
      }
    }else if (kBoolFalse == test_1) {
      if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              result_outSize = GALGAS_uint ((uint32_t) 4U) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              result_outSize = GALGAS_uint ((uint32_t) 4U) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              result_outSize = GALGAS_uint ((uint32_t) 8U) ;
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              result_outSize = GALGAS_uint ((uint32_t) 8U) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              result_outSize = GALGAS_uint ((uint32_t) 10U) ;
              } break ;
            }
          }
          } break ;
        }
      }
    }
  }
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18ConditionalJumpTerminator generateTerminatorCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         GALGAS_codeList & outArgument_outCode,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  GALGAS_uint var_trueTargetAddress ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_trueTargetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1538)) ;
  GALGAS_uint var_falseTargetAddress ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_falseTargetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1539)) ;
  GALGAS_lstring var_Zlabel = GALGAS_lstring::constructor_new (GALGAS_string ("_Bcc_").add_operation (constinArgument_inAddress.reader_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1540)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1540)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native: {
        outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1544)) ;
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
        outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1546)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1546)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1547)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1547))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1547)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1548))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1548)) ;
        } break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
        outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1550)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1550)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1552))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1552)) ;
        } break ;
      }
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, object->mAttribute_mConditionalBranch, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1557)) ;
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)), var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1561))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1561)) ;
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1565))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1565)) ;
          } break ;
        }
      }
    }else if (kBoolFalse == test_1) {
      if (object->mAttribute_mBranchModeOnFalseLabel.isValid ()) {
        switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)), var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1581)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1582)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1582))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1582)) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1584)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1584)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1586))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1586)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1587))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1587)) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1590)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1590))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1590)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1591))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1591)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592)) ;
              } break ;
            }
          }
          } break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
          if (object->mAttribute_mBranchModeOnTrueLabel.isValid ()) {
            switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
            case GALGAS_conditionalBranchMode::kNotBuilt:
              break ;
            case GALGAS_conditionalBranchMode::kEnum_native: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicBRA: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)), var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)) ;
              } break ;
            case GALGAS_conditionalBranchMode::kEnum_ipicGOTO: {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608)) ;
              } break ;
            }
          }
          } break ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18ConditionalJumpTerminator isEqualToTerminator'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1621)) ;
      }
    }
    GALGAS_ipic_31__38_ConditionalJumpTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mConditionalBranch.objectCompare (var_t.reader_mConditionalBranch (SOURCE_FILE ("ipic18_terminators.galgas", 1622)))) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (var_t.reader_mTargetLabelWhenTrue (SOURCE_FILE ("ipic18_terminators.galgas", 1624)).mAttribute_string)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mBranchModeOnTrueLabel.objectCompare (var_t.reader_mBranchModeOnTrueLabel (SOURCE_FILE ("ipic18_terminators.galgas", 1627)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (var_t.reader_mTargetLabelWhenFalse (SOURCE_FILE ("ipic18_terminators.galgas", 1630)).mAttribute_string)) ;
    }
    const enumGalgasBool test_5 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_5) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mBranchModeOnFalseLabel.objectCompare (var_t.reader_mBranchModeOnFalseLabel (SOURCE_FILE ("ipic18_terminators.galgas", 1633)))) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18_condition_skip_instruction instructionSize'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                       categoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (defineCategoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 45)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 44)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (void) {
  enterCategoryMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                         categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18InstructionWithNoOperand instructionDisplay'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (categoryReader_mnemonic (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                          categoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay (defineCategoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@ipic18InstructionWithNoOperand generateCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  GALGAS_uint var_c ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
      break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT: {
      var_c = GALGAS_uint ((uint32_t) 4U) ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW: {
      var_c = GALGAS_uint ((uint32_t) 7U) ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP: {
      var_c = GALGAS_uint ((uint32_t) 0U) ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP: {
      var_c = GALGAS_uint ((uint32_t) 6U) ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH: {
      var_c = GALGAS_uint ((uint32_t) 5U) ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET: {
      var_c = GALGAS_uint ((uint32_t) 255U) ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP: {
      var_c = GALGAS_uint ((uint32_t) 3U) ;
      } break ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (categoryReader_mnemonic (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), GALGAS_uintlist::constructor_listWithValue (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 111)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                    categoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_InstructionWithNoOperand_generateCode (defineCategoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_FDA instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_string var_s ;
  if (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid ()) {
    switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
      break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF: {
      var_s = GALGAS_string ("ADDWF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC: {
      var_s = GALGAS_string ("ADDWFC") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF: {
      var_s = GALGAS_string ("ANDWF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF: {
      var_s = GALGAS_string ("COMF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF: {
      var_s = GALGAS_string ("DECF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF: {
      var_s = GALGAS_string ("INCF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF: {
      var_s = GALGAS_string ("IORWF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF: {
      var_s = GALGAS_string ("MOVF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF: {
      var_s = GALGAS_string ("RLCF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF: {
      var_s = GALGAS_string ("RLNCF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF: {
      var_s = GALGAS_string ("RRCF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF: {
      var_s = GALGAS_string ("RRNCF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB: {
      var_s = GALGAS_string ("SUBFWB") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF: {
      var_s = GALGAS_string ("SUBWF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB: {
      var_s = GALGAS_string ("SUBWFB") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF: {
      var_s = GALGAS_string ("SWAPF") ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF: {
      var_s = GALGAS_string ("XORWF") ;
      } break ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.operator_and (object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string (", W, BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 146)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 147)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_s.dotAssign_operation (GALGAS_string (", F, BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 148)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_s.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 150)) ;
      }else if (kBoolFalse == test_2) {
        var_s.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 152)) ;
      }
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 154)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_FDA generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_uint var_code ;
  if (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid ()) {
    switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
      break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF: {
      var_code = GALGAS_uint ((uint32_t) 9216U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC: {
      var_code = GALGAS_uint ((uint32_t) 8192U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF: {
      var_code = GALGAS_uint ((uint32_t) 5120U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF: {
      var_code = GALGAS_uint ((uint32_t) 7168U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF: {
      var_code = GALGAS_uint ((uint32_t) 1024U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF: {
      var_code = GALGAS_uint ((uint32_t) 10240U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF: {
      var_code = GALGAS_uint ((uint32_t) 4096U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF: {
      var_code = GALGAS_uint ((uint32_t) 20480U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF: {
      var_code = GALGAS_uint ((uint32_t) 13312U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF: {
      var_code = GALGAS_uint ((uint32_t) 17408U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF: {
      var_code = GALGAS_uint ((uint32_t) 12288U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF: {
      var_code = GALGAS_uint ((uint32_t) 16384U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB: {
      var_code = GALGAS_uint ((uint32_t) 21504U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF: {
      var_code = GALGAS_uint ((uint32_t) 23552U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB: {
      var_code = GALGAS_uint ((uint32_t) 22528U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF: {
      var_code = GALGAS_uint ((uint32_t) 14336U) ;
      } break ;
    case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF: {
      var_code = GALGAS_uint ((uint32_t) 6144U) ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 185)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 186)) ;
  }
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 188)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_FA instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_string var_s ;
  if (object->mAttribute_mFAinstruction.isValid ()) {
    switch (object->mAttribute_mFAinstruction.enumValue ()) {
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF: {
      var_s = GALGAS_string ("CLRF") ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF: {
      var_s = GALGAS_string ("MOVWF") ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF: {
      var_s = GALGAS_string ("MULWF") ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF: {
      var_s = GALGAS_string ("NEGF") ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF: {
      var_s = GALGAS_string ("SETF") ;
      } break ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 214)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18_intermediate_instruction_FA generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                           const GALGAS_uint /* constinArgument_inAddress */,
                                                                                           const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_uint var_code ;
  if (object->mAttribute_mFAinstruction.isValid ()) {
    switch (object->mAttribute_mFAinstruction.enumValue ()) {
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF: {
      var_code = GALGAS_uint ((uint32_t) 27136U) ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF: {
      var_code = GALGAS_uint ((uint32_t) 28160U) ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF: {
      var_code = GALGAS_uint ((uint32_t) 512U) ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF: {
      var_code = GALGAS_uint ((uint32_t) 27648U) ;
      } break ;
    case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF: {
      var_code = GALGAS_uint ((uint32_t) 26624U) ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 233)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 234)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 239))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 237)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_MOVFF instructionSize'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_MOVFF instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  GALGAS_string var_s = GALGAS_string ("MOVFF ").add_operation (object->mAttribute_mSourceRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (object->mAttribute_mDestinationRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 258)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_MOVFF generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  GALGAS_uintlist var_code = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 268)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 49152U).operator_or (object->mAttribute_mSourceRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mDestinationRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@ipic18_intermediate_instruction_literalOperation instructionDisplay'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_string var_s = categoryReader_mnemonic (object->mAttribute_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (object->mAttribute_mLiteralValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18_intermediate_instruction_literalOperation generateCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                         const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                         const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                         const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                         GALGAS_codeList & outArgument_outCode,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code ;
  if (object->mAttribute_mLiteralInstruction.isValid ()) {
    switch (object->mAttribute_mLiteralInstruction.enumValue ()) {
    case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
      break ;
    case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW: {
      var_code = GALGAS_uint ((uint32_t) 3840U) ;
      } break ;
    case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW: {
      var_code = GALGAS_uint ((uint32_t) 2816U) ;
      } break ;
    case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW: {
      var_code = GALGAS_uint ((uint32_t) 2304U) ;
      } break ;
    case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW: {
      var_code = GALGAS_uint ((uint32_t) 3584U) ;
      } break ;
    case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW: {
      var_code = GALGAS_uint ((uint32_t) 3328U) ;
      } break ;
    case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW: {
      var_code = GALGAS_uint ((uint32_t) 2048U) ;
      } break ;
    case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW: {
      var_code = GALGAS_uint ((uint32_t) 2560U) ;
      } break ;
    }
  }
  var_code = var_code.operator_or (object->mAttribute_mLiteralValue COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 304)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 307))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_LFSR instructionSize'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_LFSR instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  GALGAS_string var_s = GALGAS_string ("LFSR ").add_operation (object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (object->mAttribute_mValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 325)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_LFSR generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  GALGAS_uintlist var_code = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 60928U).operator_or (object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).operator_or (object->mAttribute_mValue.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mValue.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_FBA instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  GALGAS_string var_s = categoryReader_mnemonic (object->mAttribute_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 351)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_FBA generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  GALGAS_uint var_code ;
  if (object->mAttribute_mBitOrientedOp.isValid ()) {
    switch (object->mAttribute_mBitOrientedOp.enumValue ()) {
    case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
      break ;
    case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF: {
      var_code = GALGAS_uint ((uint32_t) 36864U) ;
      } break ;
    case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF: {
      var_code = GALGAS_uint ((uint32_t) 32768U) ;
      } break ;
    case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG: {
      var_code = GALGAS_uint ((uint32_t) 28672U) ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 367)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 368)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_MOVLB instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  GALGAS_string var_s = GALGAS_string ("MOVLB ").add_operation (object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)).reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 385)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_MOVLB generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 256U).operator_or (object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 398))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 396)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_TBLRD instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  GALGAS_string var_s = GALGAS_string ("TBLRD ").add_operation (categoryReader_mnemonic (object->mAttribute_mOption, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 409)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_TBLRD generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  GALGAS_uint var_code ;
  if (object->mAttribute_mOption.isValid ()) {
    switch (object->mAttribute_mOption.enumValue ()) {
    case GALGAS_tableAccessOption::kNotBuilt:
      break ;
    case GALGAS_tableAccessOption::kEnum_simpleAccess: {
      var_code = GALGAS_uint ((uint32_t) 8U) ;
      } break ;
    case GALGAS_tableAccessOption::kEnum_postIncrement: {
      var_code = GALGAS_uint ((uint32_t) 9U) ;
      } break ;
    case GALGAS_tableAccessOption::kEnum_postDecrement: {
      var_code = GALGAS_uint ((uint32_t) 10U) ;
      } break ;
    case GALGAS_tableAccessOption::kEnum_preIncrement: {
      var_code = GALGAS_uint ((uint32_t) 11U) ;
      } break ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 426)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_TBLWT instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  GALGAS_string var_s = GALGAS_string ("TBLWT ").add_operation (categoryReader_mnemonic (object->mAttribute_mOption, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 439)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_TBLWT generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  GALGAS_uint var_code ;
  if (object->mAttribute_mOption.isValid ()) {
    switch (object->mAttribute_mOption.enumValue ()) {
    case GALGAS_tableAccessOption::kNotBuilt:
      break ;
    case GALGAS_tableAccessOption::kEnum_simpleAccess: {
      var_code = GALGAS_uint ((uint32_t) 12U) ;
      } break ;
    case GALGAS_tableAccessOption::kEnum_postIncrement: {
      var_code = GALGAS_uint ((uint32_t) 13U) ;
      } break ;
    case GALGAS_tableAccessOption::kEnum_postDecrement: {
      var_code = GALGAS_uint ((uint32_t) 14U) ;
      } break ;
    case GALGAS_tableAccessOption::kEnum_preIncrement: {
      var_code = GALGAS_uint ((uint32_t) 15U) ;
      } break ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 458))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 456)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_MNOP instructionSize'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  result_outSize = object->mAttribute_mOccurrenceFactor.mAttribute_uint.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 469)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_MNOP instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  GALGAS_string var_s = GALGAS_string ("MNOP ").add_operation (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 475)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 475)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_MNOP generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 486)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 488)).isValid ()) {
    uint32_t variant_16015 = object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 488)).uintValue () ;
    bool loop_16015 = true ;
    while (loop_16015) {
      loop_16015 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 489)))).isValid () ;
      if (loop_16015) {
        loop_16015 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 489)))).boolValue () ;
      }
      if (loop_16015 && (0 == variant_16015)) {
        loop_16015 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 488)) ;
      }
      if (loop_16015) {
        variant_16015 -- ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    NOP"), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 491))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 491)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 492)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  GALGAS_string var_s = GALGAS_string ("MOVLW ((").add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)).add_operation (object->mAttribute_mOffset.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)).add_operation (object->mAttribute_mRightShift.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 503)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 504)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18_intermediate_MOV_LABEL_W generateCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                           const GALGAS_uint /* constinArgument_inAddress */,
                                                                                           const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  GALGAS_uint var_address ;
  constinArgument_inDataAddressMap.method_searchKey (object->mAttribute_mLabel, var_address, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 514)) ;
  GALGAS_uint var_code = var_address.add_operation (object->mAttribute_mOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 515)).right_shift_operation (object->mAttribute_mRightShift COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 515)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 515)) ;
  GALGAS_uint var_code_5F_MOVLW = GALGAS_uint ((uint32_t) 3584U) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    MOVLW ((_data_").add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)).add_operation (object->mAttribute_mOffset.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)).add_operation (object->mAttribute_mRightShift.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 518)), GALGAS_uintlist::constructor_listWithValue (var_code.operator_or (var_code_5F_MOVLW COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 519))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 519))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 517)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_BLANK instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  GALGAS_string var_s = GALGAS_string ("BLANK ").add_operation (object->mAttribute_mBlankValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 530)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_BLANK generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mBlankValue COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 540)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 542)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 543))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_FNOP instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  GALGAS_string var_s = GALGAS_string ("FNOP ").add_operation (object->mAttribute_mBlankValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 554)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_FNOP generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mBlankValue COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 564)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 566)), GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 567))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 565)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@ipic18_skip_instruction_compare_register instructionDisplay'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  GALGAS_string var_s = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 577)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 577)) ;
  if (object->mAttribute_mCompareInstruction.isValid ()) {
    switch (object->mAttribute_mCompareInstruction.enumValue ()) {
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ: {
      var_s.dotAssign_operation (GALGAS_string ("!= W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 579)) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT: {
      var_s.dotAssign_operation (GALGAS_string ("<= W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT: {
      var_s.dotAssign_operation (GALGAS_string (">= W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ: {
      var_s.dotAssign_operation (GALGAS_string ("!= 0")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 582)) ;
      } break ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (" \? ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 584)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 584))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 584)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 585)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                          categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18_skip_instruction_compare_register generateCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  GALGAS_uint var_code ;
  if (object->mAttribute_mCompareInstruction.isValid ()) {
    switch (object->mAttribute_mCompareInstruction.enumValue ()) {
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ: {
      var_code = GALGAS_uint ((uint32_t) 25088U) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT: {
      var_code = GALGAS_uint ((uint32_t) 25600U) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT: {
      var_code = GALGAS_uint ((uint32_t) 24576U) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ: {
      var_code = GALGAS_uint ((uint32_t) 26112U) ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 603)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 606)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 606)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 606)) ;
  GALGAS_string var_s = GALGAS_string ("    ") ;
  if (object->mAttribute_mCompareInstruction.isValid ()) {
    switch (object->mAttribute_mCompareInstruction.enumValue ()) {
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ: {
      var_s.dotAssign_operation (GALGAS_string ("CPFSEQ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 610)) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT: {
      var_s.dotAssign_operation (GALGAS_string ("CPFSGT")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 611)) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT: {
      var_s.dotAssign_operation (GALGAS_string ("CPFSLT")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 612)) ;
      } break ;
    case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ: {
      var_s.dotAssign_operation (GALGAS_string ("TSTFSZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 613)) ;
      } break ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 615))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)) ;
  const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 616)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_s.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 617)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s, GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 620)) ;
  GALGAS_codeList var_c ;
  callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 624)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 623)) ;
  outArgument_outCode.dotAssign_operation (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 629)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                    categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction ;
  callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 643)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_n.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_outModifiedEmbeddedInstruction, object->mAttribute_mCompareInstruction, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 652)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_skip_instruction_BitTestSkip instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 669)) ;
  }
  var_s.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 671)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 671)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 671)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 671))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 671)) ;
  GALGAS_stringlist var_x = callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 673)) ;
  var_s.dotAssign_operation (var_x.reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 674))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 674)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 675)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                          categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_skip_instruction_BitTestSkip generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = GALGAS_uint ((uint32_t) 40960U) ;
  }else if (kBoolFalse == test_0) {
    var_code = GALGAS_uint ((uint32_t) 45056U) ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 691)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 692)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 694)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 694)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 694)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 695)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 695)) ;
  GALGAS_string var_s = GALGAS_string ("    ") ;
  const enumGalgasBool test_2 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_2) {
    var_s.dotAssign_operation (GALGAS_string ("BTFSS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 699)) ;
  }else if (kBoolFalse == test_2) {
    var_s.dotAssign_operation (GALGAS_string ("BTFSC")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 701)) ;
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 703)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 703)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 703))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 703)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s, GALGAS_uintlist::constructor_listWithValue (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 707))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 705)) ;
  GALGAS_codeList var_c ;
  callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 708)) ;
  outArgument_outCode.dotAssign_operation (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 714)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                    categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction ;
  callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 729)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 728)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_n.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_outModifiedEmbeddedInstruction, object->mAttribute_mSkipIfSet, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 737)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18_skip_instruction_FDA instructionDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_string var_s ;
  if (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid ()) {
    switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ: {
      var_s = GALGAS_string ("DECFSZ") ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ: {
      var_s = GALGAS_string ("DCFSNZ") ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ: {
      var_s = GALGAS_string ("INCFSZ") ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ: {
      var_s = GALGAS_string ("INFSNZ") ;
      } break ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 760))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 760)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 762)) ;
  }
  var_s.dotAssign_operation (GALGAS_string (" \? ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 764)) ;
  GALGAS_stringlist var_x = callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 765)) ;
  var_s.dotAssign_operation (var_x.reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 766))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 766)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 767)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                          categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ipic18_skip_instruction_FDA generateCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_uint var_binCode ;
  if (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid ()) {
    switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ: {
      var_binCode = GALGAS_uint ((uint32_t) 11264U) ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ: {
      var_binCode = GALGAS_uint ((uint32_t) 19456U) ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ: {
      var_binCode = GALGAS_uint ((uint32_t) 15360U) ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ: {
      var_binCode = GALGAS_uint ((uint32_t) 18432U) ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 784)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 785)) ;
  }
  var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 787)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 787)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 787)) ;
  GALGAS_string var_assemblyCode = GALGAS_string ("    ") ;
  if (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid ()) {
    switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ: {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("DECFSZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 791)) ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ: {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("DCFSNZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 792)) ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ: {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("INCFSZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 793)) ;
      } break ;
    case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ: {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("INFSNZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 794)) ;
      } break ;
    }
  }
  var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 796))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 796)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_assemblyCode.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)) ;
  }else if (kBoolFalse == test_1) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 800)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 801)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 803)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 805)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 810))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 808)) ;
  GALGAS_codeList var_c ;
  callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 812)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 811)) ;
  outArgument_outCode.dotAssign_operation (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 817)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction ;
  callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 832)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 831)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_n.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_outModifiedEmbeddedInstruction, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 840)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@ipic18_intermediate_JSR instructionSize'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative: case GALGAS_jumpInstructionKind::kEnum_relative: {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute: {
      result_outSize = GALGAS_uint ((uint32_t) 4U) ;
      } break ;
    }
  }
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative: case GALGAS_jumpInstructionKind::kEnum_relative: {
      const enumGalgasBool test_0 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 874)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 874)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 875)) ;
      }
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute: {
      } break ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (void) {
  enterCategoryMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                         categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative: {
      const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 893)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 893)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 894)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (GALGAS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)) ;
        outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 896))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 896)) ;
      }
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_relative: {
      const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 899)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 899)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 901)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 900)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 900)).add_operation (GALGAS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 901)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 902)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 902))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 900)) ;
      }
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute: {
      } break ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18_intermediate_JSR instructionDisplay'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_string var_s ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative: {
      var_s = GALGAS_string ("JSR ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)) ;
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_relative: {
      var_s = GALGAS_string ("RCALL ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 914)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 914)) ;
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute: {
      var_s = GALGAS_string ("CALL ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 915)) ;
      } break ;
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 917)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@ipic18_intermediate_JSR generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                             const GALGAS_uint constinArgument_inAddress,
                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                             GALGAS_codeList & outArgument_outCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 927)) ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative: case GALGAS_jumpInstructionKind::kEnum_relative: {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 930)) ;
      } break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute: {
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 932)) ;
      } break ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@ipic18_intermediate_instruction_computed_rcall instructionSize'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)).substract_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_string var_s = GALGAS_string ("COMPUTED ") ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 956)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string ("(uses CALL)")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 957)) ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 959)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_31368 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_31368.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_31420 (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_31368.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 961)), kEnumeration_up) ;
    while (enumerator_31420.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GALGAS_string ("   ").add_operation (enumerator_31420.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 962))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 962)) ;
      enumerator_31420.gotoNextObject () ;
    }
    enumerator_31368.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_uint temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address = constinArgument_inAddress.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 974)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_31894 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_31894.hasCurrentObject ()) {
    callCategoryMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_31894.current_mInstruction (HERE).ptr (), var_address, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 976)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 982)) ;
    enumerator_31894.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 985)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 985)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 985)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 986)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (void) {
  enterCategoryMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                         categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                        const GALGAS_uint constinArgument_inAddress,
                                                                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                                        GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                                        GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_unusedConversionCount = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_unusedListing = GALGAS_string::makeEmptyString () ;
  GALGAS_uint temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address = constinArgument_inAddress.add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1003)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32855 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_32855.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction joker_33081_0 ; // Joker input parameter
    callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32855.current_mInstruction (HERE).ptr (), var_address, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount, var_unusedListing, joker_33081_0, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1006)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
    enumerator_32855.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1017)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1017)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1017)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1018)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1019)).add_operation (GALGAS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1019))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1019)) ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetInstructions, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1020)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18_intermediate_instruction_computed_rcall generateCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                          const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                          GALGAS_codeList & outArgument_outCode,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_lstring var_target = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_goto_4"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1035)) ;
  GALGAS_uint var_computetedGoto_34_Address ;
  constinArgument_inSymbolTable.method_searchKey (var_target, var_computetedGoto_34_Address, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)) ;
  GALGAS_uint var_currentInstructionAddress ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_currentInstructionAddress = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address, var_target, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1042)) ;
  }else if (kBoolFalse == test_0) {
    var_currentInstructionAddress = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1044)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address, var_target, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1045)) ;
  }
  GALGAS_uint var_instructionFollowingComputedRcallAddress = var_currentInstructionAddress.add_operation (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)).multiply_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1047)) ;
  GALGAS_lstring var_nextInstructionLabel = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.reader_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1048)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1048)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1048)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34648 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_34648.hasCurrentObject ()) {
    var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1051)) ;
    GALGAS_codeList var_instructionCode ;
    callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_34648.current_mInstruction (HERE).ptr (), var_currentInstructionAddress, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
    outArgument_outCode.dotAssign_operation (var_instructionCode  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1058)) ;
    var_currentInstructionAddress = var_currentInstructionAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1059)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1060)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress, var_instructionFollowingComputedRcallAddress, var_nextInstructionLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1061))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1061)) ;
      var_currentInstructionAddress = var_currentInstructionAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1062)) ;
    }
    enumerator_34648.gotoNextObject () ;
  }
  outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1066))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1066)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_IF_BitTest addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 12)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 19)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_IF_IncDec addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 26)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_JUMP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pic18Instruction_JUMPCC addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 40)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_FOREVER addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 47)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@pic18Instruction_repetitionStatique addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 54)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@pic18Instruction_checkbank addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_LDATAPTR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_LDATAPTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_LTBLPTR addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pic18Instruction_MNOP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@pic18Instruction_banksel addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_checknobank addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@pic18Instruction_banksel_register addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18Instruction_computed_bra addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  cEnumerator_lstringlist enumerator_3277 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_3277.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_3277.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 104)) ;
    enumerator_3277.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@pic18Instruction_computed_goto addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  cEnumerator_lstringlist enumerator_3528 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_3528.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_3528.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 113)) ;
    enumerator_3528.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines, NULL) ;

