#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const class GGS_blockDurationMap constin_inExploredBlockMap,
                                                   const class GGS_string constin_inNextLabel,
                                                   class GGS_uint & out_outMin,
                                                   class GGS_uint & out_outMax,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (class cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const class GGS_blockDurationMap constin_inExploredBlockMap,
                                   const class GGS_string constin_inNextLabel,
                                   class GGS_uint & out_outMin,
                                   class GGS_uint & out_outMax,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         const class GGS_blockDurationMap constin_inExploredBlockMap,
                                         class GGS_uint & out_outMin,
                                         class GGS_uint & out_outMax,
                                         Compiler * inCompiler
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
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const class GGS_ipic_31__38_SequentialInstructionList inObject,
                                                       const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                       const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                       class GGS_stringset & io_ioReferencedBlockSet,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const class GGS_ipic_31__38_Block inObject,
                                            const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                            const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                            class GGS_stringset & io_ioReferencedBlockSet,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const class GGS_ipic_31__38_Block inObject,
                               const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                               const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                               const class GGS_ipic_31__38_BlockList constin_inBlockList,
                               class GGS_bool & io_ioOptimizationDone,
                               class GGS_string & io_ioListFileContents,
                               class GGS_ipic_31__38_Block & out_outOptimizedBlock,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization?????!&!'
//
//--------------------------------------------------------------------------------------------------

void routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (const class GGS_symbolTableForBlockOptimization constinArgument0,
                                                                          const class GGS_optimizeFlagStruct constinArgument1,
                                                                          const class GGS_ipic_31__38_BlockList constinArgument2,
                                                                          const class GGS_ipic_31__38_SequentialInstructionList constinArgument3,
                                                                          const class GGS_lstring constinArgument4,
                                                                          class GGS_bool & outArgument5,
                                                                          class GGS_string & ioArgument6,
                                                                          class GGS_ipic_31__38_SequentialInstructionList & outArgument7,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const class GGS_ipic_31__38_Block inObject,
                                                 const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GGS_string constin_inNextBlockLabel,
                                                 const class GGS_uint constin_inBlockStartAddress,
                                                 class GGS_uint & io_ioConversionCount,
                                                 class GGS_string & io_ioListFileContents,
                                                 class GGS_ipic_31__38_Block & out_outModifiedBlock,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18Block blockSize' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_blockSize (const class GGS_ipic_31__38_Block & inObject,
                                          const class GGS_string & constinArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const class GGS_ipic_31__38_Block inObject,
                                             const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                             const class GGS_string constin_inNextBlockLabel,
                                             const class GGS_uint constin_inBlockStartAddress,
                                             class GGS_branchOverflowMap & io_ioOverflowMap,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

