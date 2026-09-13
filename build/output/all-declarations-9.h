#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18RegisterComparison mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_pic_31__38_RegisterComparison & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@FA_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_FA_5F_instruction_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveMidrangeAccess'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (class cPtr_registerExpression * inObject,
                                                const class GGS_uint constin_inTotalBankCount,
                                                const class GGS_uint constin_inCurrentBank,
                                                const class GGS_registerTable constin_inRegisterTable,
                                                const class GGS_constantMap constin_inConstantMap,
                                                class GGS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                class GGS_bitSliceTable & out_outBitSliceTable,
                                                class GGS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (class cPtr_registerExpression * inObject,
                                                    const class GGS_uint constin_inAccessBankSplitOffset,
                                                    const class GGS_uint constin_inCurrentBank,
                                                    const class GGS_registerTable constin_inRegisterTable,
                                                    const class GGS_constantMap constin_inConstantMap,
                                                    const class GGS_bool constin_inWriteAccess,
                                                    class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    class GGS_bitSliceTable & out_outBitSliceTable,
                                                    class GGS_stringset & io_ioUsedRegisters,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (class cPtr_registerExpression * inObject,
                                                                       const class GGS_registerTable constin_inRegisterTable,
                                                                       const class GGS_constantMap constin_inConstantMap,
                                                                       const class GGS_bool constin_inWriteAccess,
                                                                       class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       class GGS_stringset & io_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression getRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (class cPtr_registerExpression * inObject,
                                             const class GGS_registerTable constin_inRegisterTable,
                                             const class GGS_constantMap constin_inConstantMap,
                                             const class GGS_bool constin_inWriteAccess,
                                             class GGS_stringset & io_ioUsedRegisters,
                                             class GGS_uint & out_outRegisterAddress,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSimpleInstruction (class cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const class GGS_uint constin_inAccessBankSplitOffset,
                                                   const class GGS_routineMap constin_inRoutineMap,
                                                   const class GGS_registerTable constin_inRegisterTable,
                                                   const class GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const class GGS_constantMap constin_inConstantMap,
                                                   class GGS_uint & io_ioCurrentBank,
                                                   const class GGS_bool constin_inShouldPreserveBSR,
                                                   class GGS_stringset & io_ioUsedRegisters,
                                                   class GGS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (class cPtr_pic_31__38_ConditionExpression * inObject,
                                           const class GGS_uint constin_inAccessBankSplitOffset,
                                           const class GGS_uint constin_inCurrentBank,
                                           const class GGS_registerTable constin_inRegisterTable,
                                           const class GGS_constantMap constin_inConstantMap,
                                           class GGS_uint & io_ioLocalLabelIndex,
                                           class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const class GGS_lstring constin_inConditionTrueLabel,
                                           const class GGS_lstring constin_inConditionFalseLabel,
                                           class GGS_stringset & io_ioUsedRegisters,
                                           class GGS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                             const class GGS_string constin_inBlockLabel,
                                             class GGS_bool & io_ioOptimizationDone,
                                             class GGS_string & io_ioListFileContents,
                                             class GGS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                  const class GGS_string constin_inBlockLabel,
                                                  class GGS_bool & io_ioOptimizationDone,
                                                  class GGS_string & io_ioListFileContents,
                                                  class GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  class GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  class GGS_bool & out_outIdenticalTerminators,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                          class GGS_stringset & io_ioReferencedBlockSet,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                              const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                              const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                              const class GGS_lstring constin_inBlockLabel,
                                              class GGS_bool & out_outOptimizationDone,
                                              class GGS_string & io_ioListFileContents,
                                              class GGS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                              class GGS_bool & out_outNOPsubstitution,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                       const class GGS_symbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                       const class GGS_symbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const class GGS_uint constin_inAddress,
                                                                     const class GGS_string constin_inBlockLabel,
                                                                     const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     class GGS_uint & io_ioConversionCount,
                                                                     class GGS_string & io_ioListFileContents,
                                                                     class GGS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringlist callExtensionGetter_instructionDisplay (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

