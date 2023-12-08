#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_ipic_binary_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (const class GALGAS_registerTable constinArgument0,
                                                          const class GALGAS_constantMap constinArgument1,
                                                          const class GALGAS_uint constinArgument2,
                                                          const class GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument3,
                                                          const class GALGAS_uint constinArgument4,
                                                          const class GALGAS_actualConfigurationMap constinArgument5,
                                                          class GALGAS_string & ioArgument6,
                                                          class GALGAS_uint & outArgument7,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const class GALGAS_pic_31__38_InterruptDefinitionList & constinArgument0,
                                                                    const class GALGAS_pic_31__38_RoutineDefinitionList & constinArgument1,
                                                                    const class GALGAS_pic_31__38_MacroMap & constinArgument2,
                                                                    const class GALGAS_routineDeclarationList & constinArgument3,
                                                                    const class GALGAS_routineDeclarationList & constinArgument4,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_ipic18_block_representation_list'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (const class GALGAS_string constinArgument0,
                                                                       const class GALGAS_sint_36__34_ constinArgument1,
                                                                       const class GALGAS_pic_31__38_MacroMap constinArgument2,
                                                                       const class GALGAS_routineDeclarationList constinArgument3,
                                                                       const class GALGAS_routineDeclarationList constinArgument4,
                                                                       const class GALGAS_luint constinArgument5,
                                                                       const class GALGAS_routineDeclarationList constinArgument6,
                                                                       const class GALGAS_routineDeclarationList constinArgument7,
                                                                       const class GALGAS_uint constinArgument8,
                                                                       const class GALGAS_registerTable constinArgument9,
                                                                       const class GALGAS_declaredByteMap constinArgument10,
                                                                       const class GALGAS_pic_31__38_RoutineDefinitionList constinArgument11,
                                                                       const class GALGAS_programKind constinArgument12,
                                                                       const class GALGAS_constantMap constinArgument13,
                                                                       const class GALGAS_stringset constinArgument14,
                                                                       const class GALGAS_dataList constinArgument15,
                                                                       const class GALGAS_pic_31__38_InterruptDefinitionList constinArgument16,
                                                                       const class GALGAS_lstringlist constinArgument17,
                                                                       const class GALGAS_ramBankTable constinArgument18,
                                                                       const class GALGAS_bool constinArgument19,
                                                                       const class GALGAS_bool constinArgument20,
                                                                       const class GALGAS_string constinArgument21,
                                                                       const class GALGAS_registerTable constinArgument22,
                                                                       const class GALGAS_actualConfigurationMap constinArgument23,
                                                                       const class GALGAS_location constinArgument24,
                                                                       class GALGAS_string & ioArgument25,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline (const class GALGAS_stringset constinArgument0,
                                              const class GALGAS_declaredRoutineMap constinArgument1,
                                              class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument2,
                                              class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument3,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                     class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                     const class GALGAS_uint constinArgument2,
                                     const class GALGAS_routineMap constinArgument3,
                                     const class GALGAS_registerTable constinArgument4,
                                     const class GALGAS_pic_31__38__5F_dataMap constinArgument5,
                                     const class GALGAS_constantMap constinArgument6,
                                     const class GALGAS_pic_31__38_MacroMap constinArgument7,
                                     class GALGAS_uint & ioArgument8,
                                     class GALGAS_ipic_31__38_SequentialInstructionList & ioArgument9,
                                     class GALGAS_lstring & ioArgument10,
                                     class GALGAS_string & ioArgument11,
                                     class GALGAS_uint & ioArgument12,
                                     const class GALGAS_bool constinArgument13,
                                     const class GALGAS_routineKind constinArgument14,
                                     class GALGAS_stringset & ioArgument15,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                            const class GALGAS_pic_31__38_MacroMap constinArgument1,
                                                            class GALGAS_stringset & ioArgument2,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBCC'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_pic_31__38__5F_checkBCC (const class GALGAS_symbolTableForRelativesResolution & constinArgument0,
                                                    const class GALGAS_lstring & constinArgument1,
                                                    const class GALGAS_uint & constinArgument2,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBRA_RCALL'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const class GALGAS_symbolTableForRelativesResolution & constinArgument0,
                                                             const class GALGAS_lstring & constinArgument1,
                                                             const class GALGAS_uint & constinArgument2,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_RCALL_displacement'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const class GALGAS_symbolTableForRelativesResolution & constinArgument0,
                                                                        const class GALGAS_lstring & constinArgument1,
                                                                        const class GALGAS_uint & constinArgument2,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_Bcc_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                          const class GALGAS_uint & constinArgument1,
                                                                          const class GALGAS_lstring & constinArgument2,
                                                                          const class GALGAS_conditional_5F_branch & constinArgument3,
                                                                          const class GALGAS_bool & constinArgument4,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_RCALL_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                            const class GALGAS_uint & constinArgument1,
                                                                            const class GALGAS_lstring & constinArgument2,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                          const class GALGAS_uint & constinArgument1,
                                                                          const class GALGAS_lstring & constinArgument2,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_CALL_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                           const class GALGAS_lstring & constinArgument1,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_GOTO_instruction_code'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const class GALGAS_uint & constinArgument0,
                                                                           const class GALGAS_lstring & constinArgument1,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_definition_label'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList function_pic_31__38__5F_definition_5F_label (const class GALGAS_lstring & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                               const class GALGAS_stringset constinArgument1,
                                               const class GALGAS_declaredRoutineMap constinArgument2,
                                               const class GALGAS_stringset constinArgument3,
                                               class GALGAS_pic_31__38_InstructionList & outArgument4,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayBlockList (const class GALGAS_string constinArgument0,
                               class GALGAS_string & ioArgument1,
                               const class GALGAS_ipic_31__38_BlockList constinArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

