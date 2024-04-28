#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@branchOverflowMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_branchOverflowMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_string constin_inValue,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

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
//Extension method '@registerExpression analyzeRegisterExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (class cPtr_registerExpression * inObject,
                                                    const class GGS_uint constin_inAccessBankSplitOffset,
                                                    const class GGS_uint constin_inCurrentBank,
                                                    const class GGS_registerTable constin_inRegisterTable,
                                                    const class GGS_constantMap constin_inConstantMap,
                                                    const class GGS_bool constin_inWriteAccess,
                                                    class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    class GGS_bitSliceTable & out_outBitSliceTable,
                                                    class GGS_stringset & io_ioUsedRegisters,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (class cPtr_registerExpression * inObject,
                                                                       const class GGS_registerTable constin_inRegisterTable,
                                                                       const class GGS_constantMap constin_inConstantMap,
                                                                       const class GGS_bool constin_inWriteAccess,
                                                                       class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       class GGS_stringset & io_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression getRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (class cPtr_registerExpression * inObject,
                                             const class GGS_registerTable constin_inRegisterTable,
                                             const class GGS_constantMap constin_inConstantMap,
                                             const class GGS_bool constin_inWriteAccess,
                                             class GGS_stringset & io_ioUsedRegisters,
                                             class GGS_uint & out_outRegisterAddress,
                                             Compiler * inCompiler
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
//Extension method '@ipic18Block computeDuration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const class GGS_ipic_31__38_Block inObject,
                                      class GGS_blockDurationMap & io_ioExploredBlockMap,
                                      class GGS_string in_inNextLabel,
                                      class GGS_ipic_31__38_Block & out_outNewBlock,
                                      class GGS_bool & io_ioContinue,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR piccoloDevice_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_piccoloDevice_5F_grammar : public cParser_piccoloDevice_5F_syntax {
//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_piccoloDeviceModel & outArgument0,
                                            Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_piccoloDeviceModel & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_piccoloDeviceModel & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_0 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_1 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_2 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_3 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_4 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_5 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_6 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_7 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_8 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_9 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_10 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_11 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_12 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_13 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_14 (Lexique_piccoloDevice_5F_lexique *) ;

  public: virtual int32_t select_piccoloDevice_5F_syntax_15 (Lexique_piccoloDevice_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
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

