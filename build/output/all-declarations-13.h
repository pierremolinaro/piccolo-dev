#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInstructionList?&??????&&&&&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (const class GGS_pic_31__38_InstructionList constinArgument0,
                                                                                                     class GGS_ipic_31__38_BlockList & ioArgument1,
                                                                                                     const class GGS_uint constinArgument2,
                                                                                                     const class GGS_routineMap constinArgument3,
                                                                                                     const class GGS_registerTable constinArgument4,
                                                                                                     const class GGS_pic_31__38__5F_dataMap constinArgument5,
                                                                                                     const class GGS_constantMap constinArgument6,
                                                                                                     const class GGS_pic_31__38_MacroMap constinArgument7,
                                                                                                     class GGS_uint & ioArgument8,
                                                                                                     class GGS_ipic_31__38_SequentialInstructionList & ioArgument9,
                                                                                                     class GGS_lstring & ioArgument10,
                                                                                                     class GGS_string & ioArgument11,
                                                                                                     class GGS_uint & ioArgument12,
                                                                                                     const class GGS_bool constinArgument13,
                                                                                                     const class GGS_routineKind constinArgument14,
                                                                                                     class GGS_stringset & ioArgument15,
                                                                                                     class Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList??&'
//
//--------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (const class GGS_pic_31__38_InstructionList constinArgument0,
                                                                        const class GGS_pic_31__38_MacroMap constinArgument1,
                                                                        class GGS_stringset & ioArgument2,
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
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ;

extern BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ;

extern BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ;

extern BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ;

extern StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ;

extern StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ;

extern StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

