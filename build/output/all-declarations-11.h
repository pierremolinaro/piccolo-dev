#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'print_constant_definition?&'
//
//--------------------------------------------------------------------------------------------------

void routine_print_5F_constant_5F_definition_3F__26_ (const class GGS_constantMap constinArgument0,
                                                      class GGS_string & ioArgument1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

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
//Routine 'addBaselineUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (const class GGS_baseline_5F_instructionList constinArgument0,
                                                                 class GGS_stringset & ioArgument1,
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
//Routine 'parseDeviceDefinition?!'
//
//--------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition_3F__21_ (const class GGS_lstring constinArgument0,
                                            class GGS_piccoloDeviceModel & outArgument1,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations_26__26_ (class GGS_baseline_5F_intermediate_5F_instructionList & ioArgument0,
                                                           class GGS_string & ioArgument1,
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
//Routine 'addMidRangeUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (const class GGS_midrange_5F_instructionList constinArgument0,
                                                                 class GGS_stringset & ioArgument1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'midrange_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

class GGS_stringset function_midrange_5F_computeUsedRoutines (const class GGS_midrange_5F_interruptDefinitionList & constinArgument0,
                                                              const class GGS_midrange_5F_routineDefinitionList & constinArgument1,
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

