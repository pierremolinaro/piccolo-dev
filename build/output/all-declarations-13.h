#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList????!'
//
//--------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (const class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   const class GGS_stringset constinArgument1,
                                                                   const class GGS_declaredRoutineMap constinArgument2,
                                                                   const class GGS_stringset constinArgument3,
                                                                   class GGS_pic_31__38_InstructionList & outArgument4,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList?&?'
//
//--------------------------------------------------------------------------------------------------

void routine_displayBlockList_3F__26__3F_ (const class GGS_string constinArgument0,
                                           class GGS_string & ioArgument1,
                                           const class GGS_ipic_31__38_BlockList constinArgument2,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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
//Routine 'ipic18DurationComputations&!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_DurationComputations_26__21_ (class GGS_ipic_31__38_BlockList & ioArgument0,
                                                       class GGS_blockDurationMap & outArgument1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18GenerateCode?????????&?!!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (const class GGS_string constinArgument0,
                                                                                           const class GGS_programKind constinArgument1,
                                                                                           const class GGS_uint constinArgument2,
                                                                                           const class GGS_uint constinArgument3,
                                                                                           const class GGS_string constinArgument4,
                                                                                           const class GGS_registerTable constinArgument5,
                                                                                           const class GGS_registerTable constinArgument6,
                                                                                           const class GGS_pic_31__38__5F_dataMap constinArgument7,
                                                                                           const class GGS_actualConfigurationMap constinArgument8,
                                                                                           class GGS_string & ioArgument9,
                                                                                           const class GGS_ipic_31__38_BlockList constinArgument10,
                                                                                           class GGS_uint & outArgument11,
                                                                                           class GGS_generatedCodeMap & outArgument12,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlockOrdering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (const class GGS_string constinArgument0,
                                                            class GGS_string & ioArgument1,
                                                            class GGS_ipic_31__38_BlockList & ioArgument2,
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
//Routine 'ipic18PrintDurations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_PrintDurations_26__3F_ (class GGS_string & ioArgument0,
                                                 const class GGS_blockDurationMap constinArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativesResolution&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativesResolution_26__26_ (class GGS_string & ioArgument0,
                                                      class GGS_ipic_31__38_BlockList & ioArgument1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18StackComputations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_StackComputations_26__3F_ (class GGS_string & ioArgument0,
                                                    const class GGS_ipic_31__38_BlockList constinArgument1,
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
//Routine 'buildOrderedGraph&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedGraph_26__3F__26_ (class GGS_ipic_31__38_BlockList & ioArgument0,
                                            const class GGS_string constinArgument1,
                                            class GGS_string & ioArgument2,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'blockDiscontinuityCount'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint function_blockDiscontinuityCount (const class GGS_ipic_31__38_BlockList & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_cluster_ordering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_cluster_5F_ordering_3F__26__26_ (const class GGS_clusterList constinArgument0,
                                                         class GGS_ipic_31__38_BlockList & ioArgument1,
                                                         class GGS_string & ioArgument2,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildInvocationGraph?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildInvocationGraph_3F__21_ (const class GGS_ipic_31__38_BlockList constinArgument0,
                                           class GGS_string & outArgument1,
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
//Routine 'ipic18RelativeBranchOverflow??!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (const class GGS_ipic_31__38_BlockList constinArgument0,
                                                             const class GGS_ipic_31__38_BlockList constinArgument1,
                                                             class GGS_branchOverflowMap & outArgument2,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performRelativesResolution?&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_performRelativesResolution_3F__26__26__26_ (const class GGS_symbolTableForRelativesResolution constinArgument0,
                                                         class GGS_ipic_31__38_BlockList & ioArgument1,
                                                         class GGS_uint & ioArgument2,
                                                         class GGS_string & ioArgument3,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'computeLabelAbsoluteAddressMap??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (const class GGS_ipic_31__38_BlockList constinArgument0,
                                                             const class GGS_ipic_31__38_BlockList constinArgument1,
                                                             class GGS_symbolTableForRelativesResolution & outArgument2,
                                                             class GGS_uint & outArgument3,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18GenerateAssemblyFile??????'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (const class GGS_string constinArgument0,
                                                                      const class GGS_string constinArgument1,
                                                                      const class GGS_registerTable constinArgument2,
                                                                      const class GGS_registerTable constinArgument3,
                                                                      const class GGS_actualConfigurationMap constinArgument4,
                                                                      const class GGS_string constinArgument5,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

