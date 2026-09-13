#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block display'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_display (const class GGS_ipic_31__38_Block inObject,
                              const class GGS_string constin_inNextBlockLabel,
                              class GGS_string & io_ioListFileContents,
                              class Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const class GGS_ipic_31__38_Block inObject,
                                                 const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GGS_string constin_inNextBlockLabel,
                                                 const class GGS_uint constin_inBlockStartAddress,
                                                 class GGS_uint & io_ioConversionCount,
                                                 class GGS_string & io_ioListFileContents,
                                                 class GGS_ipic_31__38_Block & out_outModifiedBlock,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18Block blockSize' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_uint extensionGetter_blockSize (const class GGS_ipic_31__38_Block & inObject,
                                          const class GGS_string & constinArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const class GGS_ipic_31__38_Block inObject,
                                             const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                             const class GGS_string constin_inNextBlockLabel,
                                             const class GGS_uint constin_inBlockStartAddress,
                                             class GGS_branchOverflowMap & io_ioOverflowMap,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block generateCodeForBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCodeForBlock (const class GGS_ipic_31__38_Block inObject,
                                           const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                           const class GGS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                           const class GGS_uint constin_inBlockAddress,
                                           const class GGS_string constin_inNextBlockLabel,
                                           class GGS_string & io_ioListFileContents,
                                           class GGS_string & io_ioAssemblyString,
                                           class GGS_generatedCodeMap & io_ioGeneratedCodeMap,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitCode?'
//
//--------------------------------------------------------------------------------------------------

void routine_emitCode_3F_ (const class GGS_uint constinArgument0,
                           class Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateLineWithCode?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (const class GGS_uint constinArgument0,
                                                           const class GGS_codeList constinArgument1,
                                                           const class GGS_stringlist constinArgument2,
                                                           const class GGS_uint constinArgument3,
                                                           const class GGS_uint constinArgument4,
                                                           class GGS_string & ioArgument5,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const class GGS_ipic_31__38_Block inObject,
                                            const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                            const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                            class GGS_stringset & io_ioReferencedBlockSet,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const class GGS_ipic_31__38_Block inObject,
                               const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                               const class GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                               const class GGS_ipic_31__38_BlockList constin_inBlockList,
                               class GGS_bool & io_ioOptimizationDone,
                               class GGS_string & io_ioListFileContents,
                               class GGS_ipic_31__38_Block & out_outOptimizedBlock,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization?????!&!'
//
//--------------------------------------------------------------------------------------------------

void routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (const class GGS_symbolTableForBlockOptimization constinArgument0,
                                                                          const class GGS_optimizeFlagStruct constinArgument1,
                                                                          const class GGS_ipic_31__38_BlockList constinArgument2,
                                                                          const class GGS_ipic_31__38_SequentialInstructionList constinArgument3,
                                                                          const class GGS_lstring constinArgument4,
                                                                          class GGS_bool & outArgument5,
                                                                          class GGS_string & ioArgument6,
                                                                          class GGS_ipic_31__38_SequentialInstructionList & outArgument7,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
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
//Routine 'initCodeGenerator'
//
//--------------------------------------------------------------------------------------------------

void routine_initCodeGenerator (class Compiler * inCompiler
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
//Routine 'currentEmitAddress!'
//
//--------------------------------------------------------------------------------------------------

void routine_currentEmitAddress_21_ (class GGS_uint & outArgument0,
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
//Routine 'get_C_ArrayImplementation?!'
//
//--------------------------------------------------------------------------------------------------

void routine_get_5F_C_5F_ArrayImplementation_3F__21_ (const class GGS_string constinArgument0,
                                                      class GGS_string & outArgument1,
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
//Routine 'checkCurrentEmitAddress?'
//
//--------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress_3F_ (const class GGS_uint constinArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

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
//Routine 'midrange_compute_JSR_JUMP&&'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (class GGS_midrange_5F_intermediate_5F_instructionList & ioArgument0,
                                                         class GGS_string & ioArgument1,
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
//Function 'pic18_GOTO_instruction_code'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const class GGS_uint & constinArgument0,
                                                                        const class GGS_lstring & constinArgument1,
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
//Function 'pic18_definition_label'
//
//--------------------------------------------------------------------------------------------------

class GGS_codeList function_pic_31__38__5F_definition_5F_label (const class GGS_lstring & constinArgument0,
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
//Routine 'displayBlockList?&?'
//
//--------------------------------------------------------------------------------------------------

void routine_displayBlockList_3F__26__3F_ (const class GGS_string constinArgument0,
                                           class GGS_string & ioArgument1,
                                           const class GGS_ipic_31__38_BlockList constinArgument2,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

