#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze_data_sections???&!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (const class GGS_dataList constinArgument0,
                                                                                     const class GGS_registerTable constinArgument1,
                                                                                     const class GGS_constantMap constinArgument2,
                                                                                     class GGS_string & ioArgument3,
                                                                                     class GGS_pic_31__38__5F_dataMap & outArgument4,
                                                                                     class GGS_constantMap & ioArgument5,
                                                                                     class GGS_stringset & ioArgument6,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlocks&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlocks_26__26_ (class GGS_string & ioArgument0,
                                                 class GGS_ipic_31__38_BlockList & ioArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto2block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_32_block_3F__3F__26_ (const class GGS_symbolTableForBlockOptimization constinArgument0,
                                             const class GGS_ipic_31__38_BlockList constinArgument1,
                                             class GGS_stringset & ioArgument2,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto4block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_34_block_3F__3F__26_ (const class GGS_symbolTableForBlockOptimization constinArgument0,
                                             const class GGS_ipic_31__38_BlockList constinArgument1,
                                             class GGS_stringset & ioArgument2,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitBaselineCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (const class GGS_uint constinArgument0,
                                                            class GGS_uint & ioArgument1,
                                                            const class GGS_baseline_5F_assembly_5F_instruction constinArgument2,
                                                            class GGS_string & ioArgument3,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoBaselineCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (const class GGS_uint constinArgument0,
                                                          const class GGS_baseline_5F_assembly_5F_instruction constinArgument1,
                                                          class GGS_string & ioArgument2,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_binary_code??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_binary_5F_code_3F__3F__26__21_ (const class GGS_baseline_5F_assembly_5F_instructionList constinArgument0,
                                                                  const class GGS_uint constinArgument1,
                                                                  class GGS_string & ioArgument2,
                                                                  class GGS_uint & outArgument3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'sortKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_sortKey (const class GGS_clusterList & constinArgument0,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (const class GGS_baseline_5F_intermediate_5F_instructionList constinArgument0,
                                                                        const class GGS_actualConfigurationMap constinArgument1,
                                                                        const class GGS_baseline_5F_intermediate_5F_registerExpression constinArgument2,
                                                                        const class GGS_bitSliceTable constinArgument3,
                                                                        class GGS_baseline_5F_assembly_5F_instructionList & ioArgument4,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'baseline_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_baseline_5F_computeUsedRoutines (const class GGS_baseline_5F_routineDefinitionList & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

