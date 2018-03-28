#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-11.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'performInlineFromInstructionList'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_performInlineFromInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                               const class GALGAS_stringset constinArgument1,
                                               const class GALGAS_declaredRoutineMap constinArgument2,
                                               const class GALGAS_stringset constinArgument3,
                                               class GALGAS_pic_31__38_InstructionList & outArgument4,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'displayBlockList'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayBlockList (const class GALGAS_string constinArgument0,
                               class GALGAS_string & ioArgument1,
                               const class GALGAS_ipic_31__38_BlockList constinArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'pic18_analyze_data_sections'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_pic_31__38__5F_analyze_5F_data_5F_sections (const class GALGAS_dataList constinArgument0,
                                                         const class GALGAS_registerTable constinArgument1,
                                                         const class GALGAS_constantMap constinArgument2,
                                                         class GALGAS_string & ioArgument3,
                                                         class GALGAS_pic_31__38__5F_dataMap & outArgument4,
                                                         class GALGAS_constantMap & ioArgument5,
                                                         class GALGAS_stringset & ioArgument6,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'ipic18DurationComputations'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_ipic_31__38_DurationComputations (class GALGAS_ipic_31__38_BlockList & ioArgument0,
                                               class GALGAS_blockDurationMap & outArgument1,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'ipic18GenerateCode'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_ipic_31__38_GenerateCode (const class GALGAS_string constinArgument0,
                                       const class GALGAS_programKind constinArgument1,
                                       const class GALGAS_uint constinArgument2,
                                       const class GALGAS_uint constinArgument3,
                                       const class GALGAS_string constinArgument4,
                                       const class GALGAS_registerTable constinArgument5,
                                       const class GALGAS_registerTable constinArgument6,
                                       const class GALGAS_pic_31__38__5F_dataMap constinArgument7,
                                       const class GALGAS_actualConfigurationMap constinArgument8,
                                       class GALGAS_string & ioArgument9,
                                       const class GALGAS_ipic_31__38_BlockList constinArgument10,
                                       class GALGAS_uint & outArgument11,
                                       class GALGAS_generatedCodeMap & outArgument12,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'ipic18OptimizeBlockOrdering'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_ipic_31__38_OptimizeBlockOrdering (const class GALGAS_string constinArgument0,
                                                class GALGAS_string & ioArgument1,
                                                class GALGAS_ipic_31__38_BlockList & ioArgument2,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'ipic18OptimizeBlocks'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_ipic_31__38_OptimizeBlocks (class GALGAS_string & ioArgument0,
                                         class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'ipic18PrintDurations'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_ipic_31__38_PrintDurations (class GALGAS_string & ioArgument0,
                                         const class GALGAS_blockDurationMap constinArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'ipic18RelativesResolution'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_ipic_31__38_RelativesResolution (class GALGAS_string & ioArgument0,
                                              class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'ipic18StackComputations'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_ipic_31__38_StackComputations (class GALGAS_string & ioArgument0,
                                            const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'enterGoto2block'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterGoto_32_block (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                 const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                 class GALGAS_stringset & ioArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'enterGoto4block'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterGoto_34_block (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                 const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                 class GALGAS_stringset & ioArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

