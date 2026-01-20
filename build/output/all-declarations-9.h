#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

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
//Extension method '@baseline_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const class GGS_uint constinArgument0,
                                                                             const class GGS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                                             class GGS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                                             class GGS_stringset & outArgument3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_CALL optimizeCALL'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeCALL (class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JSR optimizeJSR'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJSR (class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const class GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const class GGS_uint constin_inLineIndex,
                                      class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      class GGS_string & io_ioListFileContents,
                                      class GGS_bool & io_ioOptimizationsDone,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const class GGS_uint constin_inLineIndex,
                                                   class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   class GGS_string & io_ioListFileContents,
                                                   class GGS_bool & io_ioOptimizationsDone,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                       const class GGS_symbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (const class GGS_uint constinArgument0,
                                                                  const class GGS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                                  class GGS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const class GGS_uint constinArgument0,
                                                                             const class GGS_midrange_5F_intermediate_5F_instructionList constinArgument1,
                                                                             class GGS_midrange_5F_intermediate_5F_instruction & outArgument2,
                                                                             class GGS_stringset & outArgument3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                       const class GGS_symbolTableForOptimizations constin_inSymbolTable,
                                       const class GGS_uint constin_inLineIndex,
                                       class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GGS_string & io_ioListFileContents,
                                       class GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeMOVLW (class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                        const class GGS_uint constin_inLineIndex,
                                        class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                        class GGS_string & io_ioListFileContents,
                                        class GGS_bool & io_ioOptimizationsDone,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const class GGS_symbolTableForOptimizations constin_inSymbolTable,
                                             const class GGS_uint constin_inLineIndex,
                                             class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             class GGS_string & io_ioListFileContents,
                                             class GGS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBitTestSkip (class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                              const class GGS_uint constin_inLineIndex,
                                              class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                              class GGS_string & io_ioListFileContents,
                                              class GGS_bool & io_ioOptimizationsDone,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveBaselineAccess'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (class cPtr_registerExpression * inObject,
                                                const class GGS_registerTable constin_inRegisterTable,
                                                const class GGS_constantMap constin_inConstantMap,
                                                class GGS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                class GGS_bitSliceTable & out_outBitSliceTable,
                                                class GGS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (class cPtr_baseline_5F_instruction * inObject,
                                                                               const class GGS_uint constin_inCurrentPage,
                                                                               const class GGS_baselineRoutineMap constin_inRoutineMap,
                                                                               const class GGS_registerTable constin_inRegisterTable,
                                                                               const class GGS_constantMap constin_inConstantMap,
                                                                               class GGS_uint & io_ioLocalLabelIndex,
                                                                               class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               class GGS_string & io_ioListFileContents,
                                                                               class GGS_bool & io_ioContinuesInSequence,
                                                                               const class GGS_routineKind constin_inRoutineKind,
                                                                               const class GGS_bool constin_inLastInstructionShouldReturn,
                                                                               class GGS_stringset & io_ioUsedRegisters,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (class cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const class GGS_uint constin_inCurrentPage,
                                                                             const class GGS_registerTable constin_inRegisterTable,
                                                                             const class GGS_constantMap constin_inConstantMap,
                                                                             class GGS_uint & io_ioLocalLabelIndex,
                                                                             const class GGS_bool constin_inComplementaryBranch,
                                                                             const class GGS_location constin_inInstructionLocation,
                                                                             const class GGS_string constin_inTargetLabel,
                                                                             class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             class GGS_stringset & io_ioUsedRegisters,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SimpleConstantCaseItem_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SimpleConstantCaseItem_2E_weak : public GGS_pic_31__38_AbstractCaseItem_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (const class GGS_pic_31__38_SimpleConstantCaseItem & inSource) ;

  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & operator = (const class GGS_pic_31__38_SimpleConstantCaseItem & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_SimpleConstantCaseItem_2E_weak init_nil (void) {
    GGS_pic_31__38_SimpleConstantCaseItem_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_SimpleConstantCaseItem bang_pic_31__38_SimpleConstantCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_SimpleConstantCaseItem unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SimpleConstantCaseItem_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SimpleConstantCaseItem_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_switch_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_switch_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak (const class GGS_pic_31__38_Instruction_5F_switch & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_switch & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_switch_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_switch_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_switch bang_pic_31__38_Instruction_5F_switch_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_Instruction_5F_switch unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_switch_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_switch_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_switch_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2E_weak ;

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
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18RegisterComparison mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_pic_31__38_RegisterComparison & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@FA_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_FA_5F_instruction_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_grammar : public cParser_pic_31__38__5F_syntax,
                                        public cParser_pic_31__38__5F_start_5F_symbol,
                                        public cParser_midrange_5F_syntax,
                                        public cParser_baseline_5F_syntax,
                                        public cParser_baseline_5F_program,
                                        public cParser_pic_31__38__5F_bootloader_5F_syntax,
                                        public cParser_communs {
//------------------------------------- 'baseline_condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_expression_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_factor_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_term_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                          Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_instruction_5F_list_ (GGS_baseline_5F_instructionList & outArgument0,
                                                            GGS_labelMap & ioArgument1,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_routine_5F_definition_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_ (GGS_baseline_5F_instruction & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                                        GGS_baseline_5F_instruction & outArgument1,
                                                                        GGS_labelMap & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_ (GGS_baseline_5F_instruction & outArgument0,
                                                                  GGS_labelMap & ioArgument1,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GGS_bitNumberExpression & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public: virtual void nt_block_5F_termination_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public: virtual void nt_body_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_body_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_body_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                 GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                 GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                 GGS_lstringlist & ioArgument3,
                                 GGS_lstringlist & ioArgument4,
                                 GGS_ramDefinitionList & ioArgument5,
                                 GGS_lstringlist & ioArgument6,
                                 GGS_configDefinitionList & ioArgument7,
                                 GGS_constantDefinitionList & ioArgument8,
                                 GGS_checkpicList & ioArgument9,
                                 GGS_dataList & ioArgument10,
                                 GGS_bool & ioArgument11,
                                 GGS_bool & ioArgument12,
                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
  public: virtual void nt_checkpic_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_checkpic_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_checkpic_5F_definition_ (GGS_checkpicList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GGS_configDefinitionList & ioArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public: virtual void nt_constant_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GGS_constantDefinitionList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public: virtual void nt_data_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GGS_dataList & ioArgument0,
                                               Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_in_5F_ram_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GGS_declarationInRam & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                           Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GGS_immediatExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_primary_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GGS_immediatExpression & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GGS_immediatExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                GGS_bool & ioArgument1,
                                                GGS_bool & ioArgument2,
                                                GGS_labelMap & ioArgument3,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GGS_bool & ioArgument1,
                                                    GGS_bool & ioArgument2,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_expression_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_factor_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_term_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                          Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_instruction_5F_list_ (GGS_midrange_5F_instructionList & outArgument0,
                                                            GGS_bool & ioArgument1,
                                                            GGS_bool & ioArgument2,
                                                            GGS_labelMap & ioArgument3,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_interrupt_5F_definition_ (GGS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                GGS_bool & ioArgument1,
                                                                GGS_bool & ioArgument2,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_routine_5F_definition_ (GGS_midrange_5F_routineDefinitionList & ioArgument0,
                                                              GGS_bool & ioArgument1,
                                                              GGS_bool & ioArgument2,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_simple_5F_instruction_ (GGS_midrange_5F_instruction & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                                        GGS_midrange_5F_instruction & outArgument1,
                                                                        GGS_bool & ioArgument2,
                                                                        GGS_bool & ioArgument3,
                                                                        GGS_labelMap & ioArgument4,
                                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_structured_5F_instruction_ (GGS_midrange_5F_instruction & outArgument0,
                                                                  GGS_bool & ioArgument1,
                                                                  GGS_bool & ioArgument2,
                                                                  GGS_labelMap & ioArgument3,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GGS_bool & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'parse_bootloader' non terminal
//--- 'parse' label
  public: virtual void nt_parse_5F_bootloader_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_parse_5F_bootloader_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_parse_5F_bootloader_ (GGS_lstring & outArgument0,
                                                GGS_lstring & outArgument1,
                                                GGS_routineDeclarationList & outArgument2,
                                                GGS_bootloaderReservedRAMmap & outArgument3,
                                                GGS_luint & outArgument4,
                                                GGS_routineDeclarationList & outArgument5,
                                                GGS_ramDefinitionList & outArgument6,
                                                GGS_string & outArgument7,
                                                GGS_piccoloDeviceModel & outArgument8,
                                                GGS_uint & outArgument9,
                                                GGS_ramBankTable & outArgument10,
                                                GGS_registerTable & outArgument11,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public: virtual void nt_ram_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GGS_ramDefinitionList & ioArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_register_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GGS_registerExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_declaration_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_declaration_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_declaration_ (GGS_routineDeclarationList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GGS_bool & ioArgument1,
                                                  GGS_bool & ioArgument2,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'section_list' non terminal
//--- 'parse' label
  public: virtual void nt_section_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_section_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_section_5F_list_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                            GGS_lstringlist & ioArgument1,
                                            GGS_ramDefinitionList & ioArgument2,
                                            GGS_lstringlist & ioArgument3,
                                            GGS_configDefinitionList & ioArgument4,
                                            GGS_constantDefinitionList & ioArgument5,
                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString
                                                    COMMA_LOCATION_ARGS) ;

//----------- 'importBootloaderSpecification' label
  public: virtual void nt_start_5F_symbol_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                         GGS_string & outArgument1,
                                                                         GGS_uint & outArgument2,
                                                                         GGS_ramBankTable & outArgument3,
                                                                         GGS_registerTable & outArgument4,
                                                                         GGS_bootloaderReservedRAMmap & outArgument5,
                                                                         GGS_routineDeclarationList & outArgument6,
                                                                         GGS_routineDeclarationList & outArgument7,
                                                                         GGS_luint & outArgument8,
                                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_importBootloaderSpecification (Compiler * inCompiler,
                                                                               GGS_lstring inFileName,
                                                                               GGS_piccoloDeviceModel & outArgument0,
                                                                               GGS_string & outArgument1,
                                                                               GGS_uint & outArgument2,
                                                                               GGS_ramBankTable & outArgument3,
                                                                               GGS_registerTable & outArgument4,
                                                                               GGS_bootloaderReservedRAMmap & outArgument5,
                                                                               GGS_routineDeclarationList & outArgument6,
                                                                               GGS_routineDeclarationList & outArgument7,
                                                                               GGS_luint & outArgument8
                                                                               COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_importBootloaderSpecification (Compiler * inCompiler,
                                                                                 GGS_string inSourceString,
                                                                                 GGS_string inNameString,
                                                                                 GGS_piccoloDeviceModel & outArgument0,
                                                                                 GGS_string & outArgument1,
                                                                                 GGS_uint & outArgument2,
                                                                                 GGS_ramBankTable & outArgument3,
                                                                                 GGS_registerTable & outArgument4,
                                                                                 GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                 GGS_routineDeclarationList & outArgument6,
                                                                                 GGS_routineDeclarationList & outArgument7,
                                                                                 GGS_luint & outArgument8
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

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                            GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GGS_bool & ioArgument2,
                                                            GGS_bool & ioArgument3,
                                                            GGS_labelMap & ioArgument4,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GGS_bool & ioArgument1,
                                                      GGS_bool & ioArgument2,
                                                      GGS_labelMap & ioArgument3,
                                                      Lexique_piccolo_5F_lexique * inCompiler) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_33 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_34 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_35 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_36 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_37 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
