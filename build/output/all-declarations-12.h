#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'actualBuildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_actualBuildConfig_3F__3F__26__21_ (const class GGS_configRegisterMap constinArgument0,
                                                const class GGS_configDefinitionList constinArgument1,
                                                class GGS_string & ioArgument2,
                                                class GGS_actualConfigurationMap & outArgument3,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildConfig_3F__3F__26__21_ (const class GGS_configRegisterMap constinArgument0,
                                          const class GGS_configDefinitionList constinArgument1,
                                          class GGS_string & ioArgument2,
                                          class GGS_actualConfigurationMap & outArgument3,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleMidrangeInstructionList????&&&?&?!?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (const class GGS_midrange_5F_instructionList constinArgument0,
                                                                                                const class GGS_routineMap constinArgument1,
                                                                                                const class GGS_registerTable constinArgument2,
                                                                                                const class GGS_constantMap constinArgument3,
                                                                                                class GGS_uint & ioArgument4,
                                                                                                class GGS_midrange_5F_intermediate_5F_instructionList & ioArgument5,
                                                                                                class GGS_string & ioArgument6,
                                                                                                const class GGS_uint constinArgument7,
                                                                                                class GGS_uint & ioArgument8,
                                                                                                const class GGS_bool constinArgument9,
                                                                                                class GGS_bool & outArgument10,
                                                                                                const class GGS_routineKind constinArgument11,
                                                                                                class GGS_stringset & ioArgument12,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_assembly_instruction_list???????!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (const class GGS_uint constinArgument0,
                                                                                                           const class GGS_uint constinArgument1,
                                                                                                           const class GGS_constantMap constinArgument2,
                                                                                                           const class GGS_string constinArgument3,
                                                                                                           const class GGS_registerTable constinArgument4,
                                                                                                           const class GGS_midrange_5F_model constinArgument5,
                                                                                                           const class GGS_bool constinArgument6,
                                                                                                           class GGS_midrange_5F_intermediate_5F_instructionList & outArgument7,
                                                                                                           class GGS_string & ioArgument8,
                                                                                                           class GGS_stringset & ioArgument9,
                                                                                                           class Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleInterruptRoutine????????&&&!&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (const class GGS_midrange_5F_model constinArgument0,
                                                                                         const class GGS_bool constinArgument1,
                                                                                         const class GGS_registerTable constinArgument2,
                                                                                         const class GGS_string constinArgument3,
                                                                                         const class GGS_routineMap constinArgument4,
                                                                                         const class GGS_uint constinArgument5,
                                                                                         const class GGS_constantMap constinArgument6,
                                                                                         const class GGS_uint constinArgument7,
                                                                                         class GGS_string & ioArgument8,
                                                                                         class GGS_uint & ioArgument9,
                                                                                         class GGS_string & ioArgument10,
                                                                                         class GGS_midrange_5F_intermediate_5F_instructionList & outArgument11,
                                                                                         class GGS_stringset & ioArgument12,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'interruptRoutineShouldSavePCLATH??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (const class GGS_midrange_5F_model constinArgument0,
                                                               const class GGS_uint constinArgument1,
                                                               class GGS_string & ioArgument2,
                                                               class GGS_bool & outArgument3,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const class GGS_uint constinArgument0,
                                                                                                                     const class GGS_registerTable constinArgument1,
                                                                                                                     const class GGS_lstring constinArgument2,
                                                                                                                     const class GGS_lstring constinArgument3,
                                                                                                                     const class GGS_bool constinArgument4,
                                                                                                                     const class GGS_midrange_5F_instructionList constinArgument5,
                                                                                                                     const class GGS_routineMap constinArgument6,
                                                                                                                     const class GGS_constantMap constinArgument7,
                                                                                                                     const class GGS_location constinArgument8,
                                                                                                                     class GGS_midrange_5F_intermediate_5F_instructionList & ioArgument9,
                                                                                                                     class GGS_uint & ioArgument10,
                                                                                                                     class GGS_string & ioArgument11,
                                                                                                                     class GGS_stringset & ioArgument12,
                                                                                                                     class Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithoutSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const class GGS_uint constinArgument0,
                                                                                                                        const class GGS_registerTable constinArgument1,
                                                                                                                        const class GGS_lstring constinArgument2,
                                                                                                                        const class GGS_lstring constinArgument3,
                                                                                                                        const class GGS_bool constinArgument4,
                                                                                                                        const class GGS_midrange_5F_instructionList constinArgument5,
                                                                                                                        const class GGS_routineMap constinArgument6,
                                                                                                                        const class GGS_constantMap constinArgument7,
                                                                                                                        const class GGS_location constinArgument8,
                                                                                                                        class GGS_midrange_5F_intermediate_5F_instructionList & ioArgument9,
                                                                                                                        class GGS_uint & ioArgument10,
                                                                                                                        class GGS_string & ioArgument11,
                                                                                                                        class GGS_stringset & ioArgument12,
                                                                                                                        class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_pic_31__38__5F_computeUsedRoutines (const class GGS_pic_31__38_InterruptDefinitionList & constinArgument0,
                                                                 const class GGS_pic_31__38_RoutineDefinitionList & constinArgument1,
                                                                 const class GGS_pic_31__38_MacroMap & constinArgument2,
                                                                 const class GGS_routineDeclarationList & constinArgument3,
                                                                 const class GGS_routineDeclarationList & constinArgument4,
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
//Routine 'ipic18RelativesResolution&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativesResolution_26__26_ (class GGS_string & ioArgument0,
                                                      class GGS_ipic_31__38_BlockList & ioArgument1,
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

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleBaselineInstructionList?????&&&!??&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (const class GGS_uint constinArgument0,
                                                                                            const class GGS_baseline_5F_instructionList constinArgument1,
                                                                                            const class GGS_baselineRoutineMap constinArgument2,
                                                                                            const class GGS_registerTable constinArgument3,
                                                                                            const class GGS_constantMap constinArgument4,
                                                                                            class GGS_uint & ioArgument5,
                                                                                            class GGS_baseline_5F_intermediate_5F_instructionList & ioArgument6,
                                                                                            class GGS_string & ioArgument7,
                                                                                            class GGS_bool & outArgument8,
                                                                                            const class GGS_routineKind constinArgument9,
                                                                                            const class GGS_bool constinArgument10,
                                                                                            class GGS_stringset & ioArgument11,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'acceptableTRISoperand'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_acceptableTRISoperand (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyze_ram_sections???&&?&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (const class GGS_string constinArgument0,
                                                                             const class GGS_ramDefinitionList constinArgument1,
                                                                             const class GGS_constantMap constinArgument2,
                                                                             class GGS_stringset & ioArgument3,
                                                                             class GGS_ramBankTable & ioArgument4,
                                                                             const class GGS_registerTable constinArgument5,
                                                                             class GGS_string & ioArgument6,
                                                                             class GGS_registerTable & ioArgument7,
                                                                             class GGS_declaredByteMap & outArgument8,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_build_assembly_code?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (const class GGS_string constinArgument0,
                                                                            const class GGS_registerTable constinArgument1,
                                                                            const class GGS_registerTable constinArgument2,
                                                                            const class GGS_midrange_5F_intermediate_5F_instructionList constinArgument3,
                                                                            const class GGS_actualConfigurationMap constinArgument4,
                                                                            class GGS_string & outArgument5,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseDeviceDefinition?!'
//
//--------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition_3F__21_ (const class GGS_lstring constinArgument0,
                                            class GGS_piccoloDeviceModel & outArgument1,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_midrange_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_midrange_5F_optimizations_26__26_ (class GGS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                           class GGS_string & ioArgument1,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_ipic18_block_representation_list?????????????????????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (const class GGS_string constinArgument0,
                                                                                                                                                                               const class GGS_sint_36__34_ constinArgument1,
                                                                                                                                                                               const class GGS_pic_31__38_MacroMap constinArgument2,
                                                                                                                                                                               const class GGS_routineDeclarationList constinArgument3,
                                                                                                                                                                               const class GGS_routineDeclarationList constinArgument4,
                                                                                                                                                                               const class GGS_luint constinArgument5,
                                                                                                                                                                               const class GGS_routineDeclarationList constinArgument6,
                                                                                                                                                                               const class GGS_routineDeclarationList constinArgument7,
                                                                                                                                                                               const class GGS_uint constinArgument8,
                                                                                                                                                                               const class GGS_registerTable constinArgument9,
                                                                                                                                                                               const class GGS_declaredByteMap constinArgument10,
                                                                                                                                                                               const class GGS_pic_31__38_RoutineDefinitionList constinArgument11,
                                                                                                                                                                               const class GGS_programKind constinArgument12,
                                                                                                                                                                               const class GGS_constantMap constinArgument13,
                                                                                                                                                                               const class GGS_stringset constinArgument14,
                                                                                                                                                                               const class GGS_dataList constinArgument15,
                                                                                                                                                                               const class GGS_pic_31__38_InterruptDefinitionList constinArgument16,
                                                                                                                                                                               const class GGS_lstringlist constinArgument17,
                                                                                                                                                                               const class GGS_ramBankTable constinArgument18,
                                                                                                                                                                               const class GGS_bool constinArgument19,
                                                                                                                                                                               const class GGS_bool constinArgument20,
                                                                                                                                                                               const class GGS_string constinArgument21,
                                                                                                                                                                               const class GGS_registerTable constinArgument22,
                                                                                                                                                                               const class GGS_actualConfigurationMap constinArgument23,
                                                                                                                                                                               const class GGS_location constinArgument24,
                                                                                                                                                                               class GGS_string & ioArgument25,
                                                                                                                                                                               class Compiler * inCompiler
                                                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (const class GGS_stringset constinArgument0,
                                                              const class GGS_declaredRoutineMap constinArgument1,
                                                              class GGS_pic_31__38_InterruptDefinitionList & ioArgument2,
                                                              class GGS_pic_31__38_RoutineDefinitionList & ioArgument3,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

