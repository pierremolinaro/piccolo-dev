#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

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
//Routine 'ipic18PrintDurations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_PrintDurations_26__3F_ (class GGS_string & ioArgument0,
                                                 const class GGS_blockDurationMap constinArgument1,
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
//Routine 'ipic18OptimizeBlocks&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlocks_26__26_ (class GGS_string & ioArgument0,
                                                 class GGS_ipic_31__38_BlockList & ioArgument1,
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
//Routine 'parseDeviceDefinition?!'
//
//--------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition_3F__21_ (const class GGS_lstring constinArgument0,
                                            class GGS_piccoloDeviceModel & outArgument1,
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

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBCC'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_pic_31__38__5F_checkBCC (const class GGS_symbolTableForRelativesResolution & constinArgument0,
                                                 const class GGS_lstring & constinArgument1,
                                                 const class GGS_uint & constinArgument2,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBRA_RCALL'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const class GGS_symbolTableForRelativesResolution & constinArgument0,
                                                          const class GGS_lstring & constinArgument1,
                                                          const class GGS_uint & constinArgument2,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_RCALL_displacement'
//
//--------------------------------------------------------------------------------------------------

class GGS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const class GGS_symbolTableForRelativesResolution & constinArgument0,
                                                                     const class GGS_lstring & constinArgument1,
                                                                     const class GGS_uint & constinArgument2,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_Bcc_instruction_code'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const class GGS_uint & constinArgument0,
                                                                       const class GGS_uint & constinArgument1,
                                                                       const class GGS_lstring & constinArgument2,
                                                                       const class GGS_conditional_5F_branch & constinArgument3,
                                                                       const class GGS_bool & constinArgument4,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_RCALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const class GGS_uint & constinArgument0,
                                                                         const class GGS_uint & constinArgument1,
                                                                         const class GGS_lstring & constinArgument2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_instruction_code'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const class GGS_uint & constinArgument0,
                                                                       const class GGS_uint & constinArgument1,
                                                                       const class GGS_lstring & constinArgument2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_CALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const class GGS_uint & constinArgument0,
                                                                        const class GGS_lstring & constinArgument1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_GOTO_instruction_code'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const class GGS_uint & constinArgument0,
                                                                        const class GGS_lstring & constinArgument1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_definition_label'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_definition_5F_label (const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

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
//Routine 'setEmitAddress?'
//
//--------------------------------------------------------------------------------------------------

void routine_setEmitAddress_3F_ (const class GGS_uint constinArgument0,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (const class GGS_uint constinArgument0,
                                                            class GGS_uint & ioArgument1,
                                                            const class GGS_midrange_5F_intermediate_5F_instruction constinArgument2,
                                                            class GGS_string & ioArgument3,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeDirectCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (const class GGS_uint constinArgument0,
                                                                  class GGS_uint & ioArgument1,
                                                                  const class GGS_string constinArgument2,
                                                                  class GGS_string & ioArgument3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoMidrangeCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (const class GGS_uint constinArgument0,
                                                          const class GGS_midrange_5F_intermediate_5F_instruction constinArgument1,
                                                          class GGS_string & ioArgument2,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                                             const class GGS_uint constinArgument1,
                                                                             class GGS_uint & ioArgument2,
                                                                             class GGS_string & ioArgument3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (const class GGS_location constinArgument0,
                                                                      class GGS_uint & ioArgument1,
                                                                      const class GGS_string constinArgument2,
                                                                      const class GGS_uint constinArgument3,
                                                                      class GGS_string & ioArgument4,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (const class GGS_string constinArgument0,
                                                                             const class GGS_uint constinArgument1,
                                                                             class GGS_uint & ioArgument2,
                                                                             class GGS_string & ioArgument3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_3F__26__3F__3F__26_ (const class GGS_location constinArgument0,
                                                                      class GGS_uint & ioArgument1,
                                                                      const class GGS_string constinArgument2,
                                                                      const class GGS_uint constinArgument3,
                                                                      class GGS_string & ioArgument4,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_ipic_binary_code??????&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (const class GGS_registerTable constinArgument0,
                                                                                          const class GGS_constantMap constinArgument1,
                                                                                          const class GGS_uint constinArgument2,
                                                                                          const class GGS_midrange_5F_intermediate_5F_instructionList constinArgument3,
                                                                                          const class GGS_uint constinArgument4,
                                                                                          const class GGS_actualConfigurationMap constinArgument5,
                                                                                          class GGS_string & ioArgument6,
                                                                                          class GGS_uint & outArgument7,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkCurrentEmitAddress?'
//
//--------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress_3F_ (const class GGS_uint constinArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'initCodeGenerator'
//
//--------------------------------------------------------------------------------------------------

void routine_initCodeGenerator (class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP&&'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (class GGS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                         class GGS_string & ioArgument1,
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
//Routine 'emitByte?'
//
//--------------------------------------------------------------------------------------------------

void routine_emitByte_3F_ (const class GGS_uint constinArgument0,
                           class Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getGeneratedContents!'
//
//--------------------------------------------------------------------------------------------------

void routine_getGeneratedContents_21_ (class GGS_string & outArgument0,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'get_C_ArrayHeader?!'
//
//--------------------------------------------------------------------------------------------------

void routine_get_5F_C_5F_ArrayHeader_3F__21_ (const class GGS_string constinArgument0,
                                              class GGS_string & outArgument1,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'get_C_ArrayImplementation?!'
//
//--------------------------------------------------------------------------------------------------

void routine_get_5F_C_5F_ArrayImplementation_3F__21_ (const class GGS_string constinArgument0,
                                                      class GGS_string & outArgument1,
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
//Routine 'perform_baseline_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations_26__26_ (class GGS_baseline_5F_intermediate_5F_instructionList & ioArgument0,
                                                           class GGS_string & ioArgument1,
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

