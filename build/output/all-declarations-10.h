#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'piccoloDevice_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_piccoloDevice_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_piccoloDevice_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_start_5F_symbol_ (class GGS_piccoloDeviceModel & outArgument0,
                                               class Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GGS_piccoloDeviceModel & outArgument0,
                                                                    Lexique_piccoloDevice_5F_lexique * inLexique) ;

  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccoloDevice_5F_lexique * inLexique) ;

  protected: void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccoloDevice_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_piccoloDevice_5F_syntax_0 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_1 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_2 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_3 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_4 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_5 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_6 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_7 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_8 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_9 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_10 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_11 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_12 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_13 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_14 (Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected: virtual int32_t select_piccoloDevice_5F_syntax_15 (Lexique_piccoloDevice_5F_lexique *) = 0 ;


} ;

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
//Extension method '@registerExpression resolveMidrangeAccess'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (class cPtr_registerExpression * inObject,
                                                const class GGS_uint constin_inTotalBankCount,
                                                const class GGS_uint constin_inCurrentBank,
                                                const class GGS_registerTable constin_inRegisterTable,
                                                const class GGS_constantMap constin_inConstantMap,
                                                class GGS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                class GGS_bitSliceTable & out_outBitSliceTable,
                                                class GGS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block computeDuration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const class GGS_ipic_31__38_Block inObject,
                                      class GGS_blockDurationMap & io_ioExploredBlockMap,
                                      const class GGS_string constin_inNextLabel,
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
//Function 'sortKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_sortKey (const class GGS_clusterList & constinArgument0,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_cluster_ordering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_cluster_5F_ordering_3F__26__26_ (const class GGS_clusterList constinArgument0,
                                                         class GGS_ipic_31__38_BlockList & ioArgument1,
                                                         class GGS_string & ioArgument2,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativeBranchOverflow??!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (const class GGS_ipic_31__38_BlockList constinArgument0,
                                                             const class GGS_ipic_31__38_BlockList constinArgument1,
                                                             class GGS_branchOverflowMap & outArgument2,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

