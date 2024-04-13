#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @branchOverflowMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_branchOverflowMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_stringlist mProperty_mList ;
  public: inline GALGAS_stringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_branchOverflowMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_branchOverflowMap_2D_element (const GALGAS_string & in_key,
                                               const GALGAS_stringlist & in_mList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_branchOverflowMap_2D_element init_21__21_ (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_stringlist & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_branchOverflowMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_branchOverflowMap_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_stringlist & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_branchOverflowMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_branchOverflowMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GALGAS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GALGAS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveBaselineAccess'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (class cPtr_registerExpression * inObject,
                                                const class GALGAS_registerTable constin_inRegisterTable,
                                                const class GALGAS_constantMap constin_inConstantMap,
                                                class GALGAS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                class GALGAS_bitSliceTable & out_outBitSliceTable,
                                                class GALGAS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (class cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const class GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GALGAS_uint constin_inLineIndex,
                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GALGAS_string & io_ioListFileContents,
                                       class GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const class GALGAS_uint constinArgument0,
                                                                             const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                                             class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                                             class GALGAS_stringset & outArgument3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (class cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const class GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GALGAS_uint constin_inLineIndex,
                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GALGAS_string & io_ioListFileContents,
                                       class GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_CALL optimizeCALL'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeCALL (class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const class GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const class GALGAS_uint constin_inLineIndex,
                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GALGAS_string & io_ioListFileContents,
                                       class GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JSR optimizeJSR'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJSR (class cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const class GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const class GALGAS_uint constin_inLineIndex,
                                      class GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      class GALGAS_string & io_ioListFileContents,
                                      class GALGAS_bool & io_ioOptimizationsDone,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (class cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const class GALGAS_uint constin_inLineIndex,
                                                   class GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   class GALGAS_string & io_ioListFileContents,
                                                   class GALGAS_bool & io_ioOptimizationsDone,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GALGAS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GALGAS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveMidrangeAccess'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (class cPtr_registerExpression * inObject,
                                                const class GALGAS_uint constin_inTotalBankCount,
                                                const class GALGAS_uint constin_inCurrentBank,
                                                const class GALGAS_registerTable constin_inRegisterTable,
                                                const class GALGAS_constantMap constin_inConstantMap,
                                                class GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                class GALGAS_bitSliceTable & out_outBitSliceTable,
                                                class GALGAS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (class cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                       const class GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const class GALGAS_uint constin_inLineIndex,
                                       class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GALGAS_string & io_ioListFileContents,
                                       class GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_GOTO optimizeGOTO'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (class cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                       const class GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const class GALGAS_uint constin_inLineIndex,
                                       class GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       class GALGAS_string & io_ioListFileContents,
                                       class GALGAS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

