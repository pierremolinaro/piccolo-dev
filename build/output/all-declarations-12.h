#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'acceptableTRISoperand'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_acceptableTRISoperand (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

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

