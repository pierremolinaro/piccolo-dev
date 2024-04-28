#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveBaselineAccess'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (class cPtr_registerExpression * inObject,
                                                const class GGS_registerTable constin_inRegisterTable,
                                                const class GGS_constantMap constin_inConstantMap,
                                                class GGS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                class GGS_bitSliceTable & out_outBitSliceTable,
                                                class GGS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const class GGS_uint constinArgument0,
                                                                             const class GGS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                                             class GGS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                                             class GGS_stringset & outArgument3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_CALL optimizeCALL'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeCALL (class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JSR optimizeJSR'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJSR (class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const class GGS_uint constin_inLineIndex,
                                      class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      class GGS_string & io_ioListFileContents,
                                      class GGS_bool & io_ioOptimizationsDone,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const class GGS_uint constin_inLineIndex,
                                                   class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   class GGS_string & io_ioListFileContents,
                                                   class GGS_bool & io_ioOptimizationsDone,
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

