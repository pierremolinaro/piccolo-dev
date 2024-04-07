#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'acceptableTRISoperand'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringset function_acceptableTRISoperand (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitBaselineCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (const class GALGAS_uint constinArgument0,
                                                            class GALGAS_uint & ioArgument1,
                                                            const class GALGAS_baseline_5F_assembly_5F_instruction constinArgument2,
                                                            class GALGAS_string & ioArgument3,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoBaselineCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (const class GALGAS_uint constinArgument0,
                                                          const class GALGAS_baseline_5F_assembly_5F_instruction constinArgument1,
                                                          class GALGAS_string & ioArgument2,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'addMidRangeUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (const class GALGAS_midrange_5F_instructionList constinArgument0,
                                                                 class GALGAS_stringset & ioArgument1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'midrange_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringset function_midrange_5F_computeUsedRoutines (const class GALGAS_midrange_5F_interruptDefinitionList & constinArgument0,
                                                                 const class GALGAS_midrange_5F_routineDefinitionList & constinArgument1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleMidrangeInstructionList????&&&?&?!?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (const class GALGAS_midrange_5F_instructionList constinArgument0,
                                                                                                const class GALGAS_routineMap constinArgument1,
                                                                                                const class GALGAS_registerTable constinArgument2,
                                                                                                const class GALGAS_constantMap constinArgument3,
                                                                                                class GALGAS_uint & ioArgument4,
                                                                                                class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument5,
                                                                                                class GALGAS_string & ioArgument6,
                                                                                                const class GALGAS_uint constinArgument7,
                                                                                                class GALGAS_uint & ioArgument8,
                                                                                                const class GALGAS_bool constinArgument9,
                                                                                                class GALGAS_bool & outArgument10,
                                                                                                const class GALGAS_routineKind constinArgument11,
                                                                                                class GALGAS_stringset & ioArgument12,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_assembly_instruction_list???????!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (const class GALGAS_uint constinArgument0,
                                                                                                           const class GALGAS_uint constinArgument1,
                                                                                                           const class GALGAS_constantMap constinArgument2,
                                                                                                           const class GALGAS_string constinArgument3,
                                                                                                           const class GALGAS_registerTable constinArgument4,
                                                                                                           const class GALGAS_midrange_5F_model constinArgument5,
                                                                                                           const class GALGAS_bool constinArgument6,
                                                                                                           class GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument7,
                                                                                                           class GALGAS_string & ioArgument8,
                                                                                                           class GALGAS_stringset & ioArgument9,
                                                                                                           class Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleInterruptRoutine????????&&&!&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (const class GALGAS_midrange_5F_model constinArgument0,
                                                                                         const class GALGAS_bool constinArgument1,
                                                                                         const class GALGAS_registerTable constinArgument2,
                                                                                         const class GALGAS_string constinArgument3,
                                                                                         const class GALGAS_routineMap constinArgument4,
                                                                                         const class GALGAS_uint constinArgument5,
                                                                                         const class GALGAS_constantMap constinArgument6,
                                                                                         const class GALGAS_uint constinArgument7,
                                                                                         class GALGAS_string & ioArgument8,
                                                                                         class GALGAS_uint & ioArgument9,
                                                                                         class GALGAS_string & ioArgument10,
                                                                                         class GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument11,
                                                                                         class GALGAS_stringset & ioArgument12,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'interruptRoutineShouldSavePCLATH??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (const class GALGAS_midrange_5F_model constinArgument0,
                                                               const class GALGAS_uint constinArgument1,
                                                               class GALGAS_string & ioArgument2,
                                                               class GALGAS_bool & outArgument3,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const class GALGAS_uint constinArgument0,
                                                                                                                     const class GALGAS_registerTable constinArgument1,
                                                                                                                     const class GALGAS_lstring constinArgument2,
                                                                                                                     const class GALGAS_lstring constinArgument3,
                                                                                                                     const class GALGAS_bool constinArgument4,
                                                                                                                     const class GALGAS_midrange_5F_instructionList constinArgument5,
                                                                                                                     const class GALGAS_routineMap constinArgument6,
                                                                                                                     const class GALGAS_constantMap constinArgument7,
                                                                                                                     const class GALGAS_location constinArgument8,
                                                                                                                     class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument9,
                                                                                                                     class GALGAS_uint & ioArgument10,
                                                                                                                     class GALGAS_string & ioArgument11,
                                                                                                                     class GALGAS_stringset & ioArgument12,
                                                                                                                     class Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithoutSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const class GALGAS_uint constinArgument0,
                                                                                                                        const class GALGAS_registerTable constinArgument1,
                                                                                                                        const class GALGAS_lstring constinArgument2,
                                                                                                                        const class GALGAS_lstring constinArgument3,
                                                                                                                        const class GALGAS_bool constinArgument4,
                                                                                                                        const class GALGAS_midrange_5F_instructionList constinArgument5,
                                                                                                                        const class GALGAS_routineMap constinArgument6,
                                                                                                                        const class GALGAS_constantMap constinArgument7,
                                                                                                                        const class GALGAS_location constinArgument8,
                                                                                                                        class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument9,
                                                                                                                        class GALGAS_uint & ioArgument10,
                                                                                                                        class GALGAS_string & ioArgument11,
                                                                                                                        class GALGAS_stringset & ioArgument12,
                                                                                                                        class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_midrange_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_midrange_5F_optimizations_26__26_ (class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                           class GALGAS_string & ioArgument1,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP&&'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                         class GALGAS_string & ioArgument1,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_build_assembly_code?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (const class GALGAS_string constinArgument0,
                                                                            const class GALGAS_registerTable constinArgument1,
                                                                            const class GALGAS_registerTable constinArgument2,
                                                                            const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument3,
                                                                            const class GALGAS_actualConfigurationMap constinArgument4,
                                                                            class GALGAS_string & outArgument5,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (const class GALGAS_uint constinArgument0,
                                                            class GALGAS_uint & ioArgument1,
                                                            const class GALGAS_midrange_5F_intermediate_5F_instruction constinArgument2,
                                                            class GALGAS_string & ioArgument3,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

