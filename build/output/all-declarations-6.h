#ifndef all_2D_declarations_2D__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract category method '@bitNumberExpression getBitNumber'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_bitNumberExpression_getBitNumber) (const class cPtr_bitNumberExpression * inObject,
                                                                          const class GALGAS_bitSliceTable constinArgument0,
                                                                          class GALGAS_uint & outArgument1,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getBitNumber (const int32_t inClassIndex,
                                       categoryMethodSignature_bitNumberExpression_getBitNumber inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getBitNumber (const class cPtr_bitNumberExpression * inObject,
                                      const GALGAS_bitSliceTable constin_inBitSliceTable,
                                      GALGAS_uint & out_outBitNumber,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@baseline_instruction_FD_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@baseline_F_instruction_base_code mnemonic'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@baseline_bit_oriented_op mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@baseline_literal_instruction_opcode mnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Reader '@baseline_IF_BitTest_opcode mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@baseline_WO_OPERAND_group mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category method '@baseline_conditionExpression build_intermediate_condition_instructions'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions) (const class cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                                            const class GALGAS_uint constinArgument0,
                                                                                                                            const class GALGAS_registerTable constinArgument1,
                                                                                                                            class GALGAS_uint & ioArgument2,
                                                                                                                            const class GALGAS_bool constinArgument3,
                                                                                                                            const class GALGAS_location constinArgument4,
                                                                                                                            const class GALGAS_string constinArgument5,
                                                                                                                            class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument6,
                                                                                                                            class GALGAS_stringset & ioArgument7,
                                                                                                                            class C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_build_5F_intermediate_5F_condition_5F_instructions (const int32_t inClassIndex,
                                                                             categoryMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_build_5F_intermediate_5F_condition_5F_instructions (const class cPtr_baseline_5F_conditionExpression * inObject,
                                                                            const GALGAS_uint constin_inCurrentPage,
                                                                            const GALGAS_registerTable constin_inRegisterTable,
                                                                            GALGAS_uint & io_ioLocalLabelIndex,
                                                                            const GALGAS_bool constin_inComplementaryBranch,
                                                                            const GALGAS_location constin_inInstructionLocation,
                                                                            const GALGAS_string constin_inTargetLabel,
                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                            GALGAS_stringset & io_ioUsedRegisters,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category reader '@baseline_assembly_instruction length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_baseline_5F_assembly_5F_instruction_length) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_length (const int32_t inClassIndex,
                                 categoryReaderSignature_baseline_5F_assembly_5F_instruction_length inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_length (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@midrange_instruction_FD_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@midrange_F_instruction_base_code mnemonic'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@midrange_bit_oriented_op mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@midrange_literal_instruction_opcode mnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@midrange_conditionExpression buildIPICinstructionForCondition'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_conditionExpression_buildIPICinstructionForCondition) (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                          const class GALGAS_uint constinArgument0,
                                                                                                          const class GALGAS_uint constinArgument1,
                                                                                                          const class GALGAS_registerTable constinArgument2,
                                                                                                          class GALGAS_uint & ioArgument3,
                                                                                                          const class GALGAS_bool constinArgument4,
                                                                                                          const class GALGAS_location constinArgument5,
                                                                                                          const class GALGAS_string constinArgument6,
                                                                                                          class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument7,
                                                                                                          class GALGAS_string & ioArgument8,
                                                                                                          class GALGAS_stringset & ioArgument9,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildIPICinstructionForCondition (const int32_t inClassIndex,
                                                           categoryMethodSignature_midrange_5F_conditionExpression_buildIPICinstructionForCondition inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildIPICinstructionForCondition (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                          const GALGAS_uint constin_inTotalBankCount,
                                                          const GALGAS_uint constin_inCurrentBank,
                                                          const GALGAS_registerTable constin_inRegisterTable,
                                                          GALGAS_uint & io_ioLocalLabelIndex,
                                                          const GALGAS_bool constin_inComplementaryBranch,
                                                          const GALGAS_location constin_inInstructionLocation,
                                                          const GALGAS_string constin_inTargetLabel,
                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                          GALGAS_string & io_ioListFileContents,
                                                          GALGAS_stringset & io_ioUsedRegisters,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract category method '@midrange_conditionExpression computeInstructionCountForCondition'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_conditionExpression_computeInstructionCountForCondition) (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                                                                             const class GALGAS_bool constinArgument0,
                                                                                                             class GALGAS_uint & outArgument1,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_computeInstructionCountForCondition (const int32_t inClassIndex,
                                                              categoryMethodSignature_midrange_5F_conditionExpression_computeInstructionCountForCondition inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_computeInstructionCountForCondition (const class cPtr_midrange_5F_conditionExpression * inObject,
                                                             const GALGAS_bool constin_inComplementaryBranch,
                                                             GALGAS_uint & out_outInstructionCount,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@midrange_instruction_FD_base_code basecode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint categoryReader_basecode (const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@midrange_F_instruction_base_code baseCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint categoryReader_baseCode (const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@midrange_bit_oriented_op baseCode'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint categoryReader_baseCode (const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@midrange_literal_instruction_opcode baseCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint categoryReader_baseCode (const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Reader '@pic18RegisterComparison mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_pic_31__38_RegisterComparison & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Reader '@conditional_branch condition'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_condition (const class GALGAS_conditional_5F_branch & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Reader '@pic18InstructionWithNoOperandKind assemblyCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_assemblyCode (const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@FA_instruction_base_code mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category Reader '@bit_oriented_op mnemonic'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_bit_5F_oriented_5F_op & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Reader '@conditional_branch mnemonic'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_conditional_5F_branch & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Reader '@literal_instruction_opcode mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_literal_5F_instruction_5F_opcode & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category Reader '@tableAccessOption mnemonic'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_tableAccessOption & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category Reader '@ipic18_intermediate_registerExpression isEqualToRegister'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_isEqualToRegister (const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                                    const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                             const class GALGAS_uint constinArgument0,
                                                                                                             const class GALGAS_string constinArgument1,
                                                                                                             const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                             class GALGAS_branchOverflowMap & ioArgument3,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_instructionRelativeBranchOverflow (const int32_t inClassIndex,
                                                            categoryMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_instructionRelativeBranchOverflow (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GALGAS_uint constin_inAddress,
                                                           const GALGAS_string constin_inBlockLabel,
                                                           const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                              const class GALGAS_uint constinArgument0,
                                                                                                              const class GALGAS_string constinArgument1,
                                                                                                              const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                              const class GALGAS_string constinArgument3,
                                                                                                              class GALGAS_branchOverflowMap & ioArgument4,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_terminatorRelativeBranchOverflow (const int32_t inClassIndex,
                                                           categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_terminatorRelativeBranchOverflow (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GALGAS_uint constin_inAddress,
                                                          const GALGAS_string constin_inBlockLabel,
                                                          const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                          const GALGAS_string constin_inNextBlockLabel,
                                                          GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Category method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                       const class GALGAS_uint constinArgument0,
                                                                                                                       const class GALGAS_string constinArgument1,
                                                                                                                       const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                                       const class GALGAS_string constinArgument3,
                                                                                                                       class GALGAS_uint & ioArgument4,
                                                                                                                       class GALGAS_string & ioArgument5,
                                                                                                                       class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument6,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performTerminatorRelativeBranchResolution (const int32_t inClassIndex,
                                                                    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performTerminatorRelativeBranchResolution (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                   const GALGAS_uint constin_inAddress,
                                                                   const GALGAS_string constin_inBlockLabel,
                                                                   const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                   const GALGAS_string constin_inNextBlockLabel,
                                                                   GALGAS_uint & io_ioConversionCount,
                                                                   GALGAS_string & io_ioListFileContents,
                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@ipic18SequentialInstruction generateCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_generateCode) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                        const class GALGAS_uint constinArgument0,
                                                                                        const class GALGAS_symbolTableForRelativesResolution constinArgument1,
                                                                                        const class GALGAS_pic_31__38__5F_dataAddressMap constinArgument2,
                                                                                        class GALGAS_codeList & outArgument3,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCode (const int32_t inClassIndex,
                                       categoryMethodSignature_ipic_31__38_SequentialInstruction_generateCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCode (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                      const GALGAS_uint constin_inAddress,
                                      const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                      const GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                      GALGAS_codeList & out_outCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@ipic18AbstractBlockTerminator generateTerminatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const class GALGAS_uint constinArgument0,
                                                                                                    const class GALGAS_symbolTableForRelativesResolution constinArgument1,
                                                                                                    const class GALGAS_string constinArgument2,
                                                                                                    class GALGAS_codeList & outArgument3,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateTerminatorCode (const int32_t inClassIndex,
                                                 categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateTerminatorCode (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                const GALGAS_uint constin_inAddress,
                                                const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                const GALGAS_string constin_inNextBlockLabel,
                                                GALGAS_codeList & out_outCode,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category reader '@ipic18AbstractBlockTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                              const class GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument0,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isEqualToTerminator (const int32_t inClassIndex,
                                              categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isEqualToTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GALGAS_ipic_31__38_AbstractBlockTerminator & constin_inTerminator,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@ipic18AbstractBlockTerminator terminatorDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_terminatorDisplay) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                              const class GALGAS_string & constinArgument0,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_terminatorDisplay (const int32_t inClassIndex,
                                            categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_terminatorDisplay inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_terminatorDisplay (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GALGAS_string & constin_inNextBlockLabel,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@ipic18AbstractBlockTerminator terminatorSize'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_terminatorSize) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                         const class GALGAS_string & constinArgument0,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_terminatorSize (const int32_t inClassIndex,
                                         categoryReaderSignature_ipic_31__38_AbstractBlockTerminator_terminatorSize inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_terminatorSize (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                     const GALGAS_string & constin_inNextBlockLabel,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category reader '@ipic18SequentialInstruction instructionSize'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionSize) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionSize (const int32_t inClassIndex,
                                          categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionSize inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Category method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                      const class GALGAS_uint constinArgument0,
                                                                                                                      const class GALGAS_string constinArgument1,
                                                                                                                      const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                                      class GALGAS_uint & ioArgument3,
                                                                                                                      class GALGAS_string & ioArgument4,
                                                                                                                      class GALGAS_ipic_31__38_SequentialInstruction & outArgument5,
                                                                                                                      class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performInstructionRelativeBranchResolution (const int32_t inClassIndex,
                                                                     categoryMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performInstructionRelativeBranchResolution (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    const GALGAS_uint constin_inAddress,
                                                                    const GALGAS_string constin_inBlockLabel,
                                                                    const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    GALGAS_uint & io_ioConversionCount,
                                                                    GALGAS_string & io_ioListFileContents,
                                                                    GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@ipic18SequentialInstruction instructionDisplay'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionDisplay) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 class C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionDisplay (const int32_t inClassIndex,
                                             categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionDisplay inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_instructionDisplay (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@pic18InstructionWithNoOperandKind mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mnemonic (const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction) (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                                      const class GALGAS_uint constinArgument0,
                                                                                                      const class GALGAS_routineMap constinArgument1,
                                                                                                      const class GALGAS_registerTable constinArgument2,
                                                                                                      const class GALGAS_pic_31__38__5F_dataMap constinArgument3,
                                                                                                      const class GALGAS_constantMap constinArgument4,
                                                                                                      class GALGAS_uint & ioArgument5,
                                                                                                      const class GALGAS_bool constinArgument6,
                                                                                                      class GALGAS_stringset & ioArgument7,
                                                                                                      class GALGAS_ipic_31__38_SequentialInstruction & outArgument8,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSimpleInstruction (const int32_t inClassIndex,
                                                   categoryMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSimpleInstruction (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                  const GALGAS_uint constin_inAccessBankSplitOffset,
                                                  const GALGAS_routineMap constin_inRoutineMap,
                                                  const GALGAS_registerTable constin_inRegisterTable,
                                                  const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                                  const GALGAS_constantMap constin_inConstantMap,
                                                  GALGAS_uint & io_ioCurrentBank,
                                                  const GALGAS_bool constin_inShouldPreserveBSR,
                                                  GALGAS_stringset & io_ioUsedRegisters,
                                                  GALGAS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@pic18AbstractCaseItem analyzeCaseItem'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem) (const class cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                                     const class GALGAS_registerTable constinArgument0,
                                                                                     const class GALGAS_constantMap constinArgument1,
                                                                                     const class GALGAS_lstring constinArgument2,
                                                                                     class GALGAS_stringset & ioArgument3,
                                                                                     class GALGAS_caseConstantMap & ioArgument4,
                                                                                     class GALGAS_uint & ioArgument5,
                                                                                     class GALGAS_ipic_31__38_SequentialInstructionList & ioArgument6,
                                                                                     class GALGAS_ipic_31__38_BlockList & ioArgument7,
                                                                                     class GALGAS_lstring & ioArgument8,
                                                                                     class GALGAS_sint_36__34_ & ioArgument9,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeCaseItem (const int32_t inClassIndex,
                                          categoryMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeCaseItem (const class cPtr_pic_31__38_AbstractCaseItem * inObject,
                                         const GALGAS_registerTable constin_inRegisterTable,
                                         const GALGAS_constantMap constin_inConstantMap,
                                         const GALGAS_lstring constin_inConditionTrueLabel,
                                         GALGAS_stringset & io_ioUsedRegisters,
                                         GALGAS_caseConstantMap & io_ioCaseConstantMap,
                                         GALGAS_uint & io_ioLocalLabelIndex,
                                         GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                         GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                         GALGAS_lstring & io_ioBlockLabel,
                                         GALGAS_sint_36__34_ & io_ioLastComparisonValue,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks) (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                                      class GALGAS_stringset & ioArgument0,
                                                                                                      const class GALGAS_blockInstructionBlockMap constinArgument1,
                                                                                                      const class GALGAS_string constinArgument2,
                                                                                                      const class GALGAS_uint constinArgument3,
                                                                                                      class GALGAS_blockInitialBankSelectionMap & ioArgument4,
                                                                                                      class GALGAS_bool & ioArgument5,
                                                                                                      class GALGAS_bool & ioArgument6,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addVisitedBlocks (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addVisitedBlocks (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                          GALGAS_stringset & io_ioVisitedBlockSet,
                                          const GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                          const GALGAS_string constin_inCurrentBlockName,
                                          const GALGAS_uint constin_inInitialBlockSetting,
                                          GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                          GALGAS_bool & io_ioContinuesInSequence,
                                          GALGAS_bool & io_ioContinueAccessibilityExploration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@abstractBlockTerminationForBlockInstruction generateBlock'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock) (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                                   const class GALGAS_uint constinArgument0,
                                                                                                   const class GALGAS_uint constinArgument1,
                                                                                                   const class GALGAS_registerTable constinArgument2,
                                                                                                   class GALGAS_uint & ioArgument3,
                                                                                                   class GALGAS_ipic_31__38_BlockList & ioArgument4,
                                                                                                   class GALGAS_stringset & ioArgument5,
                                                                                                   const class GALGAS_string constinArgument6,
                                                                                                   class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument7,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateBlock (const int32_t inClassIndex,
                                        categoryMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateBlock (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                       const GALGAS_uint constin_inAccessBankSplitOffset,
                                       const GALGAS_uint constin_inCurrentBank,
                                       const GALGAS_registerTable constin_inRegisterTable,
                                       GALGAS_uint & io_ioLocalLabelIndex,
                                       GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                       GALGAS_stringset & io_ioUsedRegisters,
                                       const GALGAS_string constin_inLabelForBlock,
                                       GALGAS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@pic18ConditionExpression analyzeCondition'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_pic_31__38_ConditionExpression_analyzeCondition) (const class cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                         const class GALGAS_uint constinArgument0,
                                                                                         const class GALGAS_uint constinArgument1,
                                                                                         const class GALGAS_registerTable constinArgument2,
                                                                                         class GALGAS_uint & ioArgument3,
                                                                                         class GALGAS_ipic_31__38_BlockList & ioArgument4,
                                                                                         const class GALGAS_lstring constinArgument5,
                                                                                         const class GALGAS_lstring constinArgument6,
                                                                                         class GALGAS_stringset & ioArgument7,
                                                                                         class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument8,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeCondition (const int32_t inClassIndex,
                                           categoryMethodSignature_pic_31__38_ConditionExpression_analyzeCondition inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeCondition (const class cPtr_pic_31__38_ConditionExpression * inObject,
                                          const GALGAS_uint constin_inAccessBankSplitOffset,
                                          const GALGAS_uint constin_inCurrentBank,
                                          const GALGAS_registerTable constin_inRegisterTable,
                                          GALGAS_uint & io_ioLocalLabelIndex,
                                          GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          const GALGAS_lstring constin_inConditionTrueLabel,
                                          const GALGAS_lstring constin_inConditionFalseLabel,
                                          GALGAS_stringset & io_ioUsedRegisters,
                                          GALGAS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@ipic18AbstractBlockTerminator optimizeTerminator'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                                const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                                const class GALGAS_string constinArgument3,
                                                                                                class GALGAS_bool & ioArgument4,
                                                                                                class GALGAS_string & ioArgument5,
                                                                                                class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument6,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeTerminator (const int32_t inClassIndex,
                                             categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                            const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                            const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                            const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                            const GALGAS_string constin_inBlockLabel,
                                            GALGAS_bool & io_ioOptimizationDone,
                                            GALGAS_string & io_ioListFileContents,
                                            GALGAS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@ipic18AbstractConditionTerminator getOptimizedTerminators'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                                                                         const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                         const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                                         const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                                         const class GALGAS_string constinArgument3,
                                                                                                         class GALGAS_bool & ioArgument4,
                                                                                                         class GALGAS_string & ioArgument5,
                                                                                                         class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument6,
                                                                                                         class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument7,
                                                                                                         class GALGAS_bool & outArgument8,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getOptimizedTerminators (const int32_t inClassIndex,
                                                  categoryMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getOptimizedTerminators (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                 const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                 const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                 const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                 const GALGAS_string constin_inBlockLabel,
                                                 GALGAS_bool & io_ioOptimizationDone,
                                                 GALGAS_string & io_ioListFileContents,
                                                 GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                 GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                 GALGAS_bool & out_outIdenticalTerminators,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                             const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                                                                             class GALGAS_stringset & ioArgument2,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterTerminatorReferencedLabels (const int32_t inClassIndex,
                                                          categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterTerminatorReferencedLabels (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                         const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                         GALGAS_stringset & io_ioReferencedBlockSet,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@ipic18SequentialInstruction enterInstructionReferencedLabels'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                            const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                            const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                                                                            class GALGAS_stringset & ioArgument2,
                                                                                                            class C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInstructionReferencedLabels (const int32_t inClassIndex,
                                                           categoryMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInstructionReferencedLabels (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                          GALGAS_stringset & io_ioReferencedBlockSet,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInstructionReferencedLabels (const class GALGAS_ipic_31__38_SequentialInstructionList inObject,
                                                      const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                      const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                      class GALGAS_stringset & io_ioReferencedBlockSet,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

#endif