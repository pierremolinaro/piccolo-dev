#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitBaselineCodeAtWordAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitBaselineCodeAtWordAddress (const class GALGAS_uint constinArgument0,
                                            class GALGAS_uint & ioArgument1,
                                            const class GALGAS_baseline_5F_assembly_5F_instruction constinArgument2,
                                            class GALGAS_string & ioArgument3,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitNoBaselineCodeAtWordAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitNoBaselineCodeAtWordAddress (const class GALGAS_uint constinArgument0,
                                              const class GALGAS_baseline_5F_assembly_5F_instruction constinArgument1,
                                              class GALGAS_string & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addMidRangeUsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addMidRangeUsedRoutinesFromInstructionList (const class GALGAS_midrange_5F_instructionList constinArgument0,
                                                         class GALGAS_stringset & ioArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'midrange_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_midrange_5F_computeUsedRoutines (const class GALGAS_midrange_5F_interruptDefinitionList & constinArgument0,
                                                                 const class GALGAS_midrange_5F_routineDefinitionList & constinArgument1,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleMidrangeInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleMidrangeInstructionList (const class GALGAS_midrange_5F_instructionList constinArgument0,
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
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_assembly_instruction_list'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (const class GALGAS_uint constinArgument0,
                                                                   const class GALGAS_uint constinArgument1,
                                                                   const class GALGAS_constantMap constinArgument2,
                                                                   const class GALGAS_string constinArgument3,
                                                                   const class GALGAS_registerTable constinArgument4,
                                                                   const class GALGAS_midrange_5F_model constinArgument5,
                                                                   const class GALGAS_bool constinArgument6,
                                                                   class GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument7,
                                                                   class GALGAS_string & ioArgument8,
                                                                   class GALGAS_stringset & ioArgument9,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleInterruptRoutine'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleInterruptRoutine (const class GALGAS_midrange_5F_model constinArgument0,
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
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'interruptRoutineShouldSavePCLATH'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_interruptRoutineShouldSavePCLATH (const class GALGAS_midrange_5F_model constinArgument0,
                                               const class GALGAS_uint constinArgument1,
                                               class GALGAS_string & ioArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithSharedRAM'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithSharedRAM (const class GALGAS_uint constinArgument0,
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
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithoutSharedRAM'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithoutSharedRAM (const class GALGAS_uint constinArgument0,
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
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'perform_midrange_optimizations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_perform_5F_midrange_5F_optimizations (class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                   class GALGAS_string & ioArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP (class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                 class GALGAS_string & ioArgument1,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

