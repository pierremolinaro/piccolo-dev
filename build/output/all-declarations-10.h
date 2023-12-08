#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block display'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_display (const class GALGAS_ipic_31__38_Block inObject,
                              const class GALGAS_string constin_inNextBlockLabel,
                              class GALGAS_string & io_ioListFileContents,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (class cPtr_registerExpression * inObject,
                                                    const class GALGAS_uint constin_inAccessBankSplitOffset,
                                                    const class GALGAS_uint constin_inCurrentBank,
                                                    const class GALGAS_registerTable constin_inRegisterTable,
                                                    const class GALGAS_constantMap constin_inConstantMap,
                                                    const class GALGAS_bool constin_inWriteAccess,
                                                    class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    class GALGAS_bitSliceTable & out_outBitSliceTable,
                                                    class GALGAS_stringset & io_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (class cPtr_registerExpression * inObject,
                                                                       const class GALGAS_registerTable constin_inRegisterTable,
                                                                       const class GALGAS_constantMap constin_inConstantMap,
                                                                       const class GALGAS_bool constin_inWriteAccess,
                                                                       class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       class GALGAS_stringset & io_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression getRegisterAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (class cPtr_registerExpression * inObject,
                                             const class GALGAS_registerTable constin_inRegisterTable,
                                             const class GALGAS_constantMap constin_inConstantMap,
                                             const class GALGAS_bool constin_inWriteAccess,
                                             class GALGAS_stringset & io_ioUsedRegisters,
                                             class GALGAS_uint & out_outRegisterAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const class GALGAS_ipic_31__38_Block inObject,
                                            const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                            const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                            class GALGAS_stringset & io_ioReferencedBlockSet,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const class GALGAS_ipic_31__38_Block inObject,
                               const class GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                               const class GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                               const class GALGAS_ipic_31__38_BlockList constin_inBlockList,
                               class GALGAS_bool & io_ioOptimizationDone,
                               class GALGAS_string & io_ioListFileContents,
                               class GALGAS_ipic_31__38_Block & out_outOptimizedBlock,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_instructionListOptimization (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                          const class GALGAS_optimizeFlagStruct constinArgument1,
                                          const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                          const class GALGAS_ipic_31__38_SequentialInstructionList constinArgument3,
                                          const class GALGAS_lstring constinArgument4,
                                          class GALGAS_bool & outArgument5,
                                          class GALGAS_string & ioArgument6,
                                          class GALGAS_ipic_31__38_SequentialInstructionList & outArgument7,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const class GALGAS_ipic_31__38_Block inObject,
                                                 const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const class GALGAS_string constin_inNextBlockLabel,
                                                 const class GALGAS_uint constin_inBlockStartAddress,
                                                 class GALGAS_uint & io_ioConversionCount,
                                                 class GALGAS_string & io_ioListFileContents,
                                                 class GALGAS_ipic_31__38_Block & out_outModifiedBlock,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18Block blockSize' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint extensionGetter_blockSize (const class GALGAS_ipic_31__38_Block & inObject,
                                             const class GALGAS_string & constinArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const class GALGAS_ipic_31__38_Block inObject,
                                             const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                             const class GALGAS_string constin_inNextBlockLabel,
                                             const class GALGAS_uint constin_inBlockStartAddress,
                                             class GALGAS_branchOverflowMap & io_ioOverflowMap,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block generateCodeForBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateCodeForBlock (const class GALGAS_ipic_31__38_Block inObject,
                                           const class GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                           const class GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                           const class GALGAS_uint constin_inBlockAddress,
                                           const class GALGAS_string constin_inNextBlockLabel,
                                           class GALGAS_string & io_ioListFileContents,
                                           class GALGAS_string & io_ioAssemblyString,
                                           class GALGAS_generatedCodeMap & io_ioGeneratedCodeMap,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitCode (const class GALGAS_uint constinArgument0,
                       class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateLineWithCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateLineWithCode (const class GALGAS_uint constinArgument0,
                                   const class GALGAS_codeList constinArgument1,
                                   const class GALGAS_stringlist constinArgument2,
                                   const class GALGAS_uint constinArgument3,
                                   const class GALGAS_uint constinArgument4,
                                   class GALGAS_string & ioArgument5,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block computeDuration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const class GALGAS_ipic_31__38_Block inObject,
                                      class GALGAS_blockDurationMap & io_ioExploredBlockMap,
                                      class GALGAS_string in_inNextLabel,
                                      class GALGAS_ipic_31__38_Block & out_outNewBlock,
                                      class GALGAS_bool & io_ioContinue,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR piccoloDevice_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_piccoloDevice_5F_grammar : public cParser_piccoloDevice_5F_syntax {
//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_piccoloDeviceModel & outArgument0,
                                            C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_piccoloDeviceModel & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_piccoloDeviceModel & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'println'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_println (const class GALGAS_string constinArgument0,
                      class C_Compiler * inCompiler
                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'print'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_print (const class GALGAS_string constinArgument0,
                    class C_Compiler * inCompiler
                    COMMA_LOCATION_ARGS) ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'initCodeGenerator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_initCodeGenerator (class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'setEmitAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_setEmitAddress (const class GALGAS_uint constinArgument0,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'currentEmitAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_currentEmitAddress (class GALGAS_uint & outArgument0,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'emitByte'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_emitByte (const class GALGAS_uint constinArgument0,
                       class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'getGeneratedContents'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_getGeneratedContents (class GALGAS_string & outArgument0,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'get_C_ArrayImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_get_5F_C_5F_ArrayImplementation (const class GALGAS_string constinArgument0,
                                              class GALGAS_string & outArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'get_C_ArrayHeader'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_get_5F_C_5F_ArrayHeader (const class GALGAS_string constinArgument0,
                                      class GALGAS_string & outArgument1,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkCurrentEmitAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress (const class GALGAS_uint constinArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'print_constant_definition'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_print_5F_constant_5F_definition (const class GALGAS_constantMap constinArgument0,
                                              class GALGAS_string & ioArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'actualBuildConfig'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_actualBuildConfig (const class GALGAS_configRegisterMap constinArgument0,
                                const class GALGAS_configDefinitionList constinArgument1,
                                class GALGAS_string & ioArgument2,
                                class GALGAS_actualConfigurationMap & outArgument3,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildConfig'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildConfig (const class GALGAS_configRegisterMap constinArgument0,
                          const class GALGAS_configDefinitionList constinArgument1,
                          class GALGAS_string & ioArgument2,
                          class GALGAS_actualConfigurationMap & outArgument3,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addBaselineUsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addBaselineUsedRoutinesFromInstructionList (const class GALGAS_baseline_5F_instructionList constinArgument0,
                                                         class GALGAS_stringset & ioArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'baseline_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_baseline_5F_computeUsedRoutines (const class GALGAS_baseline_5F_routineDefinitionList & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyze_ram_sections'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyze_5F_ram_5F_sections (const class GALGAS_string constinArgument0,
                                         const class GALGAS_ramDefinitionList constinArgument1,
                                         const class GALGAS_constantMap constinArgument2,
                                         class GALGAS_stringset & ioArgument3,
                                         class GALGAS_ramBankTable & ioArgument4,
                                         const class GALGAS_registerTable constinArgument5,
                                         class GALGAS_string & ioArgument6,
                                         class GALGAS_registerTable & ioArgument7,
                                         class GALGAS_declaredByteMap & outArgument8,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code (const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument0,
                                                    const class GALGAS_actualConfigurationMap constinArgument1,
                                                    const class GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument2,
                                                    const class GALGAS_bitSliceTable constinArgument3,
                                                    class GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument4,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_binary_code'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_binary_5F_code (const class GALGAS_baseline_5F_assembly_5F_instructionList constinArgument0,
                                                  const class GALGAS_uint constinArgument1,
                                                  class GALGAS_string & ioArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleBaselineInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleBaselineInstructionList (const class GALGAS_uint constinArgument0,
                                            const class GALGAS_baseline_5F_instructionList constinArgument1,
                                            const class GALGAS_baselineRoutineMap constinArgument2,
                                            const class GALGAS_registerTable constinArgument3,
                                            const class GALGAS_constantMap constinArgument4,
                                            class GALGAS_uint & ioArgument5,
                                            class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument6,
                                            class GALGAS_string & ioArgument7,
                                            class GALGAS_bool & outArgument8,
                                            const class GALGAS_routineKind constinArgument9,
                                            const class GALGAS_bool constinArgument10,
                                            class GALGAS_stringset & ioArgument11,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'parseDeviceDefinition'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition (const class GALGAS_lstring constinArgument0,
                                    class GALGAS_piccoloDeviceModel & outArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations (class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument0,
                                                   class GALGAS_string & ioArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'acceptableTRISoperand'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_acceptableTRISoperand (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

